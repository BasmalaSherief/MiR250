// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mir_msgs:msg/BMSData.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/bms_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mir_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mir_msgs/msg/detail/bms_data__struct.h"
#include "mir_msgs/msg/detail/bms_data__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // cell_voltage
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // cell_voltage

// forward declare type support functions


using _BMSData__ros_msg_type = mir_msgs__msg__BMSData;

static bool _BMSData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BMSData__ros_msg_type * ros_message = static_cast<const _BMSData__ros_msg_type *>(untyped_ros_message);
  // Field name: pack_voltage
  {
    cdr << ros_message->pack_voltage;
  }

  // Field name: charge_current
  {
    cdr << ros_message->charge_current;
  }

  // Field name: discharge_current
  {
    cdr << ros_message->discharge_current;
  }

  // Field name: state_of_charge
  {
    cdr << ros_message->state_of_charge;
  }

  // Field name: remaining_time_to_full_charge
  {
    cdr << ros_message->remaining_time_to_full_charge;
  }

  // Field name: remaining_capacity
  {
    cdr << ros_message->remaining_capacity;
  }

  // Field name: state_of_health
  {
    cdr << ros_message->state_of_health;
  }

  // Field name: status_flags
  {
    cdr << ros_message->status_flags;
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: cell_voltage
  {
    size_t size = ros_message->cell_voltage.size;
    auto array_ptr = ros_message->cell_voltage.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: bmz_flag
  {
    cdr << ros_message->bmz_flag;
  }

  // Field name: full_voltage
  {
    cdr << ros_message->full_voltage;
  }

  // Field name: full_capacity
  {
    cdr << ros_message->full_capacity;
  }

  // Field name: temperature2
  {
    cdr << ros_message->temperature2;
  }

  // Field name: temperature3
  {
    cdr << ros_message->temperature3;
  }

  // Field name: cycle_count
  {
    cdr << ros_message->cycle_count;
  }

  // Field name: dsg_overcurrent_counter
  {
    cdr << ros_message->dsg_overcurrent_counter;
  }

  // Field name: chg_overcurrent_counter
  {
    cdr << ros_message->chg_overcurrent_counter;
  }

  // Field name: hw_major
  {
    cdr << ros_message->hw_major;
  }

  // Field name: hw_minor
  {
    cdr << ros_message->hw_minor;
  }

  // Field name: fw_major
  {
    cdr << ros_message->fw_major;
  }

  // Field name: fw_minor
  {
    cdr << ros_message->fw_minor;
  }

  // Field name: fw_patch
  {
    cdr << ros_message->fw_patch;
  }

  // Field name: rec_fw_major
  {
    cdr << ros_message->rec_fw_major;
  }

  // Field name: rec_fw_minor
  {
    cdr << ros_message->rec_fw_minor;
  }

  // Field name: bl_major
  {
    cdr << ros_message->bl_major;
  }

  // Field name: bl_minor
  {
    cdr << ros_message->bl_minor;
  }

  // Field name: status_enabled
  {
    cdr << ros_message->status_enabled;
  }

  // Field name: status_current_limitation
  {
    cdr << ros_message->status_current_limitation;
  }

  // Field name: status_switch_off_warn1
  {
    cdr << ros_message->status_switch_off_warn1;
  }

  // Field name: status_switch_off_warn2
  {
    cdr << ros_message->status_switch_off_warn2;
  }

  // Field name: status_fully_discharged
  {
    cdr << ros_message->status_fully_discharged;
  }

  // Field name: status_nearly_discharged
  {
    cdr << ros_message->status_nearly_discharged;
  }

  // Field name: status_chargefet_on
  {
    cdr << ros_message->status_chargefet_on;
  }

  // Field name: status_dischargefet_on
  {
    cdr << ros_message->status_dischargefet_on;
  }

  // Field name: status_discharging
  {
    cdr << ros_message->status_discharging;
  }

  // Field name: status_fully_charged
  {
    cdr << ros_message->status_fully_charged;
  }

  // Field name: status_charging
  {
    cdr << ros_message->status_charging;
  }

  // Field name: status_temp_charging_err
  {
    cdr << ros_message->status_temp_charging_err;
  }

  // Field name: status_cell_over_voltage
  {
    cdr << ros_message->status_cell_over_voltage;
  }

  // Field name: status_cell_under_voltage
  {
    cdr << ros_message->status_cell_under_voltage;
  }

  // Field name: status_charge_over_current
  {
    cdr << ros_message->status_charge_over_current;
  }

  // Field name: status_shortcircuit
  {
    cdr << ros_message->status_shortcircuit;
  }

  // Field name: status_discharge_over_current
  {
    cdr << ros_message->status_discharge_over_current;
  }

  // Field name: status_temp_discharging_err
  {
    cdr << ros_message->status_temp_discharging_err;
  }

  // Field name: status_charger_detected
  {
    cdr << ros_message->status_charger_detected;
  }

  // Field name: last_battery_msg_time
  {
    cdr << ros_message->last_battery_msg_time;
  }

  return true;
}

static bool _BMSData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BMSData__ros_msg_type * ros_message = static_cast<_BMSData__ros_msg_type *>(untyped_ros_message);
  // Field name: pack_voltage
  {
    cdr >> ros_message->pack_voltage;
  }

  // Field name: charge_current
  {
    cdr >> ros_message->charge_current;
  }

  // Field name: discharge_current
  {
    cdr >> ros_message->discharge_current;
  }

  // Field name: state_of_charge
  {
    cdr >> ros_message->state_of_charge;
  }

  // Field name: remaining_time_to_full_charge
  {
    cdr >> ros_message->remaining_time_to_full_charge;
  }

  // Field name: remaining_capacity
  {
    cdr >> ros_message->remaining_capacity;
  }

  // Field name: state_of_health
  {
    cdr >> ros_message->state_of_health;
  }

  // Field name: status_flags
  {
    cdr >> ros_message->status_flags;
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  // Field name: cell_voltage
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->cell_voltage.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->cell_voltage);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->cell_voltage, size)) {
      fprintf(stderr, "failed to create array for field 'cell_voltage'");
      return false;
    }
    auto array_ptr = ros_message->cell_voltage.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: bmz_flag
  {
    cdr >> ros_message->bmz_flag;
  }

  // Field name: full_voltage
  {
    cdr >> ros_message->full_voltage;
  }

  // Field name: full_capacity
  {
    cdr >> ros_message->full_capacity;
  }

  // Field name: temperature2
  {
    cdr >> ros_message->temperature2;
  }

  // Field name: temperature3
  {
    cdr >> ros_message->temperature3;
  }

  // Field name: cycle_count
  {
    cdr >> ros_message->cycle_count;
  }

  // Field name: dsg_overcurrent_counter
  {
    cdr >> ros_message->dsg_overcurrent_counter;
  }

  // Field name: chg_overcurrent_counter
  {
    cdr >> ros_message->chg_overcurrent_counter;
  }

  // Field name: hw_major
  {
    cdr >> ros_message->hw_major;
  }

  // Field name: hw_minor
  {
    cdr >> ros_message->hw_minor;
  }

  // Field name: fw_major
  {
    cdr >> ros_message->fw_major;
  }

  // Field name: fw_minor
  {
    cdr >> ros_message->fw_minor;
  }

  // Field name: fw_patch
  {
    cdr >> ros_message->fw_patch;
  }

  // Field name: rec_fw_major
  {
    cdr >> ros_message->rec_fw_major;
  }

  // Field name: rec_fw_minor
  {
    cdr >> ros_message->rec_fw_minor;
  }

  // Field name: bl_major
  {
    cdr >> ros_message->bl_major;
  }

  // Field name: bl_minor
  {
    cdr >> ros_message->bl_minor;
  }

  // Field name: status_enabled
  {
    cdr >> ros_message->status_enabled;
  }

  // Field name: status_current_limitation
  {
    cdr >> ros_message->status_current_limitation;
  }

  // Field name: status_switch_off_warn1
  {
    cdr >> ros_message->status_switch_off_warn1;
  }

  // Field name: status_switch_off_warn2
  {
    cdr >> ros_message->status_switch_off_warn2;
  }

  // Field name: status_fully_discharged
  {
    cdr >> ros_message->status_fully_discharged;
  }

  // Field name: status_nearly_discharged
  {
    cdr >> ros_message->status_nearly_discharged;
  }

  // Field name: status_chargefet_on
  {
    cdr >> ros_message->status_chargefet_on;
  }

  // Field name: status_dischargefet_on
  {
    cdr >> ros_message->status_dischargefet_on;
  }

  // Field name: status_discharging
  {
    cdr >> ros_message->status_discharging;
  }

  // Field name: status_fully_charged
  {
    cdr >> ros_message->status_fully_charged;
  }

  // Field name: status_charging
  {
    cdr >> ros_message->status_charging;
  }

  // Field name: status_temp_charging_err
  {
    cdr >> ros_message->status_temp_charging_err;
  }

  // Field name: status_cell_over_voltage
  {
    cdr >> ros_message->status_cell_over_voltage;
  }

  // Field name: status_cell_under_voltage
  {
    cdr >> ros_message->status_cell_under_voltage;
  }

  // Field name: status_charge_over_current
  {
    cdr >> ros_message->status_charge_over_current;
  }

  // Field name: status_shortcircuit
  {
    cdr >> ros_message->status_shortcircuit;
  }

  // Field name: status_discharge_over_current
  {
    cdr >> ros_message->status_discharge_over_current;
  }

  // Field name: status_temp_discharging_err
  {
    cdr >> ros_message->status_temp_discharging_err;
  }

  // Field name: status_charger_detected
  {
    cdr >> ros_message->status_charger_detected;
  }

  // Field name: last_battery_msg_time
  {
    cdr >> ros_message->last_battery_msg_time;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t get_serialized_size_mir_msgs__msg__BMSData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BMSData__ros_msg_type * ros_message = static_cast<const _BMSData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pack_voltage
  {
    size_t item_size = sizeof(ros_message->pack_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name charge_current
  {
    size_t item_size = sizeof(ros_message->charge_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name discharge_current
  {
    size_t item_size = sizeof(ros_message->discharge_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state_of_charge
  {
    size_t item_size = sizeof(ros_message->state_of_charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remaining_time_to_full_charge
  {
    size_t item_size = sizeof(ros_message->remaining_time_to_full_charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remaining_capacity
  {
    size_t item_size = sizeof(ros_message->remaining_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state_of_health
  {
    size_t item_size = sizeof(ros_message->state_of_health);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_flags
  {
    size_t item_size = sizeof(ros_message->status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cell_voltage
  {
    size_t array_size = ros_message->cell_voltage.size;
    auto array_ptr = ros_message->cell_voltage.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bmz_flag
  {
    size_t item_size = sizeof(ros_message->bmz_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name full_voltage
  {
    size_t item_size = sizeof(ros_message->full_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name full_capacity
  {
    size_t item_size = sizeof(ros_message->full_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature2
  {
    size_t item_size = sizeof(ros_message->temperature2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature3
  {
    size_t item_size = sizeof(ros_message->temperature3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cycle_count
  {
    size_t item_size = sizeof(ros_message->cycle_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsg_overcurrent_counter
  {
    size_t item_size = sizeof(ros_message->dsg_overcurrent_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chg_overcurrent_counter
  {
    size_t item_size = sizeof(ros_message->chg_overcurrent_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hw_major
  {
    size_t item_size = sizeof(ros_message->hw_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hw_minor
  {
    size_t item_size = sizeof(ros_message->hw_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fw_major
  {
    size_t item_size = sizeof(ros_message->fw_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fw_minor
  {
    size_t item_size = sizeof(ros_message->fw_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fw_patch
  {
    size_t item_size = sizeof(ros_message->fw_patch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rec_fw_major
  {
    size_t item_size = sizeof(ros_message->rec_fw_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rec_fw_minor
  {
    size_t item_size = sizeof(ros_message->rec_fw_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bl_major
  {
    size_t item_size = sizeof(ros_message->bl_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bl_minor
  {
    size_t item_size = sizeof(ros_message->bl_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_enabled
  {
    size_t item_size = sizeof(ros_message->status_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_current_limitation
  {
    size_t item_size = sizeof(ros_message->status_current_limitation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_switch_off_warn1
  {
    size_t item_size = sizeof(ros_message->status_switch_off_warn1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_switch_off_warn2
  {
    size_t item_size = sizeof(ros_message->status_switch_off_warn2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_fully_discharged
  {
    size_t item_size = sizeof(ros_message->status_fully_discharged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_nearly_discharged
  {
    size_t item_size = sizeof(ros_message->status_nearly_discharged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_chargefet_on
  {
    size_t item_size = sizeof(ros_message->status_chargefet_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_dischargefet_on
  {
    size_t item_size = sizeof(ros_message->status_dischargefet_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_discharging
  {
    size_t item_size = sizeof(ros_message->status_discharging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_fully_charged
  {
    size_t item_size = sizeof(ros_message->status_fully_charged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_charging
  {
    size_t item_size = sizeof(ros_message->status_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_temp_charging_err
  {
    size_t item_size = sizeof(ros_message->status_temp_charging_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_cell_over_voltage
  {
    size_t item_size = sizeof(ros_message->status_cell_over_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_cell_under_voltage
  {
    size_t item_size = sizeof(ros_message->status_cell_under_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_charge_over_current
  {
    size_t item_size = sizeof(ros_message->status_charge_over_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_shortcircuit
  {
    size_t item_size = sizeof(ros_message->status_shortcircuit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_discharge_over_current
  {
    size_t item_size = sizeof(ros_message->status_discharge_over_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_temp_discharging_err
  {
    size_t item_size = sizeof(ros_message->status_temp_discharging_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_charger_detected
  {
    size_t item_size = sizeof(ros_message->status_charger_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name last_battery_msg_time
  {
    size_t item_size = sizeof(ros_message->last_battery_msg_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BMSData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mir_msgs__msg__BMSData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t max_serialized_size_mir_msgs__msg__BMSData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: pack_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: charge_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: discharge_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: state_of_charge
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: remaining_time_to_full_charge
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: remaining_capacity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: state_of_health
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cell_voltage
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bmz_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: full_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: full_capacity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temperature2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temperature3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cycle_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dsg_overcurrent_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: chg_overcurrent_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hw_major
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hw_minor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fw_major
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fw_minor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fw_patch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rec_fw_major
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rec_fw_minor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bl_major
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bl_minor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_current_limitation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_switch_off_warn1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_switch_off_warn2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_fully_discharged
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_nearly_discharged
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_chargefet_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_dischargefet_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_discharging
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_fully_charged
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_charging
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_temp_charging_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_cell_over_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_cell_under_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_charge_over_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_shortcircuit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_discharge_over_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_temp_discharging_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_charger_detected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: last_battery_msg_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mir_msgs__msg__BMSData;
    is_plain =
      (
      offsetof(DataType, last_battery_msg_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BMSData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mir_msgs__msg__BMSData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BMSData = {
  "mir_msgs::msg",
  "BMSData",
  _BMSData__cdr_serialize,
  _BMSData__cdr_deserialize,
  _BMSData__get_serialized_size,
  _BMSData__max_serialized_size
};

static rosidl_message_type_support_t _BMSData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BMSData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, BMSData)() {
  return &_BMSData__type_support;
}

#if defined(__cplusplus)
}
#endif
