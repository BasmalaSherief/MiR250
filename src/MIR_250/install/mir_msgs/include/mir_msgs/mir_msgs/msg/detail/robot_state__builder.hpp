// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotState_robot_state_string
{
public:
  explicit Init_RobotState_robot_state_string(::mir_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::RobotState robot_state_string(::mir_msgs::msg::RobotState::_robot_state_string_type arg)
  {
    msg_.robot_state_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::RobotState msg_;
};

class Init_RobotState_robot_state
{
public:
  Init_RobotState_robot_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotState_robot_state_string robot_state(::mir_msgs::msg::RobotState::_robot_state_type arg)
  {
    msg_.robot_state = std::move(arg);
    return Init_RobotState_robot_state_string(msg_);
  }

private:
  ::mir_msgs::msg::RobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::RobotState>()
{
  return mir_msgs::msg::builder::Init_RobotState_robot_state();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
