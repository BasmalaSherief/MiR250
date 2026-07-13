// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/ExternalRobot.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOT__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/external_robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
// Member 'extrapolated_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ExternalRobot & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: type_id
  {
    out << "type_id: ";
    rosidl_generator_traits::value_to_yaml(msg.type_id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: robot_length
  {
    out << "robot_length: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_length, out);
    out << ", ";
  }

  // member: robot_width
  {
    out << "robot_width: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_width, out);
    out << ", ";
  }

  // member: footprint
  {
    out << "footprint: ";
    rosidl_generator_traits::value_to_yaml(msg.footprint, out);
    out << ", ";
  }

  // member: ip
  {
    out << "ip: ";
    rosidl_generator_traits::value_to_yaml(msg.ip, out);
    out << ", ";
  }

  // member: map_id
  {
    out << "map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_id, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: extrapolated_pose
  {
    out << "extrapolated_pose: ";
    to_flow_style_yaml(msg.extrapolated_pose, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExternalRobot & msg,
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

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: type_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type_id: ";
    rosidl_generator_traits::value_to_yaml(msg.type_id, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: robot_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_length: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_length, out);
    out << "\n";
  }

  // member: robot_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_width: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_width, out);
    out << "\n";
  }

  // member: footprint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "footprint: ";
    rosidl_generator_traits::value_to_yaml(msg.footprint, out);
    out << "\n";
  }

  // member: ip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ip: ";
    rosidl_generator_traits::value_to_yaml(msg.ip, out);
    out << "\n";
  }

  // member: map_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_id, out);
    out << "\n";
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: extrapolated_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extrapolated_pose:\n";
    to_block_style_yaml(msg.extrapolated_pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExternalRobot & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::ExternalRobot & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::ExternalRobot & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::ExternalRobot>()
{
  return "mir_msgs::msg::ExternalRobot";
}

template<>
inline const char * name<mir_msgs::msg::ExternalRobot>()
{
  return "mir_msgs/msg/ExternalRobot";
}

template<>
struct has_fixed_size<mir_msgs::msg::ExternalRobot>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_msgs::msg::ExternalRobot>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_msgs::msg::ExternalRobot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOT__TRAITS_HPP_
