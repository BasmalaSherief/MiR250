// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/SafetyStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__SAFETY_STATUS__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__SAFETY_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/safety_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SafetyStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_connected
  {
    out << "is_connected: ";
    rosidl_generator_traits::value_to_yaml(msg.is_connected, out);
    out << ", ";
  }

  // member: is_firmware_ok
  {
    out << "is_firmware_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.is_firmware_ok, out);
    out << ", ";
  }

  // member: firmware_version
  {
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << ", ";
  }

  // member: in_protective_stop
  {
    out << "in_protective_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.in_protective_stop, out);
    out << ", ";
  }

  // member: in_emergency_stop
  {
    out << "in_emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.in_emergency_stop, out);
    out << ", ";
  }

  // member: sto_feedback
  {
    out << "sto_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.sto_feedback, out);
    out << ", ";
  }

  // member: is_restart_required
  {
    out << "is_restart_required: ";
    rosidl_generator_traits::value_to_yaml(msg.is_restart_required, out);
    out << ", ";
  }

  // member: is_safety_muted
  {
    out << "is_safety_muted: ";
    rosidl_generator_traits::value_to_yaml(msg.is_safety_muted, out);
    out << ", ";
  }

  // member: max_lin_speed
  {
    out << "max_lin_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_lin_speed, out);
    out << ", ";
  }

  // member: max_rot_speed
  {
    out << "max_rot_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_rot_speed, out);
    out << ", ";
  }

  // member: mute_mask
  {
    out << "mute_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.mute_mask, out);
    out << ", ";
  }

  // member: partial_mute_mask
  {
    out << "partial_mute_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.partial_mute_mask, out);
    out << ", ";
  }

  // member: is_limited_speed_active
  {
    out << "is_limited_speed_active: ";
    rosidl_generator_traits::value_to_yaml(msg.is_limited_speed_active, out);
    out << ", ";
  }

  // member: is_lifter_down
  {
    out << "is_lifter_down: ";
    rosidl_generator_traits::value_to_yaml(msg.is_lifter_down, out);
    out << ", ";
  }

  // member: in_sleep_mode
  {
    out << "in_sleep_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.in_sleep_mode, out);
    out << ", ";
  }

  // member: in_manual_mode
  {
    out << "in_manual_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.in_manual_mode, out);
    out << ", ";
  }

  // member: is_manual_mode_restart_required
  {
    out << "is_manual_mode_restart_required: ";
    rosidl_generator_traits::value_to_yaml(msg.is_manual_mode_restart_required, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SafetyStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_connected: ";
    rosidl_generator_traits::value_to_yaml(msg.is_connected, out);
    out << "\n";
  }

  // member: is_firmware_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_firmware_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.is_firmware_ok, out);
    out << "\n";
  }

  // member: firmware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << "\n";
  }

  // member: in_protective_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_protective_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.in_protective_stop, out);
    out << "\n";
  }

  // member: in_emergency_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.in_emergency_stop, out);
    out << "\n";
  }

  // member: sto_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sto_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.sto_feedback, out);
    out << "\n";
  }

  // member: is_restart_required
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_restart_required: ";
    rosidl_generator_traits::value_to_yaml(msg.is_restart_required, out);
    out << "\n";
  }

  // member: is_safety_muted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_safety_muted: ";
    rosidl_generator_traits::value_to_yaml(msg.is_safety_muted, out);
    out << "\n";
  }

  // member: max_lin_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_lin_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_lin_speed, out);
    out << "\n";
  }

  // member: max_rot_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_rot_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_rot_speed, out);
    out << "\n";
  }

  // member: mute_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mute_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.mute_mask, out);
    out << "\n";
  }

  // member: partial_mute_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "partial_mute_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.partial_mute_mask, out);
    out << "\n";
  }

  // member: is_limited_speed_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_limited_speed_active: ";
    rosidl_generator_traits::value_to_yaml(msg.is_limited_speed_active, out);
    out << "\n";
  }

  // member: is_lifter_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_lifter_down: ";
    rosidl_generator_traits::value_to_yaml(msg.is_lifter_down, out);
    out << "\n";
  }

  // member: in_sleep_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_sleep_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.in_sleep_mode, out);
    out << "\n";
  }

  // member: in_manual_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_manual_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.in_manual_mode, out);
    out << "\n";
  }

  // member: is_manual_mode_restart_required
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_manual_mode_restart_required: ";
    rosidl_generator_traits::value_to_yaml(msg.is_manual_mode_restart_required, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SafetyStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mir_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mir_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mir_msgs::msg::SafetyStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::SafetyStatus & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::SafetyStatus>()
{
  return "mir_msgs::msg::SafetyStatus";
}

template<>
inline const char * name<mir_msgs::msg::SafetyStatus>()
{
  return "mir_msgs/msg/SafetyStatus";
}

template<>
struct has_fixed_size<mir_msgs::msg::SafetyStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mir_msgs::msg::SafetyStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mir_msgs::msg::SafetyStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__SAFETY_STATUS__TRAITS_HPP_
