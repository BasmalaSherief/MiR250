// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/RobotMode.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__ROBOT_MODE__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__ROBOT_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/robot_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotMode_robot_mode_string
{
public:
  explicit Init_RobotMode_robot_mode_string(::mir_msgs::msg::RobotMode & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::RobotMode robot_mode_string(::mir_msgs::msg::RobotMode::_robot_mode_string_type arg)
  {
    msg_.robot_mode_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::RobotMode msg_;
};

class Init_RobotMode_robot_mode
{
public:
  Init_RobotMode_robot_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotMode_robot_mode_string robot_mode(::mir_msgs::msg::RobotMode::_robot_mode_type arg)
  {
    msg_.robot_mode = std::move(arg);
    return Init_RobotMode_robot_mode_string(msg_);
  }

private:
  ::mir_msgs::msg::RobotMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::RobotMode>()
{
  return mir_msgs::msg::builder::Init_RobotMode_robot_mode();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__ROBOT_MODE__BUILDER_HPP_
