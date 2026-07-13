// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'errors'
#include "mir_msgs/msg/detail/error__traits.hpp"
// Member 'hook_status'
#include "mir_msgs/msg/detail/hook_status__traits.hpp"
// Member 'position'
#include "mir_msgs/msg/detail/pose2_d__traits.hpp"
// Member 'velocity'
#include "mir_msgs/msg/detail/twist2_d__traits.hpp"
// Member 'user_prompt'
#include "mir_msgs/msg/detail/user_prompt__traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: battery_percentage
  {
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << ", ";
  }

  // member: battery_time_remaining
  {
    out << "battery_time_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_time_remaining, out);
    out << ", ";
  }

  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << ", ";
  }

  // member: distance_to_next_target
  {
    out << "distance_to_next_target: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_next_target, out);
    out << ", ";
  }

  // member: errors
  {
    if (msg.errors.size() == 0) {
      out << "errors: []";
    } else {
      out << "errors: [";
      size_t pending_items = msg.errors.size();
      for (auto item : msg.errors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: footprint
  {
    out << "footprint: ";
    rosidl_generator_traits::value_to_yaml(msg.footprint, out);
    out << ", ";
  }

  // member: hook_status
  {
    out << "hook_status: ";
    to_flow_style_yaml(msg.hook_status, out);
    out << ", ";
  }

  // member: map_id
  {
    out << "map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_id, out);
    out << ", ";
  }

  // member: unloaded_map_changes
  {
    out << "unloaded_map_changes: ";
    rosidl_generator_traits::value_to_yaml(msg.unloaded_map_changes, out);
    out << ", ";
  }

  // member: mission_queue_id
  {
    out << "mission_queue_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_queue_id, out);
    out << ", ";
  }

  // member: mission_text
  {
    out << "mission_text: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_text, out);
    out << ", ";
  }

  // member: mode_id
  {
    out << "mode_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_id, out);
    out << ", ";
  }

  // member: mode_text
  {
    out << "mode_text: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_text, out);
    out << ", ";
  }

  // member: moved
  {
    out << "moved: ";
    rosidl_generator_traits::value_to_yaml(msg.moved, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: robot_name
  {
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << ", ";
  }

  // member: session_id
  {
    out << "session_id: ";
    rosidl_generator_traits::value_to_yaml(msg.session_id, out);
    out << ", ";
  }

  // member: software_version
  {
    out << "software_version: ";
    rosidl_generator_traits::value_to_yaml(msg.software_version, out);
    out << ", ";
  }

  // member: state_id
  {
    out << "state_id: ";
    rosidl_generator_traits::value_to_yaml(msg.state_id, out);
    out << ", ";
  }

  // member: state_text
  {
    out << "state_text: ";
    rosidl_generator_traits::value_to_yaml(msg.state_text, out);
    out << ", ";
  }

  // member: uptime
  {
    out << "uptime: ";
    rosidl_generator_traits::value_to_yaml(msg.uptime, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: user_prompt
  {
    out << "user_prompt: ";
    to_flow_style_yaml(msg.user_prompt, out);
    out << ", ";
  }

  // member: safety_system_muted
  {
    out << "safety_system_muted: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_system_muted, out);
    out << ", ";
  }

  // member: joystick_low_speed_mode_enabled
  {
    out << "joystick_low_speed_mode_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.joystick_low_speed_mode_enabled, out);
    out << ", ";
  }

  // member: joystick_web_session_id
  {
    out << "joystick_web_session_id: ";
    rosidl_generator_traits::value_to_yaml(msg.joystick_web_session_id, out);
    out << ", ";
  }

  // member: mode_key_state
  {
    out << "mode_key_state: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_key_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: battery_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << "\n";
  }

  // member: battery_time_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_time_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_time_remaining, out);
    out << "\n";
  }

  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: distance_to_next_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_next_target: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_next_target, out);
    out << "\n";
  }

  // member: errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.errors.size() == 0) {
      out << "errors: []\n";
    } else {
      out << "errors:\n";
      for (auto item : msg.errors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

  // member: hook_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hook_status:\n";
    to_block_style_yaml(msg.hook_status, out, indentation + 2);
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

  // member: unloaded_map_changes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unloaded_map_changes: ";
    rosidl_generator_traits::value_to_yaml(msg.unloaded_map_changes, out);
    out << "\n";
  }

  // member: mission_queue_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_queue_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_queue_id, out);
    out << "\n";
  }

  // member: mission_text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_text: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_text, out);
    out << "\n";
  }

  // member: mode_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_id, out);
    out << "\n";
  }

  // member: mode_text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_text: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_text, out);
    out << "\n";
  }

  // member: moved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moved: ";
    rosidl_generator_traits::value_to_yaml(msg.moved, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: robot_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << "\n";
  }

  // member: session_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "session_id: ";
    rosidl_generator_traits::value_to_yaml(msg.session_id, out);
    out << "\n";
  }

  // member: software_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "software_version: ";
    rosidl_generator_traits::value_to_yaml(msg.software_version, out);
    out << "\n";
  }

  // member: state_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_id: ";
    rosidl_generator_traits::value_to_yaml(msg.state_id, out);
    out << "\n";
  }

  // member: state_text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_text: ";
    rosidl_generator_traits::value_to_yaml(msg.state_text, out);
    out << "\n";
  }

  // member: uptime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uptime: ";
    rosidl_generator_traits::value_to_yaml(msg.uptime, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: user_prompt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_prompt:\n";
    to_block_style_yaml(msg.user_prompt, out, indentation + 2);
  }

  // member: safety_system_muted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_system_muted: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_system_muted, out);
    out << "\n";
  }

  // member: joystick_low_speed_mode_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joystick_low_speed_mode_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.joystick_low_speed_mode_enabled, out);
    out << "\n";
  }

  // member: joystick_web_session_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joystick_web_session_id: ";
    rosidl_generator_traits::value_to_yaml(msg.joystick_web_session_id, out);
    out << "\n";
  }

  // member: mode_key_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_key_state: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_key_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotStatus & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::RobotStatus & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::RobotStatus>()
{
  return "mir_msgs::msg::RobotStatus";
}

template<>
inline const char * name<mir_msgs::msg::RobotStatus>()
{
  return "mir_msgs/msg/RobotStatus";
}

template<>
struct has_fixed_size<mir_msgs::msg::RobotStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_msgs::msg::RobotStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_msgs::msg::RobotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
