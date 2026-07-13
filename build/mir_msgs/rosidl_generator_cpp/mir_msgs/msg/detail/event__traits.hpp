// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/Event.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__EVENT__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'polygon'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: event_type
  {
    out << "event_type: ";
    rosidl_generator_traits::value_to_yaml(msg.event_type, out);
    out << ", ";
  }

  // member: area_guid
  {
    out << "area_guid: ";
    rosidl_generator_traits::value_to_yaml(msg.area_guid, out);
    out << ", ";
  }

  // member: area_name
  {
    out << "area_name: ";
    rosidl_generator_traits::value_to_yaml(msg.area_name, out);
    out << ", ";
  }

  // member: polygon
  {
    if (msg.polygon.size() == 0) {
      out << "polygon: []";
    } else {
      out << "polygon: [";
      size_t pending_items = msg.polygon.size();
      for (auto item : msg.polygon) {
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
  const Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: event_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_type: ";
    rosidl_generator_traits::value_to_yaml(msg.event_type, out);
    out << "\n";
  }

  // member: area_guid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_guid: ";
    rosidl_generator_traits::value_to_yaml(msg.area_guid, out);
    out << "\n";
  }

  // member: area_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_name: ";
    rosidl_generator_traits::value_to_yaml(msg.area_name, out);
    out << "\n";
  }

  // member: polygon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.polygon.size() == 0) {
      out << "polygon: []\n";
    } else {
      out << "polygon:\n";
      for (auto item : msg.polygon) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Event & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::Event & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::Event>()
{
  return "mir_msgs::msg::Event";
}

template<>
inline const char * name<mir_msgs::msg::Event>()
{
  return "mir_msgs/msg/Event";
}

template<>
struct has_fixed_size<mir_msgs::msg::Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_msgs::msg::Event>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_msgs::msg::Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__EVENT__TRAITS_HPP_
