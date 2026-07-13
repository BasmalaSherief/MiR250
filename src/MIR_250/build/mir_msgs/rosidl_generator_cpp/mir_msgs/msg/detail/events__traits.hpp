// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/Events.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__EVENTS__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__EVENTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/events__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'events'
#include "mir_msgs/msg/detail/event__traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Events & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: events
  {
    if (msg.events.size() == 0) {
      out << "events: []";
    } else {
      out << "events: [";
      size_t pending_items = msg.events.size();
      for (auto item : msg.events) {
        to_flow_style_yaml(item, out);
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
  const Events & msg,
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

  // member: events
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.events.size() == 0) {
      out << "events: []\n";
    } else {
      out << "events:\n";
      for (auto item : msg.events) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Events & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::Events & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::Events & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::Events>()
{
  return "mir_msgs::msg::Events";
}

template<>
inline const char * name<mir_msgs::msg::Events>()
{
  return "mir_msgs/msg/Events";
}

template<>
struct has_fixed_size<mir_msgs::msg::Events>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_msgs::msg::Events>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_msgs::msg::Events>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__EVENTS__TRAITS_HPP_
