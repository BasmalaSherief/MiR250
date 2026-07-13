// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_mode_key_state
{
public:
  explicit Init_RobotStatus_mode_key_state(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::RobotStatus mode_key_state(::mir_msgs::msg::RobotStatus::_mode_key_state_type arg)
  {
    msg_.mode_key_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_joystick_web_session_id
{
public:
  explicit Init_RobotStatus_joystick_web_session_id(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_mode_key_state joystick_web_session_id(::mir_msgs::msg::RobotStatus::_joystick_web_session_id_type arg)
  {
    msg_.joystick_web_session_id = std::move(arg);
    return Init_RobotStatus_mode_key_state(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_joystick_low_speed_mode_enabled
{
public:
  explicit Init_RobotStatus_joystick_low_speed_mode_enabled(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_joystick_web_session_id joystick_low_speed_mode_enabled(::mir_msgs::msg::RobotStatus::_joystick_low_speed_mode_enabled_type arg)
  {
    msg_.joystick_low_speed_mode_enabled = std::move(arg);
    return Init_RobotStatus_joystick_web_session_id(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_safety_system_muted
{
public:
  explicit Init_RobotStatus_safety_system_muted(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_joystick_low_speed_mode_enabled safety_system_muted(::mir_msgs::msg::RobotStatus::_safety_system_muted_type arg)
  {
    msg_.safety_system_muted = std::move(arg);
    return Init_RobotStatus_joystick_low_speed_mode_enabled(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_user_prompt
{
public:
  explicit Init_RobotStatus_user_prompt(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_safety_system_muted user_prompt(::mir_msgs::msg::RobotStatus::_user_prompt_type arg)
  {
    msg_.user_prompt = std::move(arg);
    return Init_RobotStatus_safety_system_muted(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_velocity
{
public:
  explicit Init_RobotStatus_velocity(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_user_prompt velocity(::mir_msgs::msg::RobotStatus::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_RobotStatus_user_prompt(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_uptime
{
public:
  explicit Init_RobotStatus_uptime(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_velocity uptime(::mir_msgs::msg::RobotStatus::_uptime_type arg)
  {
    msg_.uptime = std::move(arg);
    return Init_RobotStatus_velocity(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_state_text
{
public:
  explicit Init_RobotStatus_state_text(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_uptime state_text(::mir_msgs::msg::RobotStatus::_state_text_type arg)
  {
    msg_.state_text = std::move(arg);
    return Init_RobotStatus_uptime(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_state_id
{
public:
  explicit Init_RobotStatus_state_id(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_state_text state_id(::mir_msgs::msg::RobotStatus::_state_id_type arg)
  {
    msg_.state_id = std::move(arg);
    return Init_RobotStatus_state_text(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_software_version
{
public:
  explicit Init_RobotStatus_software_version(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_state_id software_version(::mir_msgs::msg::RobotStatus::_software_version_type arg)
  {
    msg_.software_version = std::move(arg);
    return Init_RobotStatus_state_id(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_session_id
{
public:
  explicit Init_RobotStatus_session_id(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_software_version session_id(::mir_msgs::msg::RobotStatus::_session_id_type arg)
  {
    msg_.session_id = std::move(arg);
    return Init_RobotStatus_software_version(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_robot_name
{
public:
  explicit Init_RobotStatus_robot_name(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_session_id robot_name(::mir_msgs::msg::RobotStatus::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_RobotStatus_session_id(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_position
{
public:
  explicit Init_RobotStatus_position(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_robot_name position(::mir_msgs::msg::RobotStatus::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RobotStatus_robot_name(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_moved
{
public:
  explicit Init_RobotStatus_moved(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_position moved(::mir_msgs::msg::RobotStatus::_moved_type arg)
  {
    msg_.moved = std::move(arg);
    return Init_RobotStatus_position(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_mode_text
{
public:
  explicit Init_RobotStatus_mode_text(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_moved mode_text(::mir_msgs::msg::RobotStatus::_mode_text_type arg)
  {
    msg_.mode_text = std::move(arg);
    return Init_RobotStatus_moved(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_mode_id
{
public:
  explicit Init_RobotStatus_mode_id(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_mode_text mode_id(::mir_msgs::msg::RobotStatus::_mode_id_type arg)
  {
    msg_.mode_id = std::move(arg);
    return Init_RobotStatus_mode_text(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_mission_text
{
public:
  explicit Init_RobotStatus_mission_text(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_mode_id mission_text(::mir_msgs::msg::RobotStatus::_mission_text_type arg)
  {
    msg_.mission_text = std::move(arg);
    return Init_RobotStatus_mode_id(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_mission_queue_id
{
public:
  explicit Init_RobotStatus_mission_queue_id(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_mission_text mission_queue_id(::mir_msgs::msg::RobotStatus::_mission_queue_id_type arg)
  {
    msg_.mission_queue_id = std::move(arg);
    return Init_RobotStatus_mission_text(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_unloaded_map_changes
{
public:
  explicit Init_RobotStatus_unloaded_map_changes(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_mission_queue_id unloaded_map_changes(::mir_msgs::msg::RobotStatus::_unloaded_map_changes_type arg)
  {
    msg_.unloaded_map_changes = std::move(arg);
    return Init_RobotStatus_mission_queue_id(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_map_id
{
public:
  explicit Init_RobotStatus_map_id(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_unloaded_map_changes map_id(::mir_msgs::msg::RobotStatus::_map_id_type arg)
  {
    msg_.map_id = std::move(arg);
    return Init_RobotStatus_unloaded_map_changes(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_hook_status
{
public:
  explicit Init_RobotStatus_hook_status(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_map_id hook_status(::mir_msgs::msg::RobotStatus::_hook_status_type arg)
  {
    msg_.hook_status = std::move(arg);
    return Init_RobotStatus_map_id(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_footprint
{
public:
  explicit Init_RobotStatus_footprint(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_hook_status footprint(::mir_msgs::msg::RobotStatus::_footprint_type arg)
  {
    msg_.footprint = std::move(arg);
    return Init_RobotStatus_hook_status(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_errors
{
public:
  explicit Init_RobotStatus_errors(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_footprint errors(::mir_msgs::msg::RobotStatus::_errors_type arg)
  {
    msg_.errors = std::move(arg);
    return Init_RobotStatus_footprint(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_distance_to_next_target
{
public:
  explicit Init_RobotStatus_distance_to_next_target(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_errors distance_to_next_target(::mir_msgs::msg::RobotStatus::_distance_to_next_target_type arg)
  {
    msg_.distance_to_next_target = std::move(arg);
    return Init_RobotStatus_errors(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_battery_voltage
{
public:
  explicit Init_RobotStatus_battery_voltage(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_distance_to_next_target battery_voltage(::mir_msgs::msg::RobotStatus::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_RobotStatus_distance_to_next_target(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_battery_time_remaining
{
public:
  explicit Init_RobotStatus_battery_time_remaining(::mir_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_battery_voltage battery_time_remaining(::mir_msgs::msg::RobotStatus::_battery_time_remaining_type arg)
  {
    msg_.battery_time_remaining = std::move(arg);
    return Init_RobotStatus_battery_voltage(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_battery_percentage
{
public:
  Init_RobotStatus_battery_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_battery_time_remaining battery_percentage(::mir_msgs::msg::RobotStatus::_battery_percentage_type arg)
  {
    msg_.battery_percentage = std::move(arg);
    return Init_RobotStatus_battery_time_remaining(msg_);
  }

private:
  ::mir_msgs::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::RobotStatus>()
{
  return mir_msgs::msg::builder::Init_RobotStatus_battery_percentage();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
