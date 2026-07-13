// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdc21x0:msg/StampedEncoders.idl
// generated code does not contain a copyright notice

#ifndef SDC21X0__MSG__DETAIL__STAMPED_ENCODERS__TRAITS_HPP_
#define SDC21X0__MSG__DETAIL__STAMPED_ENCODERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdc21x0/msg/detail/stamped_encoders__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'encoders'
#include "sdc21x0/msg/detail/encoders__traits.hpp"

namespace sdc21x0
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

}  // namespace sdc21x0

namespace rosidl_generator_traits
{

[[deprecated("use sdc21x0::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sdc21x0::msg::StampedEncoders & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdc21x0::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdc21x0::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdc21x0::msg::StampedEncoders & msg)
{
  return sdc21x0::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdc21x0::msg::StampedEncoders>()
{
  return "sdc21x0::msg::StampedEncoders";
}

template<>
inline const char * name<sdc21x0::msg::StampedEncoders>()
{
  return "sdc21x0/msg/StampedEncoders";
}

template<>
struct has_fixed_size<sdc21x0::msg::StampedEncoders>
  : std::integral_constant<bool, has_fixed_size<sdc21x0::msg::Encoders>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sdc21x0::msg::StampedEncoders>
  : std::integral_constant<bool, has_bounded_size<sdc21x0::msg::Encoders>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sdc21x0::msg::StampedEncoders>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDC21X0__MSG__DETAIL__STAMPED_ENCODERS__TRAITS_HPP_
