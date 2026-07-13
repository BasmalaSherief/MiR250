// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/JoystickVel.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__JOYSTICK_VEL__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__JOYSTICK_VEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/joystick_vel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'speed_command'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JoystickVel & msg,
  std::ostream & out)
{
  out << "{";
  // member: joystick_token
  {
    out << "joystick_token: ";
    rosidl_generator_traits::value_to_yaml(msg.joystick_token, out);
    out << ", ";
  }

  // member: speed_command
  {
    out << "speed_command: ";
    to_flow_style_yaml(msg.speed_command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JoystickVel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joystick_token
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joystick_token: ";
    rosidl_generator_traits::value_to_yaml(msg.joystick_token, out);
    out << "\n";
  }

  // member: speed_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_command:\n";
    to_block_style_yaml(msg.speed_command, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JoystickVel & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::JoystickVel & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::JoystickVel & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::JoystickVel>()
{
  return "mir_msgs::msg::JoystickVel";
}

template<>
inline const char * name<mir_msgs::msg::JoystickVel>()
{
  return "mir_msgs/msg/JoystickVel";
}

template<>
struct has_fixed_size<mir_msgs::msg::JoystickVel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_msgs::msg::JoystickVel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_msgs::msg::JoystickVel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__JOYSTICK_VEL__TRAITS_HPP_
