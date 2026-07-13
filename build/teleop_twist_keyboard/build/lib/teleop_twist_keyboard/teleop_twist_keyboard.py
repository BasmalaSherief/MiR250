#!/usr/bin/env python3
import select
import sys
import termios
import tty

import rclpy
from geometry_msgs.msg import Twist
from rclpy.node import Node


class TeleopTwistKeyboardNode(Node):
    def __init__(self):
        super().__init__('teleop_twist_keyboard')
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)
        self.linear_speed = 0.3
        self.angular_speed = 0.5
        self.get_logger().info('Keyboard teleop ready. Keys: i/j/k/l, , and q to quit.')

    def get_key(self):
        fd = sys.stdin.fileno()
        old_settings = termios.tcgetattr(fd)
        try:
            tty.setcbreak(fd)
            ready, _, _ = select.select([sys.stdin], [], [], 0.1)
            if ready:
                return sys.stdin.read(1)
            return ''
        finally:
            termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)

    def run(self):
        while rclpy.ok():
            key = self.get_key()
            if not key:
                continue
            twist = Twist()

            if key in ('i', 'I'):
                twist.linear.x = self.linear_speed
            elif key in (',', '<'):
                twist.linear.x = -self.linear_speed
            elif key in ('j', 'J'):
                twist.angular.z = self.angular_speed
            elif key in ('l', 'L'):
                twist.angular.z = -self.angular_speed
            elif key in ('k', 'K'):
                twist.linear.x = 0.0
                twist.angular.z = 0.0
            elif key in ('q', 'Q'):
                self.get_logger().info('Exiting teleop.')
                break
            else:
                continue

            self.publisher_.publish(twist)

        self.publisher_.publish(Twist())


def main(args=None):
    rclpy.init(args=args)
    node = TeleopTwistKeyboardNode()
    try:
        node.run()
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
