// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/ChargingState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__CHARGING_STATE__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__CHARGING_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/charging_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChargingState & msg,
  std::ostream & out)
{
  out << "{";
  // member: charging_relay
  {
    out << "charging_relay: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_relay, out);
    out << ", ";
  }

  // member: charging_current
  {
    out << "charging_current: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_current, out);
    out << ", ";
  }

  // member: charging_current_raw
  {
    out << "charging_current_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_current_raw, out);
    out << ", ";
  }

  // member: last_time_current
  {
    out << "last_time_current: ";
    rosidl_generator_traits::value_to_yaml(msg.last_time_current, out);
    out << ", ";
  }

  // member: charging_voltage
  {
    out << "charging_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_voltage, out);
    out << ", ";
  }

  // member: charging_voltage_raw
  {
    out << "charging_voltage_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_voltage_raw, out);
    out << ", ";
  }

  // member: is_voltage_low
  {
    out << "is_voltage_low: ";
    rosidl_generator_traits::value_to_yaml(msg.is_voltage_low, out);
    out << ", ";
  }

  // member: last_time_voltage
  {
    out << "last_time_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.last_time_voltage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChargingState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: charging_relay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_relay: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_relay, out);
    out << "\n";
  }

  // member: charging_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_current: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_current, out);
    out << "\n";
  }

  // member: charging_current_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_current_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_current_raw, out);
    out << "\n";
  }

  // member: last_time_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_time_current: ";
    rosidl_generator_traits::value_to_yaml(msg.last_time_current, out);
    out << "\n";
  }

  // member: charging_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_voltage, out);
    out << "\n";
  }

  // member: charging_voltage_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_voltage_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_voltage_raw, out);
    out << "\n";
  }

  // member: is_voltage_low
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_voltage_low: ";
    rosidl_generator_traits::value_to_yaml(msg.is_voltage_low, out);
    out << "\n";
  }

  // member: last_time_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_time_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.last_time_voltage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChargingState & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::ChargingState & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::ChargingState & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::ChargingState>()
{
  return "mir_msgs::msg::ChargingState";
}

template<>
inline const char * name<mir_msgs::msg::ChargingState>()
{
  return "mir_msgs/msg/ChargingState";
}

template<>
struct has_fixed_size<mir_msgs::msg::ChargingState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mir_msgs::msg::ChargingState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mir_msgs::msg::ChargingState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__CHARGING_STATE__TRAITS_HPP_
