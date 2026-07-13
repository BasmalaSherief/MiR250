import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
import time
import math

class CalibrationTest(Node):
    def __init__(self):
        super().__init__("calibration_test")
        self.pub = self.create_publisher(Twist, "/cmd_vel", 10)
        self.odom_sub = self.create_subscription(
            Odometry, "/odom", self.odom_cb, 10
        )
        self.start_x = None
        self.start_y = None
        self.current_x = 0.0
        self.current_y = 0.0
        self.current_yaw = 0.0
        self.start_yaw = None

    def odom_cb(self, msg):
        self.current_x = msg.pose.pose.position.x
        self.current_y = msg.pose.pose.position.y

        # Extract yaw from quaternion
        q = msg.pose.pose.orientation
        siny = 2.0 * (q.w * q.z + q.x * q.y)
        cosy = 1.0 - 2.0 * (q.y * q.y + q.z * q.z)
        self.current_yaw = math.atan2(siny, cosy)

        if self.start_x is None:
            self.start_x = self.current_x
            self.start_y = self.current_y
            self.start_yaw = self.current_yaw

    def run_forward_test(self):
        """Test 1: drive forward 1m at 0.5 m/s — should take ~2 seconds"""
        print("\n=== TEST 1: Forward 1 meter ===")
        self.start_x = None
        self.start_y = None

        cmd = Twist()
        cmd.linear.x = 0.5
        start_time = time.time()

        # Drive for 2 seconds
        while time.time() - start_time < 2.0:
            self.pub.publish(cmd)
            rclpy.spin_once(self, timeout_sec=0.05)

        # Stop
        self.pub.publish(Twist())
        rclpy.spin_once(self, timeout_sec=0.1)

        # Calculate true 2D distance
        dx = self.current_x - (self.start_x or 0.0)
        dy = self.current_y - (self.start_y or 0.0)
        distance = math.sqrt(dx**2 + dy**2)
        
        elapsed = time.time() - start_time
        print(f"  Distance traveled : {distance:.4f} m  (expected: ~1.0 m)")
        print(f"  Time elapsed      : {elapsed:.2f} s   (expected: ~2.0 s)")
        print(f"  Error             : {abs(distance - 1.0)*100:.2f} cm")

        if abs(distance - 1.0) < 0.05:
            print("  RESULT: ✅ PASS (within 5 cm)")
        else:
            print("  RESULT: ❌ FAIL — check WHEEL_RADIUS value")

    def run_rotation_test(self):
        """Test 2: rotate 360° at 0.5 rad/s — should take ~12.6 seconds"""
        print("\n=== TEST 2: Rotation 360° ===")
        self.start_yaw = None

        cmd = Twist()
        cmd.angular.z = 0.5
        start_time = time.time()
        total_rotation = 0.0
        last_yaw = None

        while total_rotation < 2 * math.pi:
            self.pub.publish(cmd)
            rclpy.spin_once(self, timeout_sec=0.05)
            if last_yaw is not None:
                delta = self.current_yaw - last_yaw
                # Handle wrap-around
                if delta > math.pi:
                    delta -= 2 * math.pi
                elif delta < -math.pi:
                    delta += 2 * math.pi
                total_rotation += abs(delta)
            last_yaw = self.current_yaw

        # Stop
        self.pub.publish(Twist())
        elapsed = time.time() - start_time
        print(f"  Time for 360°     : {elapsed:.2f} s  (expected: ~12.57 s)")
        print(f"  Total rotation    : {math.degrees(total_rotation):.1f}°")
        print(f"  Error             : {abs(elapsed - 12.57):.2f} s")

        if abs(elapsed - 12.57) < 1.0:
            print("  RESULT: ✅ PASS (within 1 second)")
        else:
            print("  RESULT: ❌ FAIL — check WHEEL_BASE value")


def main():
    rclpy.init()
    node = CalibrationTest()

    # Wait for first odom message
    print("Waiting for /odom...")
    while node.start_x is None:
        rclpy.spin_once(node, timeout_sec=0.1)

    node.run_forward_test()
    time.sleep(2.0)  # pause between tests
    node.run_rotation_test()

    print("\n=== CALIBRATION COMPLETE ===")
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()