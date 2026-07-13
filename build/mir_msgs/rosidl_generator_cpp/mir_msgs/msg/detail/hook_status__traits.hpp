// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/HookStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__HOOK_STATUS__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__HOOK_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/hook_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'trolley'
#include "mir_msgs/msg/detail/trolley__traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HookStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: available
  {
    out << "available: ";
    rosidl_generator_traits::value_to_yaml(msg.available, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: braked
  {
    out << "braked: ";
    rosidl_generator_traits::value_to_yaml(msg.braked, out);
    out << ", ";
  }

  // member: trolley_attached
  {
    out << "trolley_attached: ";
    rosidl_generator_traits::value_to_yaml(msg.trolley_attached, out);
    out << ", ";
  }

  // member: trolley
  {
    out << "trolley: ";
    to_flow_style_yaml(msg.trolley, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HookStatus & msg,
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

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
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

  // member: braked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "braked: ";
    rosidl_generator_traits::value_to_yaml(msg.braked, out);
    out << "\n";
  }

  // member: trolley_attached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trolley_attached: ";
    rosidl_generator_traits::value_to_yaml(msg.trolley_attached, out);
    out << "\n";
  }

  // member: trolley
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trolley:\n";
    to_block_style_yaml(msg.trolley, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HookStatus & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::HookStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::HookStatus & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::HookStatus>()
{
  return "mir_msgs::msg::HookStatus";
}

template<>
inline const char * name<mir_msgs::msg::HookStatus>()
{
  return "mir_msgs/msg/HookStatus";
}

template<>
struct has_fixed_size<mir_msgs::msg::HookStatus>
  : std::integral_constant<bool, has_fixed_size<mir_msgs::msg::Trolley>::value> {};

template<>
struct has_bounded_size<mir_msgs::msg::HookStatus>
  : std::integral_constant<bool, has_bounded_size<mir_msgs::msg::Trolley>::value> {};

template<>
struct is_message<mir_msgs::msg::HookStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__HOOK_STATUS__TRAITS_HPP_
