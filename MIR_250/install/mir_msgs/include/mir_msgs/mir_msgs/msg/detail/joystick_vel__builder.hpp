// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/JoystickVel.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__JOYSTICK_VEL__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__JOYSTICK_VEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/joystick_vel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_JoystickVel_speed_command
{
public:
  explicit Init_JoystickVel_speed_command(::mir_msgs::msg::JoystickVel & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::JoystickVel speed_command(::mir_msgs::msg::JoystickVel::_speed_command_type arg)
  {
    msg_.speed_command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::JoystickVel msg_;
};

class Init_JoystickVel_joystick_token
{
public:
  Init_JoystickVel_joystick_token()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JoystickVel_speed_command joystick_token(::mir_msgs::msg::JoystickVel::_joystick_token_type arg)
  {
    msg_.joystick_token = std::move(arg);
    return Init_JoystickVel_speed_command(msg_);
  }

private:
  ::mir_msgs::msg::JoystickVel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::JoystickVel>()
{
  return mir_msgs::msg::builder::Init_JoystickVel_joystick_token();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__JOYSTICK_VEL__BUILDER_HPP_
