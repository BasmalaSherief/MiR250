// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdc21x0:msg/Encoders.idl
// generated code does not contain a copyright notice

#ifndef SDC21X0__MSG__DETAIL__ENCODERS__TRAITS_HPP_
#define SDC21X0__MSG__DETAIL__ENCODERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdc21x0/msg/detail/encoders__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sdc21x0
{

namespace msg
{

inline void to_flow_style_yaml(
  const Encoders & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_delta
  {
    out << "time_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.time_delta, out);
    out << ", ";
  }

  // member: left_wheel
  {
    out << "left_wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel, out);
    out << ", ";
  }

  // member: right_wheel
  {
    out << "right_wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Encoders & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.time_delta, out);
    out << "\n";
  }

  // member: left_wheel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel, out);
    out << "\n";
  }

  // member: right_wheel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Encoders & msg, bool use_flow_style = false)
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
  const sdc21x0::msg::Encoders & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdc21x0::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdc21x0::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdc21x0::msg::Encoders & msg)
{
  return sdc21x0::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdc21x0::msg::Encoders>()
{
  return "sdc21x0::msg::Encoders";
}

template<>
inline const char * name<sdc21x0::msg::Encoders>()
{
  return "sdc21x0/msg/Encoders";
}

template<>
struct has_fixed_size<sdc21x0::msg::Encoders>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sdc21x0::msg::Encoders>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sdc21x0::msg::Encoders>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDC21X0__MSG__DETAIL__ENCODERS__TRAITS_HPP_
