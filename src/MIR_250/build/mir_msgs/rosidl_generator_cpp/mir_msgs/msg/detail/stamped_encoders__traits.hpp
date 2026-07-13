// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/StampedEncoders.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__STAMPED_ENCODERS__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__STAMPED_ENCODERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/stamped_encoders__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'encoders'
#include "mir_msgs/msg/detail/encoders__traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StampedEncoders & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: encoders
  {
    out << "encoders: ";
    to_flow_style_yaml(msg.encoders, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StampedEncoders & msg,
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

  // member: encoders
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encoders:\n";
    to_block_style_yaml(msg.encoders, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StampedEncoders & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::StampedEncoders & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::StampedEncoders & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::StampedEncoders>()
{
  return "mir_msgs::msg::StampedEncoders";
}

template<>
inline const char * name<mir_msgs::msg::StampedEncoders>()
{
  return "mir_msgs/msg/StampedEncoders";
}

template<>
struct has_fixed_size<mir_msgs::msg::StampedEncoders>
  : std::integral_constant<bool, has_fixed_size<mir_msgs::msg::Encoders>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mir_msgs::msg::StampedEncoders>
  : std::integral_constant<bool, has_bounded_size<mir_msgs::msg::Encoders>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mir_msgs::msg::StampedEncoders>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__STAMPED_ENCODERS__TRAITS_HPP_
