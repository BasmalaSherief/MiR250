// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/PlanSegment.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PLAN_SEGMENT__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__PLAN_SEGMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/plan_segment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'path'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanSegment & msg,
  std::ostream & out)
{
  out << "{";
  // member: forward_motion
  {
    out << "forward_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.forward_motion, out);
    out << ", ";
  }

  // member: start_idx
  {
    out << "start_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.start_idx, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: remaining_length
  {
    out << "remaining_length: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_length, out);
    out << ", ";
  }

  // member: path
  {
    if (msg.path.size() == 0) {
      out << "path: []";
    } else {
      out << "path: [";
      size_t pending_items = msg.path.size();
      for (auto item : msg.path) {
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
  const PlanSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: forward_motion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forward_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.forward_motion, out);
    out << "\n";
  }

  // member: start_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.start_idx, out);
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

  // member: remaining_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_length: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_length, out);
    out << "\n";
  }

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path.size() == 0) {
      out << "path: []\n";
    } else {
      out << "path:\n";
      for (auto item : msg.path) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanSegment & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::PlanSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::PlanSegment & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::PlanSegment>()
{
  return "mir_msgs::msg::PlanSegment";
}

template<>
inline const char * name<mir_msgs::msg::PlanSegment>()
{
  return "mir_msgs/msg/PlanSegment";
}

template<>
struct has_fixed_size<mir_msgs::msg::PlanSegment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_msgs::msg::PlanSegment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_msgs::msg::PlanSegment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__PLAN_SEGMENT__TRAITS_HPP_
