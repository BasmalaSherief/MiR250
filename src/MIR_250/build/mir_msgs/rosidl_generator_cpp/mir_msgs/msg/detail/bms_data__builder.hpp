// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/BMSData.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__BMS_DATA__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__BMS_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/bms_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_BMSData_last_battery_msg_time
{
public:
  explicit Init_BMSData_last_battery_msg_time(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::BMSData last_battery_msg_time(::mir_msgs::msg::BMSData::_last_battery_msg_time_type arg)
  {
    msg_.last_battery_msg_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_charger_detected
{
public:
  explicit Init_BMSData_status_charger_detected(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_last_battery_msg_time status_charger_detected(::mir_msgs::msg::BMSData::_status_charger_detected_type arg)
  {
    msg_.status_charger_detected = std::move(arg);
    return Init_BMSData_last_battery_msg_time(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_temp_discharging_err
{
public:
  explicit Init_BMSData_status_temp_discharging_err(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_charger_detected status_temp_discharging_err(::mir_msgs::msg::BMSData::_status_temp_discharging_err_type arg)
  {
    msg_.status_temp_discharging_err = std::move(arg);
    return Init_BMSData_status_charger_detected(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_discharge_over_current
{
public:
  explicit Init_BMSData_status_discharge_over_current(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_temp_discharging_err status_discharge_over_current(::mir_msgs::msg::BMSData::_status_discharge_over_current_type arg)
  {
    msg_.status_discharge_over_current = std::move(arg);
    return Init_BMSData_status_temp_discharging_err(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_shortcircuit
{
public:
  explicit Init_BMSData_status_shortcircuit(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_discharge_over_current status_shortcircuit(::mir_msgs::msg::BMSData::_status_shortcircuit_type arg)
  {
    msg_.status_shortcircuit = std::move(arg);
    return Init_BMSData_status_discharge_over_current(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_charge_over_current
{
public:
  explicit Init_BMSData_status_charge_over_current(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_shortcircuit status_charge_over_current(::mir_msgs::msg::BMSData::_status_charge_over_current_type arg)
  {
    msg_.status_charge_over_current = std::move(arg);
    return Init_BMSData_status_shortcircuit(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_cell_under_voltage
{
public:
  explicit Init_BMSData_status_cell_under_voltage(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_charge_over_current status_cell_under_voltage(::mir_msgs::msg::BMSData::_status_cell_under_voltage_type arg)
  {
    msg_.status_cell_under_voltage = std::move(arg);
    return Init_BMSData_status_charge_over_current(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_cell_over_voltage
{
public:
  explicit Init_BMSData_status_cell_over_voltage(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_cell_under_voltage status_cell_over_voltage(::mir_msgs::msg::BMSData::_status_cell_over_voltage_type arg)
  {
    msg_.status_cell_over_voltage = std::move(arg);
    return Init_BMSData_status_cell_under_voltage(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_temp_charging_err
{
public:
  explicit Init_BMSData_status_temp_charging_err(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_cell_over_voltage status_temp_charging_err(::mir_msgs::msg::BMSData::_status_temp_charging_err_type arg)
  {
    msg_.status_temp_charging_err = std::move(arg);
    return Init_BMSData_status_cell_over_voltage(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_charging
{
public:
  explicit Init_BMSData_status_charging(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_temp_charging_err status_charging(::mir_msgs::msg::BMSData::_status_charging_type arg)
  {
    msg_.status_charging = std::move(arg);
    return Init_BMSData_status_temp_charging_err(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_fully_charged
{
public:
  explicit Init_BMSData_status_fully_charged(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_charging status_fully_charged(::mir_msgs::msg::BMSData::_status_fully_charged_type arg)
  {
    msg_.status_fully_charged = std::move(arg);
    return Init_BMSData_status_charging(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_discharging
{
public:
  explicit Init_BMSData_status_discharging(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_fully_charged status_discharging(::mir_msgs::msg::BMSData::_status_discharging_type arg)
  {
    msg_.status_discharging = std::move(arg);
    return Init_BMSData_status_fully_charged(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_dischargefet_on
{
public:
  explicit Init_BMSData_status_dischargefet_on(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_discharging status_dischargefet_on(::mir_msgs::msg::BMSData::_status_dischargefet_on_type arg)
  {
    msg_.status_dischargefet_on = std::move(arg);
    return Init_BMSData_status_discharging(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_chargefet_on
{
public:
  explicit Init_BMSData_status_chargefet_on(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_dischargefet_on status_chargefet_on(::mir_msgs::msg::BMSData::_status_chargefet_on_type arg)
  {
    msg_.status_chargefet_on = std::move(arg);
    return Init_BMSData_status_dischargefet_on(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_nearly_discharged
{
public:
  explicit Init_BMSData_status_nearly_discharged(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_chargefet_on status_nearly_discharged(::mir_msgs::msg::BMSData::_status_nearly_discharged_type arg)
  {
    msg_.status_nearly_discharged = std::move(arg);
    return Init_BMSData_status_chargefet_on(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_fully_discharged
{
public:
  explicit Init_BMSData_status_fully_discharged(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_nearly_discharged status_fully_discharged(::mir_msgs::msg::BMSData::_status_fully_discharged_type arg)
  {
    msg_.status_fully_discharged = std::move(arg);
    return Init_BMSData_status_nearly_discharged(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_switch_off_warn2
{
public:
  explicit Init_BMSData_status_switch_off_warn2(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_fully_discharged status_switch_off_warn2(::mir_msgs::msg::BMSData::_status_switch_off_warn2_type arg)
  {
    msg_.status_switch_off_warn2 = std::move(arg);
    return Init_BMSData_status_fully_discharged(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_switch_off_warn1
{
public:
  explicit Init_BMSData_status_switch_off_warn1(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_switch_off_warn2 status_switch_off_warn1(::mir_msgs::msg::BMSData::_status_switch_off_warn1_type arg)
  {
    msg_.status_switch_off_warn1 = std::move(arg);
    return Init_BMSData_status_switch_off_warn2(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_current_limitation
{
public:
  explicit Init_BMSData_status_current_limitation(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_switch_off_warn1 status_current_limitation(::mir_msgs::msg::BMSData::_status_current_limitation_type arg)
  {
    msg_.status_current_limitation = std::move(arg);
    return Init_BMSData_status_switch_off_warn1(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_enabled
{
public:
  explicit Init_BMSData_status_enabled(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_current_limitation status_enabled(::mir_msgs::msg::BMSData::_status_enabled_type arg)
  {
    msg_.status_enabled = std::move(arg);
    return Init_BMSData_status_current_limitation(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_bl_minor
{
public:
  explicit Init_BMSData_bl_minor(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_enabled bl_minor(::mir_msgs::msg::BMSData::_bl_minor_type arg)
  {
    msg_.bl_minor = std::move(arg);
    return Init_BMSData_status_enabled(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_bl_major
{
public:
  explicit Init_BMSData_bl_major(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_bl_minor bl_major(::mir_msgs::msg::BMSData::_bl_major_type arg)
  {
    msg_.bl_major = std::move(arg);
    return Init_BMSData_bl_minor(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_rec_fw_minor
{
public:
  explicit Init_BMSData_rec_fw_minor(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_bl_major rec_fw_minor(::mir_msgs::msg::BMSData::_rec_fw_minor_type arg)
  {
    msg_.rec_fw_minor = std::move(arg);
    return Init_BMSData_bl_major(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_rec_fw_major
{
public:
  explicit Init_BMSData_rec_fw_major(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_rec_fw_minor rec_fw_major(::mir_msgs::msg::BMSData::_rec_fw_major_type arg)
  {
    msg_.rec_fw_major = std::move(arg);
    return Init_BMSData_rec_fw_minor(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_fw_patch
{
public:
  explicit Init_BMSData_fw_patch(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_rec_fw_major fw_patch(::mir_msgs::msg::BMSData::_fw_patch_type arg)
  {
    msg_.fw_patch = std::move(arg);
    return Init_BMSData_rec_fw_major(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_fw_minor
{
public:
  explicit Init_BMSData_fw_minor(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_fw_patch fw_minor(::mir_msgs::msg::BMSData::_fw_minor_type arg)
  {
    msg_.fw_minor = std::move(arg);
    return Init_BMSData_fw_patch(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_fw_major
{
public:
  explicit Init_BMSData_fw_major(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_fw_minor fw_major(::mir_msgs::msg::BMSData::_fw_major_type arg)
  {
    msg_.fw_major = std::move(arg);
    return Init_BMSData_fw_minor(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_hw_minor
{
public:
  explicit Init_BMSData_hw_minor(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_fw_major hw_minor(::mir_msgs::msg::BMSData::_hw_minor_type arg)
  {
    msg_.hw_minor = std::move(arg);
    return Init_BMSData_fw_major(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_hw_major
{
public:
  explicit Init_BMSData_hw_major(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_hw_minor hw_major(::mir_msgs::msg::BMSData::_hw_major_type arg)
  {
    msg_.hw_major = std::move(arg);
    return Init_BMSData_hw_minor(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_chg_overcurrent_counter
{
public:
  explicit Init_BMSData_chg_overcurrent_counter(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_hw_major chg_overcurrent_counter(::mir_msgs::msg::BMSData::_chg_overcurrent_counter_type arg)
  {
    msg_.chg_overcurrent_counter = std::move(arg);
    return Init_BMSData_hw_major(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_dsg_overcurrent_counter
{
public:
  explicit Init_BMSData_dsg_overcurrent_counter(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_chg_overcurrent_counter dsg_overcurrent_counter(::mir_msgs::msg::BMSData::_dsg_overcurrent_counter_type arg)
  {
    msg_.dsg_overcurrent_counter = std::move(arg);
    return Init_BMSData_chg_overcurrent_counter(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_cycle_count
{
public:
  explicit Init_BMSData_cycle_count(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_dsg_overcurrent_counter cycle_count(::mir_msgs::msg::BMSData::_cycle_count_type arg)
  {
    msg_.cycle_count = std::move(arg);
    return Init_BMSData_dsg_overcurrent_counter(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_temperature3
{
public:
  explicit Init_BMSData_temperature3(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_cycle_count temperature3(::mir_msgs::msg::BMSData::_temperature3_type arg)
  {
    msg_.temperature3 = std::move(arg);
    return Init_BMSData_cycle_count(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_temperature2
{
public:
  explicit Init_BMSData_temperature2(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_temperature3 temperature2(::mir_msgs::msg::BMSData::_temperature2_type arg)
  {
    msg_.temperature2 = std::move(arg);
    return Init_BMSData_temperature3(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_full_capacity
{
public:
  explicit Init_BMSData_full_capacity(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_temperature2 full_capacity(::mir_msgs::msg::BMSData::_full_capacity_type arg)
  {
    msg_.full_capacity = std::move(arg);
    return Init_BMSData_temperature2(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_full_voltage
{
public:
  explicit Init_BMSData_full_voltage(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_full_capacity full_voltage(::mir_msgs::msg::BMSData::_full_voltage_type arg)
  {
    msg_.full_voltage = std::move(arg);
    return Init_BMSData_full_capacity(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_bmz_flag
{
public:
  explicit Init_BMSData_bmz_flag(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_full_voltage bmz_flag(::mir_msgs::msg::BMSData::_bmz_flag_type arg)
  {
    msg_.bmz_flag = std::move(arg);
    return Init_BMSData_full_voltage(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_cell_voltage
{
public:
  explicit Init_BMSData_cell_voltage(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_bmz_flag cell_voltage(::mir_msgs::msg::BMSData::_cell_voltage_type arg)
  {
    msg_.cell_voltage = std::move(arg);
    return Init_BMSData_bmz_flag(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_temperature
{
public:
  explicit Init_BMSData_temperature(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_cell_voltage temperature(::mir_msgs::msg::BMSData::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_BMSData_cell_voltage(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_status_flags
{
public:
  explicit Init_BMSData_status_flags(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_temperature status_flags(::mir_msgs::msg::BMSData::_status_flags_type arg)
  {
    msg_.status_flags = std::move(arg);
    return Init_BMSData_temperature(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_state_of_health
{
public:
  explicit Init_BMSData_state_of_health(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_status_flags state_of_health(::mir_msgs::msg::BMSData::_state_of_health_type arg)
  {
    msg_.state_of_health = std::move(arg);
    return Init_BMSData_status_flags(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_remaining_capacity
{
public:
  explicit Init_BMSData_remaining_capacity(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_state_of_health remaining_capacity(::mir_msgs::msg::BMSData::_remaining_capacity_type arg)
  {
    msg_.remaining_capacity = std::move(arg);
    return Init_BMSData_state_of_health(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_remaining_time_to_full_charge
{
public:
  explicit Init_BMSData_remaining_time_to_full_charge(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_remaining_capacity remaining_time_to_full_charge(::mir_msgs::msg::BMSData::_remaining_time_to_full_charge_type arg)
  {
    msg_.remaining_time_to_full_charge = std::move(arg);
    return Init_BMSData_remaining_capacity(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_state_of_charge
{
public:
  explicit Init_BMSData_state_of_charge(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_remaining_time_to_full_charge state_of_charge(::mir_msgs::msg::BMSData::_state_of_charge_type arg)
  {
    msg_.state_of_charge = std::move(arg);
    return Init_BMSData_remaining_time_to_full_charge(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_discharge_current
{
public:
  explicit Init_BMSData_discharge_current(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_state_of_charge discharge_current(::mir_msgs::msg::BMSData::_discharge_current_type arg)
  {
    msg_.discharge_current = std::move(arg);
    return Init_BMSData_state_of_charge(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_charge_current
{
public:
  explicit Init_BMSData_charge_current(::mir_msgs::msg::BMSData & msg)
  : msg_(msg)
  {}
  Init_BMSData_discharge_current charge_current(::mir_msgs::msg::BMSData::_charge_current_type arg)
  {
    msg_.charge_current = std::move(arg);
    return Init_BMSData_discharge_current(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

class Init_BMSData_pack_voltage
{
public:
  Init_BMSData_pack_voltage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BMSData_charge_current pack_voltage(::mir_msgs::msg::BMSData::_pack_voltage_type arg)
  {
    msg_.pack_voltage = std::move(arg);
    return Init_BMSData_charge_current(msg_);
  }

private:
  ::mir_msgs::msg::BMSData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::BMSData>()
{
  return mir_msgs::msg::builder::Init_BMSData_pack_voltage();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__BMS_DATA__BUILDER_HPP_
