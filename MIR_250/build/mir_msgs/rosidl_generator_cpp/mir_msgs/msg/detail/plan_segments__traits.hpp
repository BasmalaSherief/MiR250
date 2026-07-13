// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/PlanSegments.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PLAN_SEGMENTS__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__PLAN_SEGMENTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/plan_segments__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'p_segments'
#include "mir_msgs/msg/detail/plan_segment__traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanSegments & msg,
  std::ostream & out)
{
  out << "{";
  // member: p_segments
  {
    if (msg.p_segments.size() == 0) {
      out << "p_segments: []";
    } else {
      out << "p_segments: [";
      size_t pending_items = msg.p_segments.size();
      for (auto item : msg.p_segments) {
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
  const PlanSegments & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: p_segments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.p_segments.size() == 0) {
      out << "p_segments: []\n";
    } else {
      out << "p_segments:\n";
      for (auto item : msg.p_segments) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanSegments & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::PlanSegments & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::PlanSegments & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::PlanSegments>()
{
  return "mir_msgs::msg::PlanSegments";
}

template<>
inline const char * name<mir_msgs::msg::PlanSegments>()
{
  return "mir_msgs/msg/PlanSegments";
}

template<>
struct has_fixed_size<mir_msgs::msg::PlanSegments>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_msgs::msg::PlanSegments>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_msgs::msg::PlanSegments>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__PLAN_SEGMENTS__TRAITS_HPP_
