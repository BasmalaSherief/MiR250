#!/usr/bin/env python3
"""
MiR250 differential-drive controller for Isaac Sim 5.x with ROS 2 (fixed).

What was wrong in the original script
-------------------------------------
The original called:

    WheeledRobot(prim_path="/mir", usd_path=USD_PATH, wheel_dof_names=[...])

but never passed ``create_robot=True``. Inside WheeledRobot.__init__ the USD
reference is ONLY added when ``create_robot`` is True; otherwise it executes
``carb.log_error("no prim at path %s", prim_path)`` which itself crashes with
``TypeError: log_error() ...`` (carb.log_error takes exactly one argument).
Result: the robot USD was never loaded into the stage at all, every probed
prim path failed, and the stage listing showed only the ground plane.

This version instead OPENS the robot USD as the stage (open_stage). That also
brings in the ROS 2 camera / joint-state OmniGraphs which live at /Graph in
robot_ros_bridge.usd (they are siblings of /mir, so referencing only the
robot prim would silently drop them). It then auto-detects the articulation
root and the wheel joints, configures velocity drives on the drive wheels,
frees the caster joints, and runs the usual /cmd_vel -> wheels, pose -> /odom
loop via rclpy.

Run (on Basmala's machine)
--------------------------
    cd ~/isaac-sim
    unset PYTHONPATH AMENT_PREFIX_PATH LD_LIBRARY_PATH
    export ROS_DISTRO=humble
    export RMW_IMPLEMENTATION=rmw_fastrtps_cpp
    ./python.sh /path/to/isaac_diff_controller.py

Teleop from another terminal (host ROS 2 or internal libs):
    ros2 run teleop_twist_keyboard teleop_twist_keyboard

Environment toggles (all optional):
    MIR250_USD=/abs/path/to/robot.usd   use a specific USD
    MIR_HEADLESS=1                      run without the GUI
    MIR_SELFTEST=1                      drive the robot automatically and
                                        report PASS/FAIL (used for validation)
"""

import os
import sys

# A sourced ROS environment breaks Isaac Sim: the system rclpy is built for
# python 3.10, Isaac runs 3.11. Scrub /opt/ros from the paths so the bridge
# falls back to its own internal rclpy (run from a clean terminal or use
# run_mir250.sh and this never triggers).
def _foreign_ros_path(p):
    return "/opt/ros/" in p or "python3.10" in p

sys.path = [p for p in sys.path if not _foreign_ros_path(p)]
os.environ["PYTHONPATH"] = ":".join(
    p for p in os.environ.get("PYTHONPATH", "").split(":") if p and not _foreign_ros_path(p))
os.environ.setdefault("ROS_DISTRO", "humble")
os.environ.setdefault("RMW_IMPLEMENTATION", "rmw_fastrtps_cpp")

from isaacsim import SimulationApp

HEADLESS = os.environ.get("MIR_HEADLESS", "0") == "1"
SELFTEST = os.environ.get("MIR_SELFTEST", "0") == "1"
SELFTEST_LOG = os.environ.get("MIR_SELFTEST_LOG", "/tmp/mir_selftest.txt")

simulation_app = SimulationApp({"headless": HEADLESS})

# ── Load the ROS 2 bridge BEFORE importing rclpy ────────────────────────────
from isaacsim.core.utils.extensions import enable_extension

enable_extension("isaacsim.ros2.bridge")
simulation_app.update()
# ─────────────────────────────────────────────────────────────────────────────

import numpy as np
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry

from pxr import Gf, Usd, UsdGeom, UsdPhysics
from isaacsim.core.api import World
from isaacsim.core.utils.stage import open_stage
from isaacsim.robot.wheeled_robots.robots import WheeledRobot
from isaacsim.robot.wheeled_robots.controllers import DifferentialController

# ── MiR250 constants (from spec sheet) ───────────────────────────────────────
WHEEL_RADIUS = 0.100   # m (200 mm drive wheel diameter / 2)
WHEEL_BASE = 0.403     # m (distance between the two drive wheels)
MAX_LINEAR = 1.2       # m/s (MiR250 spec max)
MAX_ANGULAR = 1.5      # rad/s
MAX_WHEEL_SPEED = MAX_LINEAR / WHEEL_RADIUS  # rad/s at the wheel

_THIS_DIR = os.path.dirname(os.path.abspath(__file__))


def log(msg):
    print(msg, flush=True)
    if SELFTEST:
        with open(SELFTEST_LOG, "a") as f:
            f.write(str(msg) + "\n")


# ── 1. Locate the robot USD ──────────────────────────────────────────────────
def find_usd_path():
    names = [
        "robot_ros_bridge.usd",       # latest, includes ROS camera/joint graphs
        "mir_250_cabinet2.0.usd",
        "mir250_cabinet.usd",
        "mir_250.usd",
    ]
    env = os.environ.get("MIR250_USD")
    if env:
        if os.path.exists(env):
            return env
        log(f"WARNING: MIR250_USD={env} does not exist, falling back to search")

    search_dirs = ["/home/basmala/mir250_ws/src/usd/robots"]
    d = _THIS_DIR                       # walk up from the script location
    for _ in range(7):
        search_dirs.append(os.path.join(d, "usd", "robots"))
        search_dirs.append(os.path.join(d, "MiR250", "usd", "robots"))
        d = os.path.dirname(d)
    search_dirs.append("/home/richard/mir250_ws/basmala/MiR250/usd/robots")

    for sd in search_dirs:
        for n in names:
            p = os.path.join(sd, n)
            if os.path.exists(p):
                return p
    return None


# ── Stage helpers ────────────────────────────────────────────────────────────
def find_wheel_joints(stage):
    """Return (left_joint_prim, right_joint_prim) for the drive wheels."""
    left = right = None
    for prim in stage.Traverse():
        if prim.GetTypeName() != "PhysicsRevoluteJoint":
            continue
        name = prim.GetName().lower()
        if "caster" in name:
            continue
        if "left" in name and "wheel" in name:
            left = prim
        elif "right" in name and "wheel" in name:
            right = prim
    return left, right


def find_articulation_root(stage):
    """Pick the mobile-base articulation root (not the arm / gripper ones)."""
    roots = [p for p in stage.Traverse() if p.HasAPI(UsdPhysics.ArticulationRootAPI)]
    if not roots:
        return None
    # Prefer the base link; otherwise the shallowest root in the hierarchy.
    for p in roots:
        if "base_footprint" in str(p.GetPath()) or "base_link" == p.GetName():
            return p
    return min(roots, key=lambda p: len(str(p.GetPath()).split("/")))


def fix_geometry_offsets(stage, robot_root):
    """Remove stale geometry offsets that make the wheels eccentric.

    In this asset the robot root was moved up (+z) in a GUI session and every
    link's 'collisions'/'visuals' scope received a compensating -z translate.
    Statically the robot looks correct, but physically each wheel's collider
    sits ~10 cm BELOW its spin axis, so when the wheel turns the collider
    orbits the axle like a cam: the robot hammers the ground, bounces, and
    gets no traction. Zeroing these scope offsets puts the geometry back onto
    the physics skeleton (the robot then just drops onto its wheels at start).
    """
    root_prim = stage.GetPrimAtPath(robot_root)
    root_z = 0.0
    for op in UsdGeom.Xformable(root_prim).GetOrderedXformOps():
        if op.GetOpType() == UsdGeom.XformOp.TypeTranslate:
            v = op.Get()
            if v is not None:
                root_z = float(v[2])
    if abs(root_z) < 1e-6:
        return
    fixed = 0
    for prim in Usd.PrimRange(root_prim):
        if prim.GetName() not in ("collisions", "visuals"):
            continue
        for op in UsdGeom.Xformable(prim).GetOrderedXformOps():
            if op.GetOpType() != UsdGeom.XformOp.TypeTranslate:
                continue
            v = op.Get()
            if v is None:
                continue
            if abs(float(v[0])) < 1e-6 and abs(float(v[1])) < 1e-6 and abs(float(v[2]) + root_z) < 1e-4:
                op.Set(Gf.Vec3d(0.0, 0.0, 0.0))
                fixed += 1
    log(f"[MiR250] removed stale -z geometry offsets on {fixed} collisions/visuals scopes")
    if fixed:
        # Zeroing the offsets raised the geometry up to the skeleton; lower
        # the whole robot by the same amount so it spawns resting on the
        # floor (as authored) instead of dropping 10 cm at start.
        for op in UsdGeom.Xformable(root_prim).GetOrderedXformOps():
            if op.GetOpType() == UsdGeom.XformOp.TypeTranslate:
                v = op.Get()
                op.Set(Gf.Vec3d(float(v[0]), float(v[1]), float(v[2]) - root_z + 0.006))
                log(f"[MiR250] lowered robot root by {root_z:.4f} m to rest on the floor")


def fix_wheel_colliders(stage, robot_root):
    """Convert wheel Cylinder colliders to Capsules.

    In this asset the analytic Cylinder colliders produce no ground contacts
    (the robot sinks through its wheels onto the chassis hull), while every
    convex-hull collider works. Capsules are a native PhysX primitive that
    collides reliably on every pipeline, and with the same radius the rolling
    radius is unchanged. This mirrors the URDF importer's own
    'replace cylinders with capsules' option.
    """
    wheel_links = [p for p in stage.GetPrimAtPath(robot_root).GetChildren()
                   if p.GetName().endswith("wheel_link")]
    for link in wheel_links:
        col_scope = link.GetChild("collisions")
        if not col_scope.IsValid():
            continue
        if col_scope.IsInstanceable():
            col_scope.SetInstanceable(False)
        for prim in Usd.PrimRange(col_scope):
            if prim.GetTypeName() == "Cylinder" and prim.HasAPI(UsdPhysics.CollisionAPI):
                prim.SetTypeName("Capsule")
                log(f"[MiR250] wheel collider cylinder -> capsule: {prim.GetPath()}")


def attach_loose_parts(stage, robot_root, base_link_path, base_root_path):
    """Bolt un-jointed top-level bodies (e.g. the cabinet) to the base.

    In this asset /mir/base_link_cabinet (97 kg, carrying the UR5e + gripper)
    has NO joint connecting it to anything: when the base drives away the
    whole cabinet+arm tower stays behind floating. Create a fixed joint from
    base_link to every direct child rigid body that no joint references,
    keeping its current relative pose, and re-enable gravity on it.
    """
    from pxr import PhysxSchema
    import omni.usd as ou

    jointed = set()
    for prim in stage.Traverse():
        if "Joint" in prim.GetTypeName():
            j = UsdPhysics.Joint(prim)
            for t in list(j.GetBody0Rel().GetTargets()) + list(j.GetBody1Rel().GetTargets()):
                jointed.add(str(t))

    root = stage.GetPrimAtPath(robot_root)
    base = stage.GetPrimAtPath(base_link_path)
    m_base = ou.get_world_transform_matrix(base)
    for prim in root.GetChildren():
        if not prim.HasAPI(UsdPhysics.RigidBodyAPI):
            continue
        p = str(prim.GetPath())
        if p == base_link_path or p in jointed:
            continue
        rel = ou.get_world_transform_matrix(prim) * m_base.GetInverse()
        joint = UsdPhysics.FixedJoint.Define(
            stage, f"{robot_root}/joints/base_link_to_{prim.GetName()}_autofix")
        joint.GetBody0Rel().SetTargets([base_link_path])
        joint.GetBody1Rel().SetTargets([p])
        joint.CreateLocalPos0Attr().Set(Gf.Vec3f(rel.ExtractTranslation()))
        joint.CreateLocalRot0Attr().Set(Gf.Quatf(rel.ExtractRotationQuat()))
        joint.CreateLocalPos1Attr().Set(Gf.Vec3f(0.0, 0.0, 0.0))
        joint.CreateLocalRot1Attr().Set(Gf.Quatf(1.0))
        # joint spans the base articulation and a free body -> maximal coords
        joint.CreateExcludeFromArticulationAttr().Set(True)
        rb = UsdPhysics.RigidBodyAPI(prim)
        (rb.GetRigidBodyEnabledAttr() or rb.CreateRigidBodyEnabledAttr()).Set(True)
        (rb.GetKinematicEnabledAttr() or rb.CreateKinematicEnabledAttr()).Set(False)
        # The cabinet has CollisionAPI on a plain Xform while its child meshes
        # only carry MeshCollisionAPI approximations. PhysX then treats the
        # whole Xform as one raw triangle mesh (invalid for a dynamic body,
        # spams "falling back to convexHull" errors, and closes the cabinet's
        # open top). Push the CollisionAPI down onto the meshes that already
        # have an approximation authored, and remove it from the Xform.
        # De-instance first: instance proxies cannot be authored or traversed.
        changed = True
        while changed:
            changed = False
            for child in Usd.PrimRange(prim):
                if child.IsInstanceable():
                    child.SetInstanceable(False)
                    changed = True
        for child in list(Usd.PrimRange(prim)):
            if not child.HasAPI(UsdPhysics.CollisionAPI):
                continue
            if child.GetTypeName() in ("Mesh", "Cylinder", "Capsule", "Sphere", "Cube", "Cone"):
                continue  # a real geometry collider, leave it alone
            meshes = [m for m in Usd.PrimRange(child)
                      if m.GetTypeName() == "Mesh" and m.HasAPI(UsdPhysics.MeshCollisionAPI)]
            if not meshes:
                continue
            for m in meshes:
                UsdPhysics.CollisionAPI.Apply(m)
            child.RemoveAPI(UsdPhysics.CollisionAPI)
            log(f"[MiR250] moved CollisionAPI from {child.GetPath()} down to {len(meshes)} meshes")

        # the cabinet structure wraps around the base and the arm sits inside
        # it: it is welded on, so it must not collide with the robot itself
        # (it still collides with the world)
        fp = UsdPhysics.FilteredPairsAPI.Apply(prim)
        fp.CreateFilteredPairsRel().SetTargets([robot_root])
        log(f"[MiR250] collision filtering: {p} <-> {robot_root}")
        px = PhysxSchema.PhysxRigidBodyAPI.Apply(prim)
        px.CreateDisableGravityAttr().Set(False)
        log(f"[MiR250] attached loose body {p} to {base_link_path} (fixed joint, dynamics enabled)")

        # Rigid bodies nested under this prim (the UR5e links live inside the
        # cabinet's hierarchy) are illegal once the cabinet becomes a body.
        # PhysX's sanctioned fix: give each nested body a world-space
        # transform with an XformStack reset so it is pose-independent.
        for child in Usd.PrimRange(prim):
            if child == prim or not child.HasAPI(UsdPhysics.RigidBodyAPI):
                continue
            m = ou.get_world_transform_matrix(child)
            xf = UsdGeom.Xformable(child)
            xf.ClearXformOpOrder()
            xf.AddTranslateOp(UsdGeom.XformOp.PrecisionDouble).Set(m.ExtractTranslation())
            xf.AddOrientOp(UsdGeom.XformOp.PrecisionDouble).Set(m.ExtractRotationQuat())
            xf.SetResetXformStack(True)
            log(f"[MiR250] world-space xform reset on nested body {child.GetPath()}")

    # Strip ArticulationRootAPI from prims whose subtree has no moving joints
    # (e.g. the camera holder) - a lone rigid body is not an articulation.
    # Never touch the base articulation root: its joints live under
    # <robot>/joints, outside its own subtree.
    for prim in list(stage.Traverse()):
        if not prim.HasAPI(UsdPhysics.ArticulationRootAPI):
            continue
        if str(prim.GetPath()) == base_root_path:
            continue
        has_moving = any(
            "Joint" in c.GetTypeName() and c.GetTypeName() != "PhysicsFixedJoint"
            for c in Usd.PrimRange(prim))
        if not has_moving:
            prim.RemoveAPI(UsdPhysics.ArticulationRootAPI)
            log(f"[MiR250] removed bogus ArticulationRootAPI from {prim.GetPath()}")


def add_wheel_friction_materials(stage, robot_root):
    """High-friction drive wheels, low-friction casters.

    The MiR250 drive wheels sit mid-wheelbase between four corner casters, so
    with uniform friction most of the weight (and all of the grip) goes to the
    casters: the robot drives straight fine but cannot turn in place (the
    drive wheels shear-slip). Real MiR robots have rubber drive wheels and
    hard nylon casters; model that with physics materials.
    """
    from pxr import UsdShade, PhysxSchema

    def make_mat(path, static_f, dynamic_f, combine):
        mat = UsdShade.Material.Define(stage, path)
        api = UsdPhysics.MaterialAPI.Apply(mat.GetPrim())
        api.CreateStaticFrictionAttr(static_f)
        api.CreateDynamicFrictionAttr(dynamic_f)
        api.CreateRestitutionAttr(0.0)
        px = PhysxSchema.PhysxMaterialAPI.Apply(mat.GetPrim())
        px.CreateFrictionCombineModeAttr(combine)
        return mat

    drive_mat = make_mat("/World/MiRWheelMaterials/DriveWheel", 1.5, 1.2, "max")
    caster_mat = make_mat("/World/MiRWheelMaterials/CasterWheel", 0.05, 0.05, "min")

    root = stage.GetPrimAtPath(robot_root)
    for link in root.GetChildren():
        name = link.GetName()
        if not name.endswith("wheel_link"):
            continue
        mat = caster_mat if "caster" in name else drive_mat
        col_scope = link.GetChild("collisions")
        if not col_scope.IsValid():
            continue
        if col_scope.IsInstanceable():
            col_scope.SetInstanceable(False)
        for prim in Usd.PrimRange(col_scope):
            if prim.HasAPI(UsdPhysics.CollisionAPI):
                UsdShade.MaterialBindingAPI.Apply(prim).Bind(
                    mat, UsdShade.Tokens.weakerThanDescendants, "physics")
                log(f"[MiR250] {'caster' if 'caster' in name else 'drive'} friction material -> {prim.GetPath()}")


def smooth_wheel_visuals(stage, robot_root):
    """Render the wheel cylinders smooth.

    The wheels are UsdGeom Cylinder primitives; the RTX viewport tessellates
    them coarsely by default so they look like faceted prisms up close.
    Purely cosmetic - physics uses the analytic (perfectly round) cylinder.
    """
    from pxr import Sdf
    root = stage.GetPrimAtPath(robot_root)
    count = 0
    for link in root.GetChildren():
        if not link.GetName().endswith("wheel_link"):
            continue
        vis = link.GetChild("visuals")
        if not vis.IsValid():
            continue
        if vis.IsInstanceable():
            vis.SetInstanceable(False)
        for prim in Usd.PrimRange(vis):
            if prim.GetTypeName() in ("Cylinder", "Capsule", "Sphere"):
                prim.CreateAttribute("refinementEnableOverride", Sdf.ValueTypeNames.Bool).Set(True)
                prim.CreateAttribute("refinementLevel", Sdf.ValueTypeNames.Int).Set(3)
                count += 1
    log(f"[MiR250] smooth render refinement on {count} wheel visuals")


def configure_drives(stage, wheel_joint_prims):
    """Velocity drive on the two drive wheels, free-spinning casters."""
    wheel_paths = {str(p.GetPath()) for p in wheel_joint_prims}
    for prim in stage.Traverse():
        t = prim.GetTypeName()
        if t not in ("PhysicsRevoluteJoint",):
            continue
        if str(prim.GetPath()) in wheel_paths:
            if not prim.HasAPI(UsdPhysics.DriveAPI):
                UsdPhysics.DriveAPI.Apply(prim, "angular")
            drive = UsdPhysics.DriveAPI.Get(prim, "angular")
            (drive.GetDampingAttr() or drive.CreateDampingAttr()).Set(1.0e5)
            (drive.GetStiffnessAttr() or drive.CreateStiffnessAttr()).Set(0.0)
            (drive.GetMaxForceAttr() or drive.CreateMaxForceAttr()).Set(250.0)
            log(f"[MiR250] velocity drive on: {prim.GetPath()}")
        elif "caster" in prim.GetName().lower() and prim.HasAPI(UsdPhysics.DriveAPI):
            # remove the imported position drive entirely so the caster joints
            # are completely free (matches the known-good MiR250 setup)
            prim.RemoveAPI(UsdPhysics.DriveAPI, "angular")
            log(f"[MiR250] removed drive from caster joint: {prim.GetPath()}")


class MiR250IsaacNode(Node):
    def __init__(self):
        super().__init__("mir250_isaac_controller")
        self.cmd_vel = Twist()
        self.create_subscription(Twist, "/cmd_vel", self.cmd_vel_cb, 10)
        self.odom_pub = self.create_publisher(Odometry, "/odom", 10)

    def cmd_vel_cb(self, msg):
        self.cmd_vel = msg


def main():
    global SELFTEST
    if SELFTEST and os.path.exists(SELFTEST_LOG):
        os.remove(SELFTEST_LOG)

    usd_path = find_usd_path()
    if usd_path is None:
        log("ERROR: no robot USD found. Set MIR250_USD=/abs/path/to/robot_ros_bridge.usd")
        simulation_app.close()
        return
    log(f"[MiR250] opening stage: {usd_path}")

    # Open the robot file AS the stage: brings in /mir AND the /Graph ROS
    # graphs (cameras + joint states) that live next to it in the same file.
    open_stage(usd_path)
    simulation_app.update()

    # Remove stray PhysicsScene prims that ship nested inside sub-assets
    # (e.g. camera_holder_d405.usd) so World creates one clean scene instead
    # of reusing a random nested one.
    import omni.usd
    pre_stage = omni.usd.get_context().get_stage()
    for prim in list(pre_stage.Traverse()):
        if prim.GetTypeName() == "PhysicsScene" and len(str(prim.GetPath()).split("/")) > 2:
            try:
                prim.SetActive(False)
                log(f"[MiR250] deactivated nested physics scene: {prim.GetPath()}")
            except Exception as e:
                log(f"[MiR250] could not deactivate {prim.GetPath()}: {e}")

    # The MiR wheels are analytic Cylinder colliders (URDF import). The PhysX
    # GPU pipeline does NOT support this custom geometry -> the wheels generate
    # no ground contacts, the robot sinks through them onto its chassis and
    # cannot drive. device="cpu" keeps physics on the CPU, where analytic
    # cylinders collide correctly (and it is lighter on laptop GPUs).
    world = World(stage_units_in_meters=1.0, backend="numpy", device="cpu")
    physics_ctx = world.get_physics_context()
    physics_ctx.enable_gpu_dynamics(False)
    physics_ctx.set_broadphase_type("MBP")
    log("[MiR250] physics: CPU dynamics + MBP broadphase (cylinder wheel colliders)")

    stage = world.stage

    # The URDF-importer prototype scopes (/colliders, /meshes, /visuals) are
    # meant to stay dormant behind a reference to /mir. When the file is opened
    # directly as a stage they become LIVE static colliders piled at the
    # origin — the robot lands on them and the wheels slip on phantom
    # geometry. Deactivate the scopes; the robot's own (instanced) copies
    # compose through references to the child specs and are unaffected.
    for scope in ("/colliders", "/meshes", "/visuals"):
        prim = stage.GetPrimAtPath(scope)
        if prim.IsValid() and prim.IsActive():
            prim.SetActive(False)
            log(f"[MiR250] deactivated prototype scope: {scope}")

    # If the environment reference (remote grid) failed to load, add a ground.
    flat_grid = stage.GetPrimAtPath("/FlatGrid")
    if not (flat_grid.IsValid() and flat_grid.GetChildren()):
        log("[MiR250] no environment found in stage -> adding default ground plane")
        world.scene.add_default_ground_plane()

    # ── 2. Find robot pieces in the stage ────────────────────────────────────
    left_j, right_j = find_wheel_joints(stage)
    root = find_articulation_root(stage)
    if left_j is None or right_j is None or root is None:
        log("ERROR: could not find wheel joints / articulation root. Stage contents:")
        for prim in stage.Traverse():
            if prim.GetTypeName() or len(str(prim.GetPath()).split("/")) <= 3:
                log(f"  {prim.GetPath()} [{prim.GetTypeName()}]")
        simulation_app.close()
        return

    root_path = str(root.GetPath())
    wheel_names = [left_j.GetName(), right_j.GetName()]
    log(f"[MiR250] articulation root: {root_path}")
    log(f"[MiR250] wheel joints: {wheel_names}")

    robot_root = "/" + str(left_j.GetPath()).split("/")[1]
    fix_geometry_offsets(stage, robot_root)
    base_link_path = str(UsdPhysics.RevoluteJoint(left_j).GetBody0Rel().GetTargets()[0])
    attach_loose_parts(stage, robot_root, base_link_path, root_path)
    add_wheel_friction_materials(stage, robot_root)
    smooth_wheel_visuals(stage, robot_root)
    configure_drives(stage, [left_j, right_j])

    robot = world.scene.add(
        WheeledRobot(
            prim_path=root_path,
            name="mir",
            wheel_dof_names=wheel_names,
        )
    )

    controller = DifferentialController(
        name="mir250_controller",
        wheel_radius=WHEEL_RADIUS,
        wheel_base=WHEEL_BASE,
        max_linear_speed=MAX_LINEAR,
        max_angular_speed=MAX_ANGULAR,
        max_wheel_speed=MAX_WHEEL_SPEED,
    )

    # ── 3. ROS 2 ─────────────────────────────────────────────────────────────
    rclpy.init()
    ros_node = MiR250IsaacNode()

    world.reset()
    log(f"[MiR250] DOFs: {robot.dof_names}")
    log(f"[MiR250] wheel dof indices: {robot._wheel_dof_indices}")

    # ── 4. Sim loop ──────────────────────────────────────────────────────────
    odom_count = 0
    step = 0
    start_pos, _ = robot.get_world_pose()
    max_dist = 0.0
    was_stopped = False  # GUI Stop invalidates physics handles; re-init on Play

    while simulation_app.is_running():
        world.step(render=not HEADLESS or not SELFTEST)
        rclpy.spin_once(ros_node, timeout_sec=0)
        step += 1

        if SELFTEST:
            # scripted commands instead of teleop: forward, then rotate
            if step < 60:
                ros_node.cmd_vel = Twist()
            elif step < 360:
                t = Twist(); t.linear.x = 0.6
                ros_node.cmd_vel = t
            elif step < 660:
                t = Twist(); t.angular.z = 1.0
                ros_node.cmd_vel = t
            pos, quat = robot.get_world_pose()
            max_dist = max(max_dist, float(np.linalg.norm(np.array(pos[:2]) - np.array(start_pos[:2]))))
            if step % 60 == 0:
                jv = robot.get_joint_velocities()
                lv = robot.get_linear_velocity()
                yaw_dbg = np.degrees(2.0 * np.arctan2(quat[3], quat[0]))
                log(f"[DBG] step={step} wheel_vel={jv[4]:.2f},{jv[5]:.2f} rad/s "
                    f"base_vel={float(np.linalg.norm(lv[:2])):.3f} m/s yaw={yaw_dbg:.1f} "
                    f"pos=({pos[0]:.2f},{pos[1]:.2f},{pos[2]:.3f})")
            if step >= 660:
                yaw = 2.0 * np.arctan2(quat[3], quat[0])
                # max_dist (not final position) so a wall in the scene doesn't
                # mask a working drive; yaw shows in-place rotation works.
                ok = max_dist > 0.5 and abs(np.degrees(yaw)) > 45 and odom_count > 100
                log(f"[SELFTEST] max_displacement={max_dist:.3f} m  yaw={np.degrees(yaw):.1f} deg  odom_msgs={odom_count}")
                log(f"[SELFTEST] {'PASS' if ok else 'FAIL'}")
                if HEADLESS:
                    break
                # GUI: keep the sim open for viewing/teleop after the demo
                SELFTEST = False
                ros_node.cmd_vel = Twist()

        if world.is_stopped():
            was_stopped = True

        if world.is_playing():
            if was_stopped:
                # user pressed Stop then Play in the GUI: physics was reset,
                # so re-acquire the articulation handles before commanding
                try:
                    robot.initialize()
                    ros_node.cmd_vel = Twist()
                    log("[MiR250] timeline restarted -> robot re-initialized")
                except Exception as e:
                    log(f"[MiR250] re-init after stop failed ({e}), retrying next frame")
                    continue
                was_stopped = False
            cmd = ros_node.cmd_vel
            robot.apply_wheel_actions(
                controller.forward(command=np.array([cmd.linear.x, cmd.angular.z]))
            )

            position, orientation = robot.get_world_pose()
            linear_velocity = robot.get_linear_velocity()
            angular_velocity = robot.get_angular_velocity()

            odom = Odometry()
            odom.header.stamp = ros_node.get_clock().now().to_msg()
            odom.header.frame_id = "odom"
            odom.child_frame_id = "base_footprint"
            odom.pose.pose.position.x = float(position[0])
            odom.pose.pose.position.y = float(position[1])
            odom.pose.pose.position.z = float(position[2])
            # Isaac returns [w, x, y, z]; ROS wants x, y, z, w
            odom.pose.pose.orientation.x = float(orientation[1])
            odom.pose.pose.orientation.y = float(orientation[2])
            odom.pose.pose.orientation.z = float(orientation[3])
            odom.pose.pose.orientation.w = float(orientation[0])
            odom.twist.twist.linear.x = float(linear_velocity[0])
            odom.twist.twist.linear.y = float(linear_velocity[1])
            odom.twist.twist.angular.z = float(angular_velocity[2])
            ros_node.odom_pub.publish(odom)
            odom_count += 1

    ros_node.destroy_node()
    rclpy.shutdown()
    simulation_app.close()


if __name__ == "__main__":
    main()
