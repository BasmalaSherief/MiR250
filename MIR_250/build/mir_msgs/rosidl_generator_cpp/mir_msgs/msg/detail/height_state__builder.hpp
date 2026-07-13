// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/HeightState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__HEIGHT_STATE__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__HEIGHT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/height_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_HeightState_height
{
public:
  explicit Init_HeightState_height(::mir_msgs::msg::HeightState & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::HeightState height(::mir_msgs::msg::HeightState::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::HeightState msg_;
};

class Init_HeightState_state
{
public:
  explicit Init_HeightState_state(::mir_msgs::msg::HeightState & msg)
  : msg_(msg)
  {}
  Init_HeightState_height state(::mir_msgs::msg::HeightState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_HeightState_height(msg_);
  }

private:
  ::mir_msgs::msg::HeightState msg_;
};

class Init_HeightState_state_string
{
public:
  Init_HeightState_state_string()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HeightState_state state_string(::mir_msgs::msg::HeightState::_state_string_type arg)
  {
    msg_.state_string = std::move(arg);
    return Init_HeightState_state(msg_);
  }

private:
  ::mir_msgs::msg::HeightState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::HeightState>()
{
  return mir_msgs::msg::builder::Init_HeightState_state_string();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__HEIGHT_STATE__BUILDER_HPP_
