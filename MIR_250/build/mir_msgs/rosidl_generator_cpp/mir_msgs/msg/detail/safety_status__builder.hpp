// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/SafetyStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__SAFETY_STATUS__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__SAFETY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/safety_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_SafetyStatus_is_manual_mode_restart_required
{
public:
  explicit Init_SafetyStatus_is_manual_mode_restart_required(::mir_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::SafetyStatus is_manual_mode_restart_required(::mir_msgs::msg::SafetyStatus::_is_manual_mode_restart_required_type arg)
  {
    msg_.is_manual_mode_restart_required = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_in_manual_mode
{
public:
  explicit Init_SafetyStatus_in_manual_mode(::mir_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_is_manual_mode_restart_required in_manual_mode(::mir_msgs::msg::SafetyStatus::_in_manual_mode_type arg)
  {
    msg_.in_manual_mode = std::move(arg);
    return Init_SafetyStatus_is_manual_mode_restart_required(msg_);
  }

private:
  ::mir_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_in_sleep_mode
{
public:
  explicit Init_SafetyStatus_in_sleep_mode(::mir_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_in_manual_mode in_sleep_mode(::mir_msgs::msg::SafetyStatus::_in_sleep_mode_type arg)
  {
    msg_.in_sleep_mode = std::move(arg);
    return Init_SafetyStatus_in_manual_mode(msg_);
  }

private:
  ::mir_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_is_lifter_down
{
public:
  explicit Init_SafetyStatus_is_lifter_down(::mir_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_in_sleep_mode is_lifter_down(::mir_msgs::msg::SafetyStatus::_is_lifter_down_type arg)
  {
    msg_.is_lifter_down = std::move(arg);
    return Init_SafetyStatus_in_sleep_mode(msg_);
  }

private:
  ::mir_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_is_limited_speed_active
{
public:
  explicit Init_SafetyStatus_is_limited_speed_active(::mir_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_is_lifter_down is_limited_speed_active(::mir_msgs::msg::SafetyStatus::_is_limited_speed_active_type arg)
  {
    msg_.is_limited_speed_active = std::move(arg);
    return Init_SafetyStatus_is_lifter_down(msg_);
  }

private:
  ::mir_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_partial_mute_mask
{
public:
  explicit Init_SafetyStatus_partial_mute_mask(::mir_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_is_limited_speed_active partial_mute_mask(::mir_msgs::msg::SafetyStatus::_partial_mute_mask_type arg)
  {
    msg_.partial_mute_mask = std::move(arg);
    return Init_SafetyStatus_is_limited_speed_active(msg_);
  }

private:
  ::mir_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_mute_mask
{
public:
  explicit Init_SafetyStatus_mute_mask(::mir_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_partial_mute_mask mute_mask(::mir_msgs::msg::SafetyStatus::_mute_mask_type arg)
  {
    msg_.mute_mask = std::move(arg);
    return Init_SafetyStatus_partial_mute_mask(msg_);
  }

private:
  ::mir_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_max_rot_speed
{
public:
  explicit Init_SafetyStatus_max_rot_speed(::mir_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_mute_mask max_rot_speed(::mir_msgs::msg::SafetyStatus::_max_rot_speed_type arg)
  {
    msg_.max_rot_speed = std::move(arg);
    return Init_SafetyStatus_mute_mask(msg_);
  }

private:
  ::mir_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_max_lin_speed
{
public:
  explicit Init_SafetyStatus_max_lin_speed(::mir_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_max_rot_speed max_lin_speed(::mir_msgs::msg::SafetyStatus::_max_lin_speed_type arg)
  {
    msg_.max_lin_speed = std::move(arg);
    return Init_SafetyStatus_max_rot_speed(msg_);
  }

private:
  ::mir_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_is_safety_muted
{
public:
  explicit Init_SafetyStatus_is_safety_muted(::mir_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_max_lin_speed is_safety_muted(::mir_msgs::msg::SafetyStatus::_is_safety_muted_type arg)
  {
    msg_.is_safety_muted = std::move(arg);
    return Init_SafetyStatus_max_lin_speed(msg_);
  }

private:
  ::mir_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_is_restart_required
{
public:
  explicit Init_SafetyStatus_is_restart_required(::mir_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_is_safety_muted is_restart_required(::mir_msgs::msg::SafetyStatus::_is_restart_required_type arg)
  {
    msg_.is_restart_required = std::move(arg);
    return Init_SafetyStatus_is_safety_muted(msg_);
  }

private:
  ::mir_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_sto_feedback
{
public:
  explicit Init_SafetyStatus_sto_feedback(::mir_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_is_restart_required sto_feedback(::mir_msgs::msg::SafetyStatus::_sto_feedback_type arg)
  {
    msg_.sto_feedback = std::move(arg);
    return Init_SafetyStatus_is_restart_required(msg_);
  }

private:
  ::mir_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_in_emergency_stop
{
public:
  explicit Init_SafetyStatus_in_emergency_stop(::mir_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_sto_feedback in_emergency_stop(::mir_msgs::msg::SafetyStatus::_in_emergency_stop_type arg)
  {
    msg_.in_emergency_stop = std::move(arg);
    return Init_SafetyStatus_sto_feedback(msg_);
  }

private:
  ::mir_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_in_protective_stop
{
public:
  explicit Init_SafetyStatus_in_protective_stop(::mir_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_in_emergency_stop in_protective_stop(::mir_msgs::msg::SafetyStatus::_in_protective_stop_type arg)
  {
    msg_.in_protective_stop = std::move(arg);
    return Init_SafetyStatus_in_emergency_stop(msg_);
  }

private:
  ::mir_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_firmware_version
{
public:
  explicit Init_SafetyStatus_firmware_version(::mir_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_in_protective_stop firmware_version(::mir_msgs::msg::SafetyStatus::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_SafetyStatus_in_protective_stop(msg_);
  }

private:
  ::mir_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_is_firmware_ok
{
public:
  explicit Init_SafetyStatus_is_firmware_ok(::mir_msgs::msg::SafetyStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyStatus_firmware_version is_firmware_ok(::mir_msgs::msg::SafetyStatus::_is_firmware_ok_type arg)
  {
    msg_.is_firmware_ok = std::move(arg);
    return Init_SafetyStatus_firmware_version(msg_);
  }

private:
  ::mir_msgs::msg::SafetyStatus msg_;
};

class Init_SafetyStatus_is_connected
{
public:
  Init_SafetyStatus_is_connected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyStatus_is_firmware_ok is_connected(::mir_msgs::msg::SafetyStatus::_is_connected_type arg)
  {
    msg_.is_connected = std::move(arg);
    return Init_SafetyStatus_is_firmware_ok(msg_);
  }

private:
  ::mir_msgs::msg::SafetyStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::SafetyStatus>()
{
  return mir_msgs::msg::builder::Init_SafetyStatus_is_connected();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__SAFETY_STATUS__BUILDER_HPP_
