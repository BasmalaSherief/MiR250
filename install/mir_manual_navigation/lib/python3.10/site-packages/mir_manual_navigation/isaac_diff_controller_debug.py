"""
Debug version of isaac_diff_controller.py that tries multiple prim paths
to find the correct robot configuration in the USD file.

This helps identify what paths and joint names are actually available in your USD.
"""

from isaacsim import SimulationApp
import os
import sys

simulation_app = SimulationApp({"headless": False})

# ── Force Isaac Sim to load the ROS 2 bridge BEFORE importing rclpy ──
from omni.isaac.core.utils.extensions import enable_extension
enable_extension("omni.isaac.ros2_bridge")
# ─────────────────────────────────────────────────────────────────────

import numpy as np
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry

from isaacsim.core.api import World
from isaacsim.robot.wheeled_robots.robots import WheeledRobot
from isaacsim.robot.wheeled_robots.controllers import DifferentialController

# ── MiR250 constants (from spec sheet) ──────────────────────────────────────
WHEEL_RADIUS   = 0.100   # meters  (drive wheel: 200mm diameter / 2)
WHEEL_BASE     = 0.403   # meters  
MAX_LINEAR     = 2.0     # m/s
MAX_ANGULAR    = 1.5     # rad/s
MAX_WHEEL_RPM  = 20.0    # rad/s = MAX_LINEAR / WHEEL_RADIUS

# Resolve USD path relative to this script
_THIS_DIR = os.path.dirname(os.path.abspath(__file__))
USD_CANDIDATES = [
    os.path.abspath("/home/basmala/mir250_ws/src/usd/robots/mir_250_cabinet2.0.usd"),
    os.path.abspath(os.path.join(_THIS_DIR, "..", "..", "usd", "robots", "mir_250_cabinet2.0.usd")),
]

USD_PATH = None
for p in USD_CANDIDATES:
    if os.path.exists(p):
        USD_PATH = p
        break
if USD_PATH is None:
    USD_PATH = USD_CANDIDATES[0]


class MiR250IsaacNode(Node):
    def __init__(self):
        super().__init__("mir250_isaac_controller")
        self.cmd_vel = Twist()
        self.subscription = self.create_subscription(
            Twist, "/cmd_vel", self.cmd_vel_cb, 10
        )
        self.odom_pub = self.create_publisher(Odometry, "/odom", 10)

    def cmd_vel_cb(self, msg):
        self.cmd_vel = msg


def print_stage_hierarchy(stage, max_depth=4, current_depth=0, prim_path="/", prefix=""):
    """Debug function to print all prims in the stage"""
    if current_depth >= max_depth:
        return
    
    try:
        from pxr import Usd
        prim = stage.GetPrimAtPath(prim_path)
        if not prim.IsValid():
            return
            
        # Print current prim
        type_name = prim.GetTypeName()
        print(f"{prefix}📍 {prim_path}")
        if type_name:
            print(f"{prefix}   └─ Type: {type_name}")
        
        # Look for joint-like properties
        if "joint" in prim_path.lower() or "wheel" in prim_path.lower():
            print(f"{prefix}   ⚙️  ** JOINT/WHEEL FOUND **")
        
        # Recurse into children
        for child in prim.GetChildren():
            child_path = child.GetPath()
            new_prefix = prefix + "   "
            print_stage_hierarchy(stage, max_depth, current_depth + 1, child_path, new_prefix)
    except Exception as e:
        print(f"Error accessing prim {prim_path}: {e}")


def find_wheels_in_stage(stage):
    """Search for all wheel-related prims"""
    print("\n🔍 Searching for wheel-related prims...")
    
    try:
        from pxr import Usd
        
        wheels = []
        for prim in stage.Traverse():
            prim_path = str(prim.GetPath())
            prim_name = prim.GetName()
            
            if any(keyword in prim_path.lower() for keyword in 
                   ["wheel", "joint", "axle", "motor", "drive"]):
                wheels.append((prim_path, prim.GetTypeName()))
        
        if wheels:
            print("  Found potential wheel/joint prims:")
            for path, ptype in wheels:
                print(f"    - {path} [{ptype}]")
        else:
            print("  No wheel/joint prims found")
        
        return wheels
    except Exception as e:
        print(f"  Error searching for wheels: {e}")
        return []


def try_load_robot(world, prim_path, joint_names):
    """Try to load robot with given prim_path and joint names"""
    print(f"\n🚀 Attempting to load:")
    print(f"   Prim Path: {prim_path}")
    print(f"   Wheel DOF Names: {joint_names}")
    
    try:
        robot = world.scene.add(
            WheeledRobot(
                prim_path=prim_path,
                name="mir250",
                usd_path=USD_PATH,
                wheel_dof_names=joint_names,
            )
        )
        
        if robot is not None:
            print(f"   ✅ SUCCESS!")
            return robot
        else:
            print(f"   ❌ Robot returned None")
            return None
            
    except TypeError as e:
        if "log_error()" in str(e):
            print(f"   ❌ Isaac Sim logging error (joints likely don't exist)")
            print(f"      {e}")
        else:
            print(f"   ❌ TypeError: {e}")
    except Exception as e:
        print(f"   ❌ {type(e).__name__}: {e}")
    
    return None


def main():
    print("=" * 70)
    print("ISAAC DIFF CONTROLLER - DEBUG MODE")
    print("=" * 70)
    
    # ── 1. Init IsaacSim world ───────────────────────────────────────────────
    print(f"\n1️⃣  Initializing Isaac Sim world...")
    world = World(stage_units_in_meters=1.0)
    world.scene.add_default_ground_plane()
    print("   ✅ World initialized")

    # ── 2. Verify USD file exists  ───────────────────────────────────────────
    print(f"\n2️⃣  Checking USD file...")
    if not os.path.exists(USD_PATH):
        print(f"   ❌ USD file not found: {USD_PATH}")
        simulation_app.close()
        return
    print(f"   ✅ Found: {USD_PATH}")

    # ── 3. Print stage hierarchy BEFORE loading robot ────────────────────────
    print(f"\n3️⃣  Stage hierarchy (before robot load):")
    print_stage_hierarchy(world.stage)

    # ── 4. Try multiple configurations ────────────────────────────────────────
    print(f"\n4️⃣  Attempting to load robot with different configurations...")
    
    # List of (prim_path, joint_names) combinations to try
    configs = [
        ("/mir", ["left_wheel_joint", "right_wheel_joint"]),
        ("/MiR", ["left_wheel_joint", "right_wheel_joint"]),
        ("/mir_robot", ["left_wheel_joint", "right_wheel_joint"]),
        ("/mir250", ["left_wheel_joint", "right_wheel_joint"]),
        ("/mir", ["left_wheel", "right_wheel"]),
        ("/mir", ["Wheel_L", "Wheel_R"]),
        ("/mir", ["left_motor", "right_motor"]),
    ]
    
    robot = None
    successful_config = None
    
    for prim_path, joint_names in configs:
        robot = try_load_robot(world, prim_path, joint_names)
        if robot is not None:
            successful_config = (prim_path, joint_names)
            break
    
    if robot is None:
        print(f"\n❌ All configurations failed!")
        print(f"\n5️⃣  Searching for wheels in stage...")
        find_wheels_in_stage(world.stage)
        print("\n📋 NEXT STEPS:")
        print("   1. Open mir_250_cabinet2.0.usd in Isaac Sim GUI")
        print("   2. In the Stage tree (left panel), expand all nodes")
        print("   3. Find the wheel/joint prims and note their exact paths")
        print("   4. Update the prim_path and joint_names in this script")
        print("   5. Re-run to verify the configuration works")
        simulation_app.close()
        return
    
    print(f"\n✅ SUCCESS! Robot loaded with configuration:")
    print(f"   Prim Path: {successful_config[0]}")
    print(f"   Joint Names: {successful_config[1]}")
    print(f"   📌 Use this configuration in isaac_diff_controller.py!")
    
    # ── 5. Setup differential controller ────────────────────────────────────
    print(f"\n6️⃣  Setting up differential controller...")
    controller = DifferentialController(
        name="mir250_controller",
        wheel_radius=WHEEL_RADIUS,
        wheel_base=WHEEL_BASE,
        max_linear_speed=MAX_LINEAR,
        max_angular_speed=MAX_ANGULAR,
        max_wheel_speed=MAX_WHEEL_RPM,
    )
    print("   ✅ Controller initialized")

    # ── 6. Init ROS2 ────────────────────────────────────────────────────────
    print(f"\n7️⃣  Initializing ROS2...")
    rclpy.init()
    ros_node = MiR250IsaacNode()
    print("   ✅ ROS2 initialized")

    world.reset()
    print("\n" + "=" * 70)
    print("READY FOR SIMULATION")
    print("=" * 70)
    print("\nPress STOP in Isaac Sim to exit...\n")

    # ── 7. Simulation loop ──────────────────────────────────────────────────
    try:
        while simulation_app.is_running():
            world.step(render=True)
            rclpy.spin_once(ros_node, timeout_sec=0)

            if world.is_playing():
                cmd = ros_node.cmd_vel
                robot.apply_wheel_actions(
                    controller.forward(
                        command=np.array([cmd.linear.x, cmd.angular.z])
                    )
                )
                
                # ── Read pose and publish /odom ─────────────────────────────
                position, orientation = robot.get_world_pose()
                linear_velocity = robot.get_linear_velocity()
                angular_velocity = robot.get_angular_velocity()

                odom_msg = Odometry()
                odom_msg.header.stamp = ros_node.get_clock().now().to_msg()
                odom_msg.header.frame_id = "odom"
                odom_msg.child_frame_id = "base_footprint"

                # Position
                odom_msg.pose.pose.position.x = float(position[0])
                odom_msg.pose.pose.position.y = float(position[1])
                odom_msg.pose.pose.position.z = float(position[2])

                # Orientation (IsaacSim returns [w, x, y, z], ROS2 needs [x, y, z, w])
                odom_msg.pose.pose.orientation.x = float(orientation[1])
                odom_msg.pose.pose.orientation.y = float(orientation[2])
                odom_msg.pose.pose.orientation.z = float(orientation[3])
                odom_msg.pose.pose.orientation.w = float(orientation[0])

                # Velocity
                odom_msg.twist.twist.linear.x = float(linear_velocity[0])
                odom_msg.twist.twist.linear.y = float(linear_velocity[1])
                odom_msg.twist.twist.angular.z = float(angular_velocity[2])

                ros_node.odom_pub.publish(odom_msg)
    
    except KeyboardInterrupt:
        print("\nShutting down...")
    finally:
        rclpy.shutdown()
        simulation_app.close()


if __name__ == "__main__":
    main()
