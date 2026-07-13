// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/BrakeState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__BRAKE_STATE__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__BRAKE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/brake_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_BrakeState_braked
{
public:
  explicit Init_BrakeState_braked(::mir_msgs::msg::BrakeState & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::BrakeState braked(::mir_msgs::msg::BrakeState::_braked_type arg)
  {
    msg_.braked = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::BrakeState msg_;
};

class Init_BrakeState_state
{
public:
  explicit Init_BrakeState_state(::mir_msgs::msg::BrakeState & msg)
  : msg_(msg)
  {}
  Init_BrakeState_braked state(::mir_msgs::msg::BrakeState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_BrakeState_braked(msg_);
  }

private:
  ::mir_msgs::msg::BrakeState msg_;
};

class Init_BrakeState_state_string
{
public:
  Init_BrakeState_state_string()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BrakeState_state state_string(::mir_msgs::msg::BrakeState::_state_string_type arg)
  {
    msg_.state_string = std::move(arg);
    return Init_BrakeState_state(msg_);
  }

private:
  ::mir_msgs::msg::BrakeState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::BrakeState>()
{
  return mir_msgs::msg::builder::Init_BrakeState_state_string();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__BRAKE_STATE__BUILDER_HPP_
