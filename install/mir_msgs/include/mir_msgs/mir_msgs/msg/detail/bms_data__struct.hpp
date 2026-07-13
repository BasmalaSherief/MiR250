// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/BMSData.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__BMS_DATA__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__BMS_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__BMSData __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__BMSData __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BMSData_
{
  using Type = BMSData_<ContainerAllocator>;

  explicit BMSData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pack_voltage = 0.0;
      this->charge_current = 0.0;
      this->discharge_current = 0.0;
      this->state_of_charge = 0l;
      this->remaining_time_to_full_charge = 0.0;
      this->remaining_capacity = 0l;
      this->state_of_health = 0l;
      this->status_flags = 0l;
      this->temperature = 0l;
      this->bmz_flag = 0ul;
      this->full_voltage = 0.0;
      this->full_capacity = 0l;
      this->temperature2 = 0l;
      this->temperature3 = 0l;
      this->cycle_count = 0l;
      this->dsg_overcurrent_counter = 0l;
      this->chg_overcurrent_counter = 0l;
      this->hw_major = 0l;
      this->hw_minor = 0l;
      this->fw_major = 0l;
      this->fw_minor = 0l;
      this->fw_patch = 0l;
      this->rec_fw_major = 0l;
      this->rec_fw_minor = 0l;
      this->bl_major = 0l;
      this->bl_minor = 0l;
      this->status_enabled = 0ul;
      this->status_current_limitation = 0ul;
      this->status_switch_off_warn1 = 0ul;
      this->status_switch_off_warn2 = 0ul;
      this->status_fully_discharged = 0ul;
      this->status_nearly_discharged = 0ul;
      this->status_chargefet_on = 0ul;
      this->status_dischargefet_on = 0ul;
      this->status_discharging = 0ul;
      this->status_fully_charged = 0ul;
      this->status_charging = 0ul;
      this->status_temp_charging_err = 0ul;
      this->status_cell_over_voltage = 0ul;
      this->status_cell_under_voltage = 0ul;
      this->status_charge_over_current = 0ul;
      this->status_shortcircuit = 0ul;
      this->status_discharge_over_current = 0ul;
      this->status_temp_discharging_err = 0ul;
      this->status_charger_detected = 0ul;
      this->last_battery_msg_time = 0.0;
    }
  }

  explicit BMSData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pack_voltage = 0.0;
      this->charge_current = 0.0;
      this->discharge_current = 0.0;
      this->state_of_charge = 0l;
      this->remaining_time_to_full_charge = 0.0;
      this->remaining_capacity = 0l;
      this->state_of_health = 0l;
      this->status_flags = 0l;
      this->temperature = 0l;
      this->bmz_flag = 0ul;
      this->full_voltage = 0.0;
      this->full_capacity = 0l;
      this->temperature2 = 0l;
      this->temperature3 = 0l;
      this->cycle_count = 0l;
      this->dsg_overcurrent_counter = 0l;
      this->chg_overcurrent_counter = 0l;
      this->hw_major = 0l;
      this->hw_minor = 0l;
      this->fw_major = 0l;
      this->fw_minor = 0l;
      this->fw_patch = 0l;
      this->rec_fw_major = 0l;
      this->rec_fw_minor = 0l;
      this->bl_major = 0l;
      this->bl_minor = 0l;
      this->status_enabled = 0ul;
      this->status_current_limitation = 0ul;
      this->status_switch_off_warn1 = 0ul;
      this->status_switch_off_warn2 = 0ul;
      this->status_fully_discharged = 0ul;
      this->status_nearly_discharged = 0ul;
      this->status_chargefet_on = 0ul;
      this->status_dischargefet_on = 0ul;
      this->status_discharging = 0ul;
      this->status_fully_charged = 0ul;
      this->status_charging = 0ul;
      this->status_temp_charging_err = 0ul;
      this->status_cell_over_voltage = 0ul;
      this->status_cell_under_voltage = 0ul;
      this->status_charge_over_current = 0ul;
      this->status_shortcircuit = 0ul;
      this->status_discharge_over_current = 0ul;
      this->status_temp_discharging_err = 0ul;
      this->status_charger_detected = 0ul;
      this->last_battery_msg_time = 0.0;
    }
  }

  // field types and members
  using _pack_voltage_type =
    double;
  _pack_voltage_type pack_voltage;
  using _charge_current_type =
    double;
  _charge_current_type charge_current;
  using _discharge_current_type =
    double;
  _discharge_current_type discharge_current;
  using _state_of_charge_type =
    int32_t;
  _state_of_charge_type state_of_charge;
  using _remaining_time_to_full_charge_type =
    double;
  _remaining_time_to_full_charge_type remaining_time_to_full_charge;
  using _remaining_capacity_type =
    int32_t;
  _remaining_capacity_type remaining_capacity;
  using _state_of_health_type =
    int32_t;
  _state_of_health_type state_of_health;
  using _status_flags_type =
    int32_t;
  _status_flags_type status_flags;
  using _temperature_type =
    int32_t;
  _temperature_type temperature;
  using _cell_voltage_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _cell_voltage_type cell_voltage;
  using _bmz_flag_type =
    uint32_t;
  _bmz_flag_type bmz_flag;
  using _full_voltage_type =
    double;
  _full_voltage_type full_voltage;
  using _full_capacity_type =
    int32_t;
  _full_capacity_type full_capacity;
  using _temperature2_type =
    int32_t;
  _temperature2_type temperature2;
  using _temperature3_type =
    int32_t;
  _temperature3_type temperature3;
  using _cycle_count_type =
    int32_t;
  _cycle_count_type cycle_count;
  using _dsg_overcurrent_counter_type =
    int32_t;
  _dsg_overcurrent_counter_type dsg_overcurrent_counter;
  using _chg_overcurrent_counter_type =
    int32_t;
  _chg_overcurrent_counter_type chg_overcurrent_counter;
  using _hw_major_type =
    int32_t;
  _hw_major_type hw_major;
  using _hw_minor_type =
    int32_t;
  _hw_minor_type hw_minor;
  using _fw_major_type =
    int32_t;
  _fw_major_type fw_major;
  using _fw_minor_type =
    int32_t;
  _fw_minor_type fw_minor;
  using _fw_patch_type =
    int32_t;
  _fw_patch_type fw_patch;
  using _rec_fw_major_type =
    int32_t;
  _rec_fw_major_type rec_fw_major;
  using _rec_fw_minor_type =
    int32_t;
  _rec_fw_minor_type rec_fw_minor;
  using _bl_major_type =
    int32_t;
  _bl_major_type bl_major;
  using _bl_minor_type =
    int32_t;
  _bl_minor_type bl_minor;
  using _status_enabled_type =
    uint32_t;
  _status_enabled_type status_enabled;
  using _status_current_limitation_type =
    uint32_t;
  _status_current_limitation_type status_current_limitation;
  using _status_switch_off_warn1_type =
    uint32_t;
  _status_switch_off_warn1_type status_switch_off_warn1;
  using _status_switch_off_warn2_type =
    uint32_t;
  _status_switch_off_warn2_type status_switch_off_warn2;
  using _status_fully_discharged_type =
    uint32_t;
  _status_fully_discharged_type status_fully_discharged;
  using _status_nearly_discharged_type =
    uint32_t;
  _status_nearly_discharged_type status_nearly_discharged;
  using _status_chargefet_on_type =
    uint32_t;
  _status_chargefet_on_type status_chargefet_on;
  using _status_dischargefet_on_type =
    uint32_t;
  _status_dischargefet_on_type status_dischargefet_on;
  using _status_discharging_type =
    uint32_t;
  _status_discharging_type status_discharging;
  using _status_fully_charged_type =
    uint32_t;
  _status_fully_charged_type status_fully_charged;
  using _status_charging_type =
    uint32_t;
  _status_charging_type status_charging;
  using _status_temp_charging_err_type =
    uint32_t;
  _status_temp_charging_err_type status_temp_charging_err;
  using _status_cell_over_voltage_type =
    uint32_t;
  _status_cell_over_voltage_type status_cell_over_voltage;
  using _status_cell_under_voltage_type =
    uint32_t;
  _status_cell_under_voltage_type status_cell_under_voltage;
  using _status_charge_over_current_type =
    uint32_t;
  _status_charge_over_current_type status_charge_over_current;
  using _status_shortcircuit_type =
    uint32_t;
  _status_shortcircuit_type status_shortcircuit;
  using _status_discharge_over_current_type =
    uint32_t;
  _status_discharge_over_current_type status_discharge_over_current;
  using _status_temp_discharging_err_type =
    uint32_t;
  _status_temp_discharging_err_type status_temp_discharging_err;
  using _status_charger_detected_type =
    uint32_t;
  _status_charger_detected_type status_charger_detected;
  using _last_battery_msg_time_type =
    double;
  _last_battery_msg_time_type last_battery_msg_time;

  // setters for named parameter idiom
  Type & set__pack_voltage(
    const double & _arg)
  {
    this->pack_voltage = _arg;
    return *this;
  }
  Type & set__charge_current(
    const double & _arg)
  {
    this->charge_current = _arg;
    return *this;
  }
  Type & set__discharge_current(
    const double & _arg)
  {
    this->discharge_current = _arg;
    return *this;
  }
  Type & set__state_of_charge(
    const int32_t & _arg)
  {
    this->state_of_charge = _arg;
    return *this;
  }
  Type & set__remaining_time_to_full_charge(
    const double & _arg)
  {
    this->remaining_time_to_full_charge = _arg;
    return *this;
  }
  Type & set__remaining_capacity(
    const int32_t & _arg)
  {
    this->remaining_capacity = _arg;
    return *this;
  }
  Type & set__state_of_health(
    const int32_t & _arg)
  {
    this->state_of_health = _arg;
    return *this;
  }
  Type & set__status_flags(
    const int32_t & _arg)
  {
    this->status_flags = _arg;
    return *this;
  }
  Type & set__temperature(
    const int32_t & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__cell_voltage(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->cell_voltage = _arg;
    return *this;
  }
  Type & set__bmz_flag(
    const uint32_t & _arg)
  {
    this->bmz_flag = _arg;
    return *this;
  }
  Type & set__full_voltage(
    const double & _arg)
  {
    this->full_voltage = _arg;
    return *this;
  }
  Type & set__full_capacity(
    const int32_t & _arg)
  {
    this->full_capacity = _arg;
    return *this;
  }
  Type & set__temperature2(
    const int32_t & _arg)
  {
    this->temperature2 = _arg;
    return *this;
  }
  Type & set__temperature3(
    const int32_t & _arg)
  {
    this->temperature3 = _arg;
    return *this;
  }
  Type & set__cycle_count(
    const int32_t & _arg)
  {
    this->cycle_count = _arg;
    return *this;
  }
  Type & set__dsg_overcurrent_counter(
    const int32_t & _arg)
  {
    this->dsg_overcurrent_counter = _arg;
    return *this;
  }
  Type & set__chg_overcurrent_counter(
    const int32_t & _arg)
  {
    this->chg_overcurrent_counter = _arg;
    return *this;
  }
  Type & set__hw_major(
    const int32_t & _arg)
  {
    this->hw_major = _arg;
    return *this;
  }
  Type & set__hw_minor(
    const int32_t & _arg)
  {
    this->hw_minor = _arg;
    return *this;
  }
  Type & set__fw_major(
    const int32_t & _arg)
  {
    this->fw_major = _arg;
    return *this;
  }
  Type & set__fw_minor(
    const int32_t & _arg)
  {
    this->fw_minor = _arg;
    return *this;
  }
  Type & set__fw_patch(
    const int32_t & _arg)
  {
    this->fw_patch = _arg;
    return *this;
  }
  Type & set__rec_fw_major(
    const int32_t & _arg)
  {
    this->rec_fw_major = _arg;
    return *this;
  }
  Type & set__rec_fw_minor(
    const int32_t & _arg)
  {
    this->rec_fw_minor = _arg;
    return *this;
  }
  Type & set__bl_major(
    const int32_t & _arg)
  {
    this->bl_major = _arg;
    return *this;
  }
  Type & set__bl_minor(
    const int32_t & _arg)
  {
    this->bl_minor = _arg;
    return *this;
  }
  Type & set__status_enabled(
    const uint32_t & _arg)
  {
    this->status_enabled = _arg;
    return *this;
  }
  Type & set__status_current_limitation(
    const uint32_t & _arg)
  {
    this->status_current_limitation = _arg;
    return *this;
  }
  Type & set__status_switch_off_warn1(
    const uint32_t & _arg)
  {
    this->status_switch_off_warn1 = _arg;
    return *this;
  }
  Type & set__status_switch_off_warn2(
    const uint32_t & _arg)
  {
    this->status_switch_off_warn2 = _arg;
    return *this;
  }
  Type & set__status_fully_discharged(
    const uint32_t & _arg)
  {
    this->status_fully_discharged = _arg;
    return *this;
  }
  Type & set__status_nearly_discharged(
    const uint32_t & _arg)
  {
    this->status_nearly_discharged = _arg;
    return *this;
  }
  Type & set__status_chargefet_on(
    const uint32_t & _arg)
  {
    this->status_chargefet_on = _arg;
    return *this;
  }
  Type & set__status_dischargefet_on(
    const uint32_t & _arg)
  {
    this->status_dischargefet_on = _arg;
    return *this;
  }
  Type & set__status_discharging(
    const uint32_t & _arg)
  {
    this->status_discharging = _arg;
    return *this;
  }
  Type & set__status_fully_charged(
    const uint32_t & _arg)
  {
    this->status_fully_charged = _arg;
    return *this;
  }
  Type & set__status_charging(
    const uint32_t & _arg)
  {
    this->status_charging = _arg;
    return *this;
  }
  Type & set__status_temp_charging_err(
    const uint32_t & _arg)
  {
    this->status_temp_charging_err = _arg;
    return *this;
  }
  Type & set__status_cell_over_voltage(
    const uint32_t & _arg)
  {
    this->status_cell_over_voltage = _arg;
    return *this;
  }
  Type & set__status_cell_under_voltage(
    const uint32_t & _arg)
  {
    this->status_cell_under_voltage = _arg;
    return *this;
  }
  Type & set__status_charge_over_current(
    const uint32_t & _arg)
  {
    this->status_charge_over_current = _arg;
    return *this;
  }
  Type & set__status_shortcircuit(
    const uint32_t & _arg)
  {
    this->status_shortcircuit = _arg;
    return *this;
  }
  Type & set__status_discharge_over_current(
    const uint32_t & _arg)
  {
    this->status_discharge_over_current = _arg;
    return *this;
  }
  Type & set__status_temp_discharging_err(
    const uint32_t & _arg)
  {
    this->status_temp_discharging_err = _arg;
    return *this;
  }
  Type & set__status_charger_detected(
    const uint32_t & _arg)
  {
    this->status_charger_detected = _arg;
    return *this;
  }
  Type & set__last_battery_msg_time(
    const double & _arg)
  {
    this->last_battery_msg_time = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t DISCHARGING =
    1;
  static constexpr int32_t CHARGING =
    2;
  static constexpr int32_t OV =
    4;
  static constexpr int32_t UV =
    8;
  static constexpr int32_t COC =
    16;
  static constexpr int32_t DOC =
    32;
  static constexpr int32_t DOT =
    64;
  static constexpr int32_t DUT =
    128;
  static constexpr int32_t SC =
    512;
  static constexpr int32_t COT =
    1024;
  static constexpr int32_t CUT =
    2048;
  static constexpr int32_t FW_STATUS_MSK =
    2031616;
  static constexpr int32_t FW_STATUS_SHIFT =
    16;
  static constexpr int32_t FW_UPD_OK =
    0;
  static constexpr int32_t FW_UPD_RUNNING =
    1;
  static constexpr int32_t FW_UPD_FAILED_BOOT =
    2;
  static constexpr int32_t FW_UPD_FAILED_APP =
    3;
  static constexpr int32_t FW_UPD_FAILED_PARAM =
    4;
  static constexpr int32_t FW_STATUS_LOW_BATT =
    5;
  static constexpr int32_t FW_STATUS_FILE_CORRUPTED =
    6;
  static constexpr int32_t FW_STATUS_CURRENT_TO_HIGH =
    7;
  static constexpr int32_t FW_STATUS_NO_CAN =
    8;
  static constexpr int32_t FW_BATTERY_IMBALANCE_HIGH =
    9;

  // pointer types
  using RawPtr =
    mir_msgs::msg::BMSData_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::BMSData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::BMSData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::BMSData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::BMSData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::BMSData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::BMSData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::BMSData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::BMSData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::BMSData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__BMSData
    std::shared_ptr<mir_msgs::msg::BMSData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__BMSData
    std::shared_ptr<mir_msgs::msg::BMSData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BMSData_ & other) const
  {
    if (this->pack_voltage != other.pack_voltage) {
      return false;
    }
    if (this->charge_current != other.charge_current) {
      return false;
    }
    if (this->discharge_current != other.discharge_current) {
      return false;
    }
    if (this->state_of_charge != other.state_of_charge) {
      return false;
    }
    if (this->remaining_time_to_full_charge != other.remaining_time_to_full_charge) {
      return false;
    }
    if (this->remaining_capacity != other.remaining_capacity) {
      return false;
    }
    if (this->state_of_health != other.state_of_health) {
      return false;
    }
    if (this->status_flags != other.status_flags) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->cell_voltage != other.cell_voltage) {
      return false;
    }
    if (this->bmz_flag != other.bmz_flag) {
      return false;
    }
    if (this->full_voltage != other.full_voltage) {
      return false;
    }
    if (this->full_capacity != other.full_capacity) {
      return false;
    }
    if (this->temperature2 != other.temperature2) {
      return false;
    }
    if (this->temperature3 != other.temperature3) {
      return false;
    }
    if (this->cycle_count != other.cycle_count) {
      return false;
    }
    if (this->dsg_overcurrent_counter != other.dsg_overcurrent_counter) {
      return false;
    }
    if (this->chg_overcurrent_counter != other.chg_overcurrent_counter) {
      return false;
    }
    if (this->hw_major != other.hw_major) {
      return false;
    }
    if (this->hw_minor != other.hw_minor) {
      return false;
    }
    if (this->fw_major != other.fw_major) {
      return false;
    }
    if (this->fw_minor != other.fw_minor) {
      return false;
    }
    if (this->fw_patch != other.fw_patch) {
      return false;
    }
    if (this->rec_fw_major != other.rec_fw_major) {
      return false;
    }
    if (this->rec_fw_minor != other.rec_fw_minor) {
      return false;
    }
    if (this->bl_major != other.bl_major) {
      return false;
    }
    if (this->bl_minor != other.bl_minor) {
      return false;
    }
    if (this->status_enabled != other.status_enabled) {
      return false;
    }
    if (this->status_current_limitation != other.status_current_limitation) {
      return false;
    }
    if (this->status_switch_off_warn1 != other.status_switch_off_warn1) {
      return false;
    }
    if (this->status_switch_off_warn2 != other.status_switch_off_warn2) {
      return false;
    }
    if (this->status_fully_discharged != other.status_fully_discharged) {
      return false;
    }
    if (this->status_nearly_discharged != other.status_nearly_discharged) {
      return false;
    }
    if (this->status_chargefet_on != other.status_chargefet_on) {
      return false;
    }
    if (this->status_dischargefet_on != other.status_dischargefet_on) {
      return false;
    }
    if (this->status_discharging != other.status_discharging) {
      return false;
    }
    if (this->status_fully_charged != other.status_fully_charged) {
      return false;
    }
    if (this->status_charging != other.status_charging) {
      return false;
    }
    if (this->status_temp_charging_err != other.status_temp_charging_err) {
      return false;
    }
    if (this->status_cell_over_voltage != other.status_cell_over_voltage) {
      return false;
    }
    if (this->status_cell_under_voltage != other.status_cell_under_voltage) {
      return false;
    }
    if (this->status_charge_over_current != other.status_charge_over_current) {
      return false;
    }
    if (this->status_shortcircuit != other.status_shortcircuit) {
      return false;
    }
    if (this->status_discharge_over_current != other.status_discharge_over_current) {
      return false;
    }
    if (this->status_temp_discharging_err != other.status_temp_discharging_err) {
      return false;
    }
    if (this->status_charger_detected != other.status_charger_detected) {
      return false;
    }
    if (this->last_battery_msg_time != other.last_battery_msg_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const BMSData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BMSData_

// alias to use template instance with default allocator
using BMSData =
  mir_msgs::msg::BMSData_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::DISCHARGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::CHARGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::OV;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::UV;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::COC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::DOC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::DOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::DUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::SC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::COT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::CUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::FW_STATUS_MSK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::FW_STATUS_SHIFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::FW_UPD_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::FW_UPD_RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::FW_UPD_FAILED_BOOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::FW_UPD_FAILED_APP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::FW_UPD_FAILED_PARAM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::FW_STATUS_LOW_BATT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::FW_STATUS_FILE_CORRUPTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::FW_STATUS_CURRENT_TO_HIGH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::FW_STATUS_NO_CAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BMSData_<ContainerAllocator>::FW_BATTERY_IMBALANCE_HIGH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__BMS_DATA__STRUCT_HPP_
