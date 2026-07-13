from isaacsim import SimulationApp
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
# Measure this from your USD: select left_wheel_joint → Property → Y position
# wheel_base = 2 * |Y_left_wheel|  (typically ~0.41–0.43 m for MiR250)
WHEEL_BASE     = 0.403   # meters  
MAX_LINEAR     = 2.0     # m/s
MAX_ANGULAR    = 1.5     # rad/s
MAX_WHEEL_RPM  = 20.0    # rad/s = MAX_LINEAR / WHEEL_RADIUS

USD_PATH = '/mir250_ws/src/MiR250/usd/robots/mir_250_cabinet2.0.usd'

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


def main():
    # ── 1. Init IsaacSim world ───────────────────────────────────────────────
    world = World(stage_units_in_meters=1.0)
    world.scene.add_default_ground_plane()

    # ── 2. Load your existing USD  ────────
    robot = world.scene.add(
        WheeledRobot(
            prim_path="/World/mir250",
            name="mir250",
            usd_path=USD_PATH,
            wheel_dof_names=["left_wheel_joint", "right_wheel_joint"],
        )
    )

    # ── 3. Differential controller ──────────────────────────────────────────
    controller = DifferentialController(
        name="mir250_controller",
        wheel_radius=WHEEL_RADIUS,
        wheel_base=WHEEL_BASE,
        max_linear_speed=MAX_LINEAR,
        max_angular_speed=MAX_ANGULAR,
        max_wheel_speed=MAX_WHEEL_RPM,
    )

    # ── 4. Init ROS2 ────────────────────────────────────────────────────────
    rclpy.init()
    ros_node = MiR250IsaacNode()

    world.reset()

    # ── 5. Simulation loop ──────────────────────────────────────────────────
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
            
            # ── 6. Read pose and publish /odom ──────────────────────────────────
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

    rclpy.shutdown()
    simulation_app.close()


if __name__ == "__main__":
    main()