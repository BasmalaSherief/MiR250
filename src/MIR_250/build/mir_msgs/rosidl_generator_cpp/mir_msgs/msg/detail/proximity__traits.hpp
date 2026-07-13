// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/Proximity.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PROXIMITY__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__PROXIMITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/proximity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Proximity & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ranges
  {
    if (msg.ranges.size() == 0) {
      out << "ranges: []";
    } else {
      out << "ranges: [";
      size_t pending_items = msg.ranges.size();
      for (auto item : msg.ranges) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Proximity & msg,
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

  // member: ranges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ranges.size() == 0) {
      out << "ranges: []\n";
    } else {
      out << "ranges:\n";
      for (auto item : msg.ranges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Proximity & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::Proximity & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::Proximity & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::Proximity>()
{
  return "mir_msgs::msg::Proximity";
}

template<>
inline const char * name<mir_msgs::msg::Proximity>()
{
  return "mir_msgs/msg/Proximity";
}

template<>
struct has_fixed_size<mir_msgs::msg::Proximity>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_msgs::msg::Proximity>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_msgs::msg::Proximity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__PROXIMITY__TRAITS_HPP_
