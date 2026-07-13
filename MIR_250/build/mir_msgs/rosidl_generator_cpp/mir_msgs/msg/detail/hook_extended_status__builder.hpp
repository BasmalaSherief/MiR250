// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/HookExtendedStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__HOOK_EXTENDED_STATUS__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__HOOK_EXTENDED_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/hook_extended_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_HookExtendedStatus_qr_marker_name
{
public:
  explicit Init_HookExtendedStatus_qr_marker_name(::mir_msgs::msg::HookExtendedStatus & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::HookExtendedStatus qr_marker_name(::mir_msgs::msg::HookExtendedStatus::_qr_marker_name_type arg)
  {
    msg_.qr_marker_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::HookExtendedStatus msg_;
};

class Init_HookExtendedStatus_angle
{
public:
  explicit Init_HookExtendedStatus_angle(::mir_msgs::msg::HookExtendedStatus & msg)
  : msg_(msg)
  {}
  Init_HookExtendedStatus_qr_marker_name angle(::mir_msgs::msg::HookExtendedStatus::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_HookExtendedStatus_qr_marker_name(msg_);
  }

private:
  ::mir_msgs::msg::HookExtendedStatus msg_;
};

class Init_HookExtendedStatus_height
{
public:
  explicit Init_HookExtendedStatus_height(::mir_msgs::msg::HookExtendedStatus & msg)
  : msg_(msg)
  {}
  Init_HookExtendedStatus_angle height(::mir_msgs::msg::HookExtendedStatus::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_HookExtendedStatus_angle(msg_);
  }

private:
  ::mir_msgs::msg::HookExtendedStatus msg_;
};

class Init_HookExtendedStatus_gripper
{
public:
  explicit Init_HookExtendedStatus_gripper(::mir_msgs::msg::HookExtendedStatus & msg)
  : msg_(msg)
  {}
  Init_HookExtendedStatus_height gripper(::mir_msgs::msg::HookExtendedStatus::_gripper_type arg)
  {
    msg_.gripper = std::move(arg);
    return Init_HookExtendedStatus_height(msg_);
  }

private:
  ::mir_msgs::msg::HookExtendedStatus msg_;
};

class Init_HookExtendedStatus_brake
{
public:
  explicit Init_HookExtendedStatus_brake(::mir_msgs::msg::HookExtendedStatus & msg)
  : msg_(msg)
  {}
  Init_HookExtendedStatus_gripper brake(::mir_msgs::msg::HookExtendedStatus::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_HookExtendedStatus_gripper(msg_);
  }

private:
  ::mir_msgs::msg::HookExtendedStatus msg_;
};

class Init_HookExtendedStatus_available
{
public:
  Init_HookExtendedStatus_available()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HookExtendedStatus_brake available(::mir_msgs::msg::HookExtendedStatus::_available_type arg)
  {
    msg_.available = std::move(arg);
    return Init_HookExtendedStatus_brake(msg_);
  }

private:
  ::mir_msgs::msg::HookExtendedStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::HookExtendedStatus>()
{
  return mir_msgs::msg::builder::Init_HookExtendedStatus_available();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__HOOK_EXTENDED_STATUS__BUILDER_HPP_
