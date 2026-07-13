// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdc21x0:msg/MotorCurrents.idl
// generated code does not contain a copyright notice

#ifndef SDC21X0__MSG__DETAIL__MOTOR_CURRENTS__TRAITS_HPP_
#define SDC21X0__MSG__DETAIL__MOTOR_CURRENTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdc21x0/msg/detail/motor_currents__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sdc21x0
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorCurrents & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_motor
  {
    out << "left_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor, out);
    out << ", ";
  }

  // member: right_motor
  {
    out << "right_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorCurrents & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor, out);
    out << "\n";
  }

  // member: right_motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorCurrents & msg, bool use_flow_style = false)
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
  const sdc21x0::msg::MotorCurrents & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdc21x0::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdc21x0::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdc21x0::msg::MotorCurrents & msg)
{
  return sdc21x0::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdc21x0::msg::MotorCurrents>()
{
  return "sdc21x0::msg::MotorCurrents";
}

template<>
inline const char * name<sdc21x0::msg::MotorCurrents>()
{
  return "sdc21x0/msg/MotorCurrents";
}

template<>
struct has_fixed_size<sdc21x0::msg::MotorCurrents>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sdc21x0::msg::MotorCurrents>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sdc21x0::msg::MotorCurrents>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDC21X0__MSG__DETAIL__MOTOR_CURRENTS__TRAITS_HPP_
