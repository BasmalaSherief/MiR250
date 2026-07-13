// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/GripperState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/gripper_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperState_closed
{
public:
  explicit Init_GripperState_closed(::mir_msgs::msg::GripperState & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::GripperState closed(::mir_msgs::msg::GripperState::_closed_type arg)
  {
    msg_.closed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::GripperState msg_;
};

class Init_GripperState_state
{
public:
  explicit Init_GripperState_state(::mir_msgs::msg::GripperState & msg)
  : msg_(msg)
  {}
  Init_GripperState_closed state(::mir_msgs::msg::GripperState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_GripperState_closed(msg_);
  }

private:
  ::mir_msgs::msg::GripperState msg_;
};

class Init_GripperState_state_string
{
public:
  Init_GripperState_state_string()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperState_state state_string(::mir_msgs::msg::GripperState::_state_string_type arg)
  {
    msg_.state_string = std::move(arg);
    return Init_GripperState_state(msg_);
  }

private:
  ::mir_msgs::msg::GripperState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::GripperState>()
{
  return mir_msgs::msg::builder::Init_GripperState_state_string();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_
