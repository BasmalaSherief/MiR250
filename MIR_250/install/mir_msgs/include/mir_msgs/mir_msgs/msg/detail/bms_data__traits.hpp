// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/BMSData.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__BMS_DATA__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__BMS_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/bms_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BMSData & msg,
  std::ostream & out)
{
  out << "{";
  // member: pack_voltage
  {
    out << "pack_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.pack_voltage, out);
    out << ", ";
  }

  // member: charge_current
  {
    out << "charge_current: ";
    rosidl_generator_traits::value_to_yaml(msg.charge_current, out);
    out << ", ";
  }

  // member: discharge_current
  {
    out << "discharge_current: ";
    rosidl_generator_traits::value_to_yaml(msg.discharge_current, out);
    out << ", ";
  }

  // member: state_of_charge
  {
    out << "state_of_charge: ";
    rosidl_generator_traits::value_to_yaml(msg.state_of_charge, out);
    out << ", ";
  }

  // member: remaining_time_to_full_charge
  {
    out << "remaining_time_to_full_charge: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_time_to_full_charge, out);
    out << ", ";
  }

  // member: remaining_capacity
  {
    out << "remaining_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_capacity, out);
    out << ", ";
  }

  // member: state_of_health
  {
    out << "state_of_health: ";
    rosidl_generator_traits::value_to_yaml(msg.state_of_health, out);
    out << ", ";
  }

  // member: status_flags
  {
    out << "status_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.status_flags, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: cell_voltage
  {
    if (msg.cell_voltage.size() == 0) {
      out << "cell_voltage: []";
    } else {
      out << "cell_voltage: [";
      size_t pending_items = msg.cell_voltage.size();
      for (auto item : msg.cell_voltage) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bmz_flag
  {
    out << "bmz_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.bmz_flag, out);
    out << ", ";
  }

  // member: full_voltage
  {
    out << "full_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.full_voltage, out);
    out << ", ";
  }

  // member: full_capacity
  {
    out << "full_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.full_capacity, out);
    out << ", ";
  }

  // member: temperature2
  {
    out << "temperature2: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature2, out);
    out << ", ";
  }

  // member: temperature3
  {
    out << "temperature3: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature3, out);
    out << ", ";
  }

  // member: cycle_count
  {
    out << "cycle_count: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle_count, out);
    out << ", ";
  }

  // member: dsg_overcurrent_counter
  {
    out << "dsg_overcurrent_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.dsg_overcurrent_counter, out);
    out << ", ";
  }

  // member: chg_overcurrent_counter
  {
    out << "chg_overcurrent_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.chg_overcurrent_counter, out);
    out << ", ";
  }

  // member: hw_major
  {
    out << "hw_major: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_major, out);
    out << ", ";
  }

  // member: hw_minor
  {
    out << "hw_minor: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_minor, out);
    out << ", ";
  }

  // member: fw_major
  {
    out << "fw_major: ";
    rosidl_generator_traits::value_to_yaml(msg.fw_major, out);
    out << ", ";
  }

  // member: fw_minor
  {
    out << "fw_minor: ";
    rosidl_generator_traits::value_to_yaml(msg.fw_minor, out);
    out << ", ";
  }

  // member: fw_patch
  {
    out << "fw_patch: ";
    rosidl_generator_traits::value_to_yaml(msg.fw_patch, out);
    out << ", ";
  }

  // member: rec_fw_major
  {
    out << "rec_fw_major: ";
    rosidl_generator_traits::value_to_yaml(msg.rec_fw_major, out);
    out << ", ";
  }

  // member: rec_fw_minor
  {
    out << "rec_fw_minor: ";
    rosidl_generator_traits::value_to_yaml(msg.rec_fw_minor, out);
    out << ", ";
  }

  // member: bl_major
  {
    out << "bl_major: ";
    rosidl_generator_traits::value_to_yaml(msg.bl_major, out);
    out << ", ";
  }

  // member: bl_minor
  {
    out << "bl_minor: ";
    rosidl_generator_traits::value_to_yaml(msg.bl_minor, out);
    out << ", ";
  }

  // member: status_enabled
  {
    out << "status_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.status_enabled, out);
    out << ", ";
  }

  // member: status_current_limitation
  {
    out << "status_current_limitation: ";
    rosidl_generator_traits::value_to_yaml(msg.status_current_limitation, out);
    out << ", ";
  }

  // member: status_switch_off_warn1
  {
    out << "status_switch_off_warn1: ";
    rosidl_generator_traits::value_to_yaml(msg.status_switch_off_warn1, out);
    out << ", ";
  }

  // member: status_switch_off_warn2
  {
    out << "status_switch_off_warn2: ";
    rosidl_generator_traits::value_to_yaml(msg.status_switch_off_warn2, out);
    out << ", ";
  }

  // member: status_fully_discharged
  {
    out << "status_fully_discharged: ";
    rosidl_generator_traits::value_to_yaml(msg.status_fully_discharged, out);
    out << ", ";
  }

  // member: status_nearly_discharged
  {
    out << "status_nearly_discharged: ";
    rosidl_generator_traits::value_to_yaml(msg.status_nearly_discharged, out);
    out << ", ";
  }

  // member: status_chargefet_on
  {
    out << "status_chargefet_on: ";
    rosidl_generator_traits::value_to_yaml(msg.status_chargefet_on, out);
    out << ", ";
  }

  // member: status_dischargefet_on
  {
    out << "status_dischargefet_on: ";
    rosidl_generator_traits::value_to_yaml(msg.status_dischargefet_on, out);
    out << ", ";
  }

  // member: status_discharging
  {
    out << "status_discharging: ";
    rosidl_generator_traits::value_to_yaml(msg.status_discharging, out);
    out << ", ";
  }

  // member: status_fully_charged
  {
    out << "status_fully_charged: ";
    rosidl_generator_traits::value_to_yaml(msg.status_fully_charged, out);
    out << ", ";
  }

  // member: status_charging
  {
    out << "status_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.status_charging, out);
    out << ", ";
  }

  // member: status_temp_charging_err
  {
    out << "status_temp_charging_err: ";
    rosidl_generator_traits::value_to_yaml(msg.status_temp_charging_err, out);
    out << ", ";
  }

  // member: status_cell_over_voltage
  {
    out << "status_cell_over_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.status_cell_over_voltage, out);
    out << ", ";
  }

  // member: status_cell_under_voltage
  {
    out << "status_cell_under_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.status_cell_under_voltage, out);
    out << ", ";
  }

  // member: status_charge_over_current
  {
    out << "status_charge_over_current: ";
    rosidl_generator_traits::value_to_yaml(msg.status_charge_over_current, out);
    out << ", ";
  }

  // member: status_shortcircuit
  {
    out << "status_shortcircuit: ";
    rosidl_generator_traits::value_to_yaml(msg.status_shortcircuit, out);
    out << ", ";
  }

  // member: status_discharge_over_current
  {
    out << "status_discharge_over_current: ";
    rosidl_generator_traits::value_to_yaml(msg.status_discharge_over_current, out);
    out << ", ";
  }

  // member: status_temp_discharging_err
  {
    out << "status_temp_discharging_err: ";
    rosidl_generator_traits::value_to_yaml(msg.status_temp_discharging_err, out);
    out << ", ";
  }

  // member: status_charger_detected
  {
    out << "status_charger_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.status_charger_detected, out);
    out << ", ";
  }

  // member: last_battery_msg_time
  {
    out << "last_battery_msg_time: ";
    rosidl_generator_traits::value_to_yaml(msg.last_battery_msg_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BMSData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pack_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pack_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.pack_voltage, out);
    out << "\n";
  }

  // member: charge_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charge_current: ";
    rosidl_generator_traits::value_to_yaml(msg.charge_current, out);
    out << "\n";
  }

  // member: discharge_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "discharge_current: ";
    rosidl_generator_traits::value_to_yaml(msg.discharge_current, out);
    out << "\n";
  }

  // member: state_of_charge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_of_charge: ";
    rosidl_generator_traits::value_to_yaml(msg.state_of_charge, out);
    out << "\n";
  }

  // member: remaining_time_to_full_charge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_time_to_full_charge: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_time_to_full_charge, out);
    out << "\n";
  }

  // member: remaining_capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_capacity, out);
    out << "\n";
  }

  // member: state_of_health
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_of_health: ";
    rosidl_generator_traits::value_to_yaml(msg.state_of_health, out);
    out << "\n";
  }

  // member: status_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.status_flags, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: cell_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cell_voltage.size() == 0) {
      out << "cell_voltage: []\n";
    } else {
      out << "cell_voltage:\n";
      for (auto item : msg.cell_voltage) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bmz_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bmz_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.bmz_flag, out);
    out << "\n";
  }

  // member: full_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.full_voltage, out);
    out << "\n";
  }

  // member: full_capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.full_capacity, out);
    out << "\n";
  }

  // member: temperature2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature2: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature2, out);
    out << "\n";
  }

  // member: temperature3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature3: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature3, out);
    out << "\n";
  }

  // member: cycle_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cycle_count: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle_count, out);
    out << "\n";
  }

  // member: dsg_overcurrent_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsg_overcurrent_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.dsg_overcurrent_counter, out);
    out << "\n";
  }

  // member: chg_overcurrent_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chg_overcurrent_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.chg_overcurrent_counter, out);
    out << "\n";
  }

  // member: hw_major
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hw_major: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_major, out);
    out << "\n";
  }

  // member: hw_minor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hw_minor: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_minor, out);
    out << "\n";
  }

  // member: fw_major
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fw_major: ";
    rosidl_generator_traits::value_to_yaml(msg.fw_major, out);
    out << "\n";
  }

  // member: fw_minor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fw_minor: ";
    rosidl_generator_traits::value_to_yaml(msg.fw_minor, out);
    out << "\n";
  }

  // member: fw_patch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fw_patch: ";
    rosidl_generator_traits::value_to_yaml(msg.fw_patch, out);
    out << "\n";
  }

  // member: rec_fw_major
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rec_fw_major: ";
    rosidl_generator_traits::value_to_yaml(msg.rec_fw_major, out);
    out << "\n";
  }

  // member: rec_fw_minor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rec_fw_minor: ";
    rosidl_generator_traits::value_to_yaml(msg.rec_fw_minor, out);
    out << "\n";
  }

  // member: bl_major
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bl_major: ";
    rosidl_generator_traits::value_to_yaml(msg.bl_major, out);
    out << "\n";
  }

  // member: bl_minor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bl_minor: ";
    rosidl_generator_traits::value_to_yaml(msg.bl_minor, out);
    out << "\n";
  }

  // member: status_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.status_enabled, out);
    out << "\n";
  }

  // member: status_current_limitation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_current_limitation: ";
    rosidl_generator_traits::value_to_yaml(msg.status_current_limitation, out);
    out << "\n";
  }

  // member: status_switch_off_warn1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_switch_off_warn1: ";
    rosidl_generator_traits::value_to_yaml(msg.status_switch_off_warn1, out);
    out << "\n";
  }

  // member: status_switch_off_warn2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_switch_off_warn2: ";
    rosidl_generator_traits::value_to_yaml(msg.status_switch_off_warn2, out);
    out << "\n";
  }

  // member: status_fully_discharged
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_fully_discharged: ";
    rosidl_generator_traits::value_to_yaml(msg.status_fully_discharged, out);
    out << "\n";
  }

  // member: status_nearly_discharged
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_nearly_discharged: ";
    rosidl_generator_traits::value_to_yaml(msg.status_nearly_discharged, out);
    out << "\n";
  }

  // member: status_chargefet_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_chargefet_on: ";
    rosidl_generator_traits::value_to_yaml(msg.status_chargefet_on, out);
    out << "\n";
  }

  // member: status_dischargefet_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_dischargefet_on: ";
    rosidl_generator_traits::value_to_yaml(msg.status_dischargefet_on, out);
    out << "\n";
  }

  // member: status_discharging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_discharging: ";
    rosidl_generator_traits::value_to_yaml(msg.status_discharging, out);
    out << "\n";
  }

  // member: status_fully_charged
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_fully_charged: ";
    rosidl_generator_traits::value_to_yaml(msg.status_fully_charged, out);
    out << "\n";
  }

  // member: status_charging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.status_charging, out);
    out << "\n";
  }

  // member: status_temp_charging_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_temp_charging_err: ";
    rosidl_generator_traits::value_to_yaml(msg.status_temp_charging_err, out);
    out << "\n";
  }

  // member: status_cell_over_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_cell_over_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.status_cell_over_voltage, out);
    out << "\n";
  }

  // member: status_cell_under_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_cell_under_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.status_cell_under_voltage, out);
    out << "\n";
  }

  // member: status_charge_over_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_charge_over_current: ";
    rosidl_generator_traits::value_to_yaml(msg.status_charge_over_current, out);
    out << "\n";
  }

  // member: status_shortcircuit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_shortcircuit: ";
    rosidl_generator_traits::value_to_yaml(msg.status_shortcircuit, out);
    out << "\n";
  }

  // member: status_discharge_over_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_discharge_over_current: ";
    rosidl_generator_traits::value_to_yaml(msg.status_discharge_over_current, out);
    out << "\n";
  }

  // member: status_temp_discharging_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_temp_discharging_err: ";
    rosidl_generator_traits::value_to_yaml(msg.status_temp_discharging_err, out);
    out << "\n";
  }

  // member: status_charger_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_charger_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.status_charger_detected, out);
    out << "\n";
  }

  // member: last_battery_msg_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_battery_msg_time: ";
    rosidl_generator_traits::value_to_yaml(msg.last_battery_msg_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BMSData & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::BMSData & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::BMSData & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::BMSData>()
{
  return "mir_msgs::msg::BMSData";
}

template<>
inline const char * name<mir_msgs::msg::BMSData>()
{
  return "mir_msgs/msg/BMSData";
}

template<>
struct has_fixed_size<mir_msgs::msg::BMSData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_msgs::msg::BMSData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_msgs::msg::BMSData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__BMS_DATA__TRAITS_HPP_
