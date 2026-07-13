// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/MirExtra.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__MIR_EXTRA__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__MIR_EXTRA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/mir_extra__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MirExtra & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: time_delta
  {
    out << "time_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.time_delta, out);
    out << ", ";
  }

  // member: r_rpm
  {
    out << "r_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.r_rpm, out);
    out << ", ";
  }

  // member: l_rpm
  {
    out << "l_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.l_rpm, out);
    out << ", ";
  }

  // member: vel
  {
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << ", ";
  }

  // member: ang
  {
    out << "ang: ";
    rosidl_generator_traits::value_to_yaml(msg.ang, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MirExtra & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: time_delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.time_delta, out);
    out << "\n";
  }

  // member: r_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.r_rpm, out);
    out << "\n";
  }

  // member: l_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.l_rpm, out);
    out << "\n";
  }

  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << "\n";
  }

  // member: ang
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang: ";
    rosidl_generator_traits::value_to_yaml(msg.ang, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MirExtra & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::MirExtra & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::MirExtra & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::MirExtra>()
{
  return "mir_msgs::msg::MirExtra";
}

template<>
inline const char * name<mir_msgs::msg::MirExtra>()
{
  return "mir_msgs/msg/MirExtra";
}

template<>
struct has_fixed_size<mir_msgs::msg::MirExtra>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mir_msgs::msg::MirExtra>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mir_msgs::msg::MirExtra>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__MIR_EXTRA__TRAITS_HPP_
