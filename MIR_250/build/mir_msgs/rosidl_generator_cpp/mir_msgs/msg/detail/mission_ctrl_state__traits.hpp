// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/MissionCtrlState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__MISSION_CTRL_STATE__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__MISSION_CTRL_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/mission_ctrl_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionCtrlState & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: pos_id
  {
    out << "pos_id: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionCtrlState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: pos_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_id: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionCtrlState & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::MissionCtrlState & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::MissionCtrlState & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::MissionCtrlState>()
{
  return "mir_msgs::msg::MissionCtrlState";
}

template<>
inline const char * name<mir_msgs::msg::MissionCtrlState>()
{
  return "mir_msgs/msg/MissionCtrlState";
}

template<>
struct has_fixed_size<mir_msgs::msg::MissionCtrlState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mir_msgs::msg::MissionCtrlState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mir_msgs::msg::MissionCtrlState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__MISSION_CTRL_STATE__TRAITS_HPP_
