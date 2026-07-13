// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/HookStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__HOOK_STATUS__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__HOOK_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/hook_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_HookStatus_trolley
{
public:
  explicit Init_HookStatus_trolley(::mir_msgs::msg::HookStatus & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::HookStatus trolley(::mir_msgs::msg::HookStatus::_trolley_type arg)
  {
    msg_.trolley = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::HookStatus msg_;
};

class Init_HookStatus_trolley_attached
{
public:
  explicit Init_HookStatus_trolley_attached(::mir_msgs::msg::HookStatus & msg)
  : msg_(msg)
  {}
  Init_HookStatus_trolley trolley_attached(::mir_msgs::msg::HookStatus::_trolley_attached_type arg)
  {
    msg_.trolley_attached = std::move(arg);
    return Init_HookStatus_trolley(msg_);
  }

private:
  ::mir_msgs::msg::HookStatus msg_;
};

class Init_HookStatus_braked
{
public:
  explicit Init_HookStatus_braked(::mir_msgs::msg::HookStatus & msg)
  : msg_(msg)
  {}
  Init_HookStatus_trolley_attached braked(::mir_msgs::msg::HookStatus::_braked_type arg)
  {
    msg_.braked = std::move(arg);
    return Init_HookStatus_trolley_attached(msg_);
  }

private:
  ::mir_msgs::msg::HookStatus msg_;
};

class Init_HookStatus_angle
{
public:
  explicit Init_HookStatus_angle(::mir_msgs::msg::HookStatus & msg)
  : msg_(msg)
  {}
  Init_HookStatus_braked angle(::mir_msgs::msg::HookStatus::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_HookStatus_braked(msg_);
  }

private:
  ::mir_msgs::msg::HookStatus msg_;
};

class Init_HookStatus_height
{
public:
  explicit Init_HookStatus_height(::mir_msgs::msg::HookStatus & msg)
  : msg_(msg)
  {}
  Init_HookStatus_angle height(::mir_msgs::msg::HookStatus::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_HookStatus_angle(msg_);
  }

private:
  ::mir_msgs::msg::HookStatus msg_;
};

class Init_HookStatus_length
{
public:
  explicit Init_HookStatus_length(::mir_msgs::msg::HookStatus & msg)
  : msg_(msg)
  {}
  Init_HookStatus_height length(::mir_msgs::msg::HookStatus::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_HookStatus_height(msg_);
  }

private:
  ::mir_msgs::msg::HookStatus msg_;
};

class Init_HookStatus_available
{
public:
  Init_HookStatus_available()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HookStatus_length available(::mir_msgs::msg::HookStatus::_available_type arg)
  {
    msg_.available = std::move(arg);
    return Init_HookStatus_length(msg_);
  }

private:
  ::mir_msgs::msg::HookStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::HookStatus>()
{
  return mir_msgs::msg::builder::Init_HookStatus_available();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__HOOK_STATUS__BUILDER_HPP_
