// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/PowerBoardMotorStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__POWER_BOARD_MOTOR_STATUS__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__POWER_BOARD_MOTOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/power_board_motor_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PowerBoardMotorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_motor_ctrl_word
  {
    out << "left_motor_ctrl_word: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_ctrl_word, out);
    out << ", ";
  }

  // member: left_motor_speed
  {
    out << "left_motor_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_speed, out);
    out << ", ";
  }

  // member: left_motor_encoder
  {
    out << "left_motor_encoder: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_encoder, out);
    out << ", ";
  }

  // member: left_motor_status
  {
    out << "left_motor_status: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_status, out);
    out << ", ";
  }

  // member: left_motor_error
  {
    out << "left_motor_error: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_error, out);
    out << ", ";
  }

  // member: left_motor_error_hist1
  {
    out << "left_motor_error_hist1: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_error_hist1, out);
    out << ", ";
  }

  // member: left_motor_error_hist2
  {
    out << "left_motor_error_hist2: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_error_hist2, out);
    out << ", ";
  }

  // member: left_motor_current
  {
    out << "left_motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_current, out);
    out << ", ";
  }

  // member: left_motor_i2t_motor
  {
    out << "left_motor_i2t_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_i2t_motor, out);
    out << ", ";
  }

  // member: left_motor_i2t_controller
  {
    out << "left_motor_i2t_controller: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_i2t_controller, out);
    out << ", ";
  }

  // member: left_motor_temperature
  {
    out << "left_motor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_temperature, out);
    out << ", ";
  }

  // member: right_motor_ctrl_word
  {
    out << "right_motor_ctrl_word: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_ctrl_word, out);
    out << ", ";
  }

  // member: right_motor_speed
  {
    out << "right_motor_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_speed, out);
    out << ", ";
  }

  // member: right_motor_encoder
  {
    out << "right_motor_encoder: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_encoder, out);
    out << ", ";
  }

  // member: right_motor_status
  {
    out << "right_motor_status: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_status, out);
    out << ", ";
  }

  // member: right_motor_error
  {
    out << "right_motor_error: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_error, out);
    out << ", ";
  }

  // member: right_motor_error_hist1
  {
    out << "right_motor_error_hist1: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_error_hist1, out);
    out << ", ";
  }

  // member: right_motor_error_hist2
  {
    out << "right_motor_error_hist2: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_error_hist2, out);
    out << ", ";
  }

  // member: right_motor_current
  {
    out << "right_motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_current, out);
    out << ", ";
  }

  // member: right_motor_i2t_motor
  {
    out << "right_motor_i2t_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_i2t_motor, out);
    out << ", ";
  }

  // member: right_motor_i2t_controller
  {
    out << "right_motor_i2t_controller: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_i2t_controller, out);
    out << ", ";
  }

  // member: right_motor_temperature
  {
    out << "right_motor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_temperature, out);
    out << ", ";
  }

  // member: brake_left_status
  {
    out << "brake_left_status: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_left_status, out);
    out << ", ";
  }

  // member: brake_right_status
  {
    out << "brake_right_status: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_right_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerBoardMotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_motor_ctrl_word
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor_ctrl_word: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_ctrl_word, out);
    out << "\n";
  }

  // member: left_motor_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_speed, out);
    out << "\n";
  }

  // member: left_motor_encoder
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor_encoder: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_encoder, out);
    out << "\n";
  }

  // member: left_motor_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor_status: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_status, out);
    out << "\n";
  }

  // member: left_motor_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor_error: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_error, out);
    out << "\n";
  }

  // member: left_motor_error_hist1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor_error_hist1: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_error_hist1, out);
    out << "\n";
  }

  // member: left_motor_error_hist2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor_error_hist2: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_error_hist2, out);
    out << "\n";
  }

  // member: left_motor_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_current, out);
    out << "\n";
  }

  // member: left_motor_i2t_motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor_i2t_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_i2t_motor, out);
    out << "\n";
  }

  // member: left_motor_i2t_controller
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor_i2t_controller: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_i2t_controller, out);
    out << "\n";
  }

  // member: left_motor_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_temperature, out);
    out << "\n";
  }

  // member: right_motor_ctrl_word
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor_ctrl_word: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_ctrl_word, out);
    out << "\n";
  }

  // member: right_motor_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_speed, out);
    out << "\n";
  }

  // member: right_motor_encoder
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor_encoder: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_encoder, out);
    out << "\n";
  }

  // member: right_motor_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor_status: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_status, out);
    out << "\n";
  }

  // member: right_motor_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor_error: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_error, out);
    out << "\n";
  }

  // member: right_motor_error_hist1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor_error_hist1: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_error_hist1, out);
    out << "\n";
  }

  // member: right_motor_error_hist2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor_error_hist2: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_error_hist2, out);
    out << "\n";
  }

  // member: right_motor_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_current, out);
    out << "\n";
  }

  // member: right_motor_i2t_motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor_i2t_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_i2t_motor, out);
    out << "\n";
  }

  // member: right_motor_i2t_controller
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor_i2t_controller: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_i2t_controller, out);
    out << "\n";
  }

  // member: right_motor_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_temperature, out);
    out << "\n";
  }

  // member: brake_left_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_left_status: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_left_status, out);
    out << "\n";
  }

  // member: brake_right_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_right_status: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_right_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerBoardMotorStatus & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::PowerBoardMotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::PowerBoardMotorStatus & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::PowerBoardMotorStatus>()
{
  return "mir_msgs::msg::PowerBoardMotorStatus";
}

template<>
inline const char * name<mir_msgs::msg::PowerBoardMotorStatus>()
{
  return "mir_msgs/msg/PowerBoardMotorStatus";
}

template<>
struct has_fixed_size<mir_msgs::msg::PowerBoardMotorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mir_msgs::msg::PowerBoardMotorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mir_msgs::msg::PowerBoardMotorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__POWER_BOARD_MOTOR_STATUS__TRAITS_HPP_
