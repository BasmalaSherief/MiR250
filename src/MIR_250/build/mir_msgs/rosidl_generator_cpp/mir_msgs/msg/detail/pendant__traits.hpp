// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/Pendant.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PENDANT__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__PENDANT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/pendant__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pendant & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: gpio_bits
  {
    out << "gpio_bits: ";
    rosidl_generator_traits::value_to_yaml(msg.gpio_bits, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pendant & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: gpio_bits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gpio_bits: ";
    rosidl_generator_traits::value_to_yaml(msg.gpio_bits, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pendant & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::Pendant & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::Pendant & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::Pendant>()
{
  return "mir_msgs::msg::Pendant";
}

template<>
inline const char * name<mir_msgs::msg::Pendant>()
{
  return "mir_msgs/msg/Pendant";
}

template<>
struct has_fixed_size<mir_msgs::msg::Pendant>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mir_msgs::msg::Pendant>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mir_msgs::msg::Pendant>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__PENDANT__TRAITS_HPP_
