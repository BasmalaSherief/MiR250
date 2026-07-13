// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/HookExtendedStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__HOOK_EXTENDED_STATUS__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__HOOK_EXTENDED_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/hook_extended_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'brake'
#include "mir_msgs/msg/detail/brake_state__traits.hpp"
// Member 'gripper'
#include "mir_msgs/msg/detail/gripper_state__traits.hpp"
// Member 'height'
#include "mir_msgs/msg/detail/height_state__traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HookExtendedStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: available
  {
    out << "available: ";
    rosidl_generator_traits::value_to_yaml(msg.available, out);
    out << ", ";
  }

  // member: brake
  {
    out << "brake: ";
    to_flow_style_yaml(msg.brake, out);
    out << ", ";
  }

  // member: gripper
  {
    out << "gripper: ";
    to_flow_style_yaml(msg.gripper, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    to_flow_style_yaml(msg.height, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: qr_marker_name
  {
    out << "qr_marker_name: ";
    rosidl_generator_traits::value_to_yaml(msg.qr_marker_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HookExtendedStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "available: ";
    rosidl_generator_traits::value_to_yaml(msg.available, out);
    out << "\n";
  }

  // member: brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake:\n";
    to_block_style_yaml(msg.brake, out, indentation + 2);
  }

  // member: gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper:\n";
    to_block_style_yaml(msg.gripper, out, indentation + 2);
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height:\n";
    to_block_style_yaml(msg.height, out, indentation + 2);
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: qr_marker_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qr_marker_name: ";
    rosidl_generator_traits::value_to_yaml(msg.qr_marker_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HookExtendedStatus & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::HookExtendedStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::HookExtendedStatus & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::HookExtendedStatus>()
{
  return "mir_msgs::msg::HookExtendedStatus";
}

template<>
inline const char * name<mir_msgs::msg::HookExtendedStatus>()
{
  return "mir_msgs/msg/HookExtendedStatus";
}

template<>
struct has_fixed_size<mir_msgs::msg::HookExtendedStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_msgs::msg::HookExtendedStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_msgs::msg::HookExtendedStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__HOOK_EXTENDED_STATUS__TRAITS_HPP_
