// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/BMSData.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/bms_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cell_voltage`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mir_msgs__msg__BMSData__init(mir_msgs__msg__BMSData * msg)
{
  if (!msg) {
    return false;
  }
  // pack_voltage
  // charge_current
  // discharge_current
  // state_of_charge
  // remaining_time_to_full_charge
  // remaining_capacity
  // state_of_health
  // status_flags
  // temperature
  // cell_voltage
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->cell_voltage, 0)) {
    mir_msgs__msg__BMSData__fini(msg);
    return false;
  }
  // bmz_flag
  // full_voltage
  // full_capacity
  // temperature2
  // temperature3
  // cycle_count
  // dsg_overcurrent_counter
  // chg_overcurrent_counter
  // hw_major
  // hw_minor
  // fw_major
  // fw_minor
  // fw_patch
  // rec_fw_major
  // rec_fw_minor
  // bl_major
  // bl_minor
  // status_enabled
  // status_current_limitation
  // status_switch_off_warn1
  // status_switch_off_warn2
  // status_fully_discharged
  // status_nearly_discharged
  // status_chargefet_on
  // status_dischargefet_on
  // status_discharging
  // status_fully_charged
  // status_charging
  // status_temp_charging_err
  // status_cell_over_voltage
  // status_cell_under_voltage
  // status_charge_over_current
  // status_shortcircuit
  // status_discharge_over_current
  // status_temp_discharging_err
  // status_charger_detected
  // last_battery_msg_time
  return true;
}

void
mir_msgs__msg__BMSData__fini(mir_msgs__msg__BMSData * msg)
{
  if (!msg) {
    return;
  }
  // pack_voltage
  // charge_current
  // discharge_current
  // state_of_charge
  // remaining_time_to_full_charge
  // remaining_capacity
  // state_of_health
  // status_flags
  // temperature
  // cell_voltage
  rosidl_runtime_c__uint32__Sequence__fini(&msg->cell_voltage);
  // bmz_flag
  // full_voltage
  // full_capacity
  // temperature2
  // temperature3
  // cycle_count
  // dsg_overcurrent_counter
  // chg_overcurrent_counter
  // hw_major
  // hw_minor
  // fw_major
  // fw_minor
  // fw_patch
  // rec_fw_major
  // rec_fw_minor
  // bl_major
  // bl_minor
  // status_enabled
  // status_current_limitation
  // status_switch_off_warn1
  // status_switch_off_warn2
  // status_fully_discharged
  // status_nearly_discharged
  // status_chargefet_on
  // status_dischargefet_on
  // status_discharging
  // status_fully_charged
  // status_charging
  // status_temp_charging_err
  // status_cell_over_voltage
  // status_cell_under_voltage
  // status_charge_over_current
  // status_shortcircuit
  // status_discharge_over_current
  // status_temp_discharging_err
  // status_charger_detected
  // last_battery_msg_time
}

bool
mir_msgs__msg__BMSData__are_equal(const mir_msgs__msg__BMSData * lhs, const mir_msgs__msg__BMSData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pack_voltage
  if (lhs->pack_voltage != rhs->pack_voltage) {
    return false;
  }
  // charge_current
  if (lhs->charge_current != rhs->charge_current) {
    return false;
  }
  // discharge_current
  if (lhs->discharge_current != rhs->discharge_current) {
    return false;
  }
  // state_of_charge
  if (lhs->state_of_charge != rhs->state_of_charge) {
    return false;
  }
  // remaining_time_to_full_charge
  if (lhs->remaining_time_to_full_charge != rhs->remaining_time_to_full_charge) {
    return false;
  }
  // remaining_capacity
  if (lhs->remaining_capacity != rhs->remaining_capacity) {
    return false;
  }
  // state_of_health
  if (lhs->state_of_health != rhs->state_of_health) {
    return false;
  }
  // status_flags
  if (lhs->status_flags != rhs->status_flags) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // cell_voltage
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->cell_voltage), &(rhs->cell_voltage)))
  {
    return false;
  }
  // bmz_flag
  if (lhs->bmz_flag != rhs->bmz_flag) {
    return false;
  }
  // full_voltage
  if (lhs->full_voltage != rhs->full_voltage) {
    return false;
  }
  // full_capacity
  if (lhs->full_capacity != rhs->full_capacity) {
    return false;
  }
  // temperature2
  if (lhs->temperature2 != rhs->temperature2) {
    return false;
  }
  // temperature3
  if (lhs->temperature3 != rhs->temperature3) {
    return false;
  }
  // cycle_count
  if (lhs->cycle_count != rhs->cycle_count) {
    return false;
  }
  // dsg_overcurrent_counter
  if (lhs->dsg_overcurrent_counter != rhs->dsg_overcurrent_counter) {
    return false;
  }
  // chg_overcurrent_counter
  if (lhs->chg_overcurrent_counter != rhs->chg_overcurrent_counter) {
    return false;
  }
  // hw_major
  if (lhs->hw_major != rhs->hw_major) {
    return false;
  }
  // hw_minor
  if (lhs->hw_minor != rhs->hw_minor) {
    return false;
  }
  // fw_major
  if (lhs->fw_major != rhs->fw_major) {
    return false;
  }
  // fw_minor
  if (lhs->fw_minor != rhs->fw_minor) {
    return false;
  }
  // fw_patch
  if (lhs->fw_patch != rhs->fw_patch) {
    return false;
  }
  // rec_fw_major
  if (lhs->rec_fw_major != rhs->rec_fw_major) {
    return false;
  }
  // rec_fw_minor
  if (lhs->rec_fw_minor != rhs->rec_fw_minor) {
    return false;
  }
  // bl_major
  if (lhs->bl_major != rhs->bl_major) {
    return false;
  }
  // bl_minor
  if (lhs->bl_minor != rhs->bl_minor) {
    return false;
  }
  // status_enabled
  if (lhs->status_enabled != rhs->status_enabled) {
    return false;
  }
  // status_current_limitation
  if (lhs->status_current_limitation != rhs->status_current_limitation) {
    return false;
  }
  // status_switch_off_warn1
  if (lhs->status_switch_off_warn1 != rhs->status_switch_off_warn1) {
    return false;
  }
  // status_switch_off_warn2
  if (lhs->status_switch_off_warn2 != rhs->status_switch_off_warn2) {
    return false;
  }
  // status_fully_discharged
  if (lhs->status_fully_discharged != rhs->status_fully_discharged) {
    return false;
  }
  // status_nearly_discharged
  if (lhs->status_nearly_discharged != rhs->status_nearly_discharged) {
    return false;
  }
  // status_chargefet_on
  if (lhs->status_chargefet_on != rhs->status_chargefet_on) {
    return false;
  }
  // status_dischargefet_on
  if (lhs->status_dischargefet_on != rhs->status_dischargefet_on) {
    return false;
  }
  // status_discharging
  if (lhs->status_discharging != rhs->status_discharging) {
    return false;
  }
  // status_fully_charged
  if (lhs->status_fully_charged != rhs->status_fully_charged) {
    return false;
  }
  // status_charging
  if (lhs->status_charging != rhs->status_charging) {
    return false;
  }
  // status_temp_charging_err
  if (lhs->status_temp_charging_err != rhs->status_temp_charging_err) {
    return false;
  }
  // status_cell_over_voltage
  if (lhs->status_cell_over_voltage != rhs->status_cell_over_voltage) {
    return false;
  }
  // status_cell_under_voltage
  if (lhs->status_cell_under_voltage != rhs->status_cell_under_voltage) {
    return false;
  }
  // status_charge_over_current
  if (lhs->status_charge_over_current != rhs->status_charge_over_current) {
    return false;
  }
  // status_shortcircuit
  if (lhs->status_shortcircuit != rhs->status_shortcircuit) {
    return false;
  }
  // status_discharge_over_current
  if (lhs->status_discharge_over_current != rhs->status_discharge_over_current) {
    return false;
  }
  // status_temp_discharging_err
  if (lhs->status_temp_discharging_err != rhs->status_temp_discharging_err) {
    return false;
  }
  // status_charger_detected
  if (lhs->status_charger_detected != rhs->status_charger_detected) {
    return false;
  }
  // last_battery_msg_time
  if (lhs->last_battery_msg_time != rhs->last_battery_msg_time) {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__BMSData__copy(
  const mir_msgs__msg__BMSData * input,
  mir_msgs__msg__BMSData * output)
{
  if (!input || !output) {
    return false;
  }
  // pack_voltage
  output->pack_voltage = input->pack_voltage;
  // charge_current
  output->charge_current = input->charge_current;
  // discharge_current
  output->discharge_current = input->discharge_current;
  // state_of_charge
  output->state_of_charge = input->state_of_charge;
  // remaining_time_to_full_charge
  output->remaining_time_to_full_charge = input->remaining_time_to_full_charge;
  // remaining_capacity
  output->remaining_capacity = input->remaining_capacity;
  // state_of_health
  output->state_of_health = input->state_of_health;
  // status_flags
  output->status_flags = input->status_flags;
  // temperature
  output->temperature = input->temperature;
  // cell_voltage
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->cell_voltage), &(output->cell_voltage)))
  {
    return false;
  }
  // bmz_flag
  output->bmz_flag = input->bmz_flag;
  // full_voltage
  output->full_voltage = input->full_voltage;
  // full_capacity
  output->full_capacity = input->full_capacity;
  // temperature2
  output->temperature2 = input->temperature2;
  // temperature3
  output->temperature3 = input->temperature3;
  // cycle_count
  output->cycle_count = input->cycle_count;
  // dsg_overcurrent_counter
  output->dsg_overcurrent_counter = input->dsg_overcurrent_counter;
  // chg_overcurrent_counter
  output->chg_overcurrent_counter = input->chg_overcurrent_counter;
  // hw_major
  output->hw_major = input->hw_major;
  // hw_minor
  output->hw_minor = input->hw_minor;
  // fw_major
  output->fw_major = input->fw_major;
  // fw_minor
  output->fw_minor = input->fw_minor;
  // fw_patch
  output->fw_patch = input->fw_patch;
  // rec_fw_major
  output->rec_fw_major = input->rec_fw_major;
  // rec_fw_minor
  output->rec_fw_minor = input->rec_fw_minor;
  // bl_major
  output->bl_major = input->bl_major;
  // bl_minor
  output->bl_minor = input->bl_minor;
  // status_enabled
  output->status_enabled = input->status_enabled;
  // status_current_limitation
  output->status_current_limitation = input->status_current_limitation;
  // status_switch_off_warn1
  output->status_switch_off_warn1 = input->status_switch_off_warn1;
  // status_switch_off_warn2
  output->status_switch_off_warn2 = input->status_switch_off_warn2;
  // status_fully_discharged
  output->status_fully_discharged = input->status_fully_discharged;
  // status_nearly_discharged
  output->status_nearly_discharged = input->status_nearly_discharged;
  // status_chargefet_on
  output->status_chargefet_on = input->status_chargefet_on;
  // status_dischargefet_on
  output->status_dischargefet_on = input->status_dischargefet_on;
  // status_discharging
  output->status_discharging = input->status_discharging;
  // status_fully_charged
  output->status_fully_charged = input->status_fully_charged;
  // status_charging
  output->status_charging = input->status_charging;
  // status_temp_charging_err
  output->status_temp_charging_err = input->status_temp_charging_err;
  // status_cell_over_voltage
  output->status_cell_over_voltage = input->status_cell_over_voltage;
  // status_cell_under_voltage
  output->status_cell_under_voltage = input->status_cell_under_voltage;
  // status_charge_over_current
  output->status_charge_over_current = input->status_charge_over_current;
  // status_shortcircuit
  output->status_shortcircuit = input->status_shortcircuit;
  // status_discharge_over_current
  output->status_discharge_over_current = input->status_discharge_over_current;
  // status_temp_discharging_err
  output->status_temp_discharging_err = input->status_temp_discharging_err;
  // status_charger_detected
  output->status_charger_detected = input->status_charger_detected;
  // last_battery_msg_time
  output->last_battery_msg_time = input->last_battery_msg_time;
  return true;
}

mir_msgs__msg__BMSData *
mir_msgs__msg__BMSData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__BMSData * msg = (mir_msgs__msg__BMSData *)allocator.allocate(sizeof(mir_msgs__msg__BMSData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__BMSData));
  bool success = mir_msgs__msg__BMSData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__BMSData__destroy(mir_msgs__msg__BMSData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__BMSData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__BMSData__Sequence__init(mir_msgs__msg__BMSData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__BMSData * data = NULL;

  if (size) {
    data = (mir_msgs__msg__BMSData *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__BMSData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__BMSData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__BMSData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mir_msgs__msg__BMSData__Sequence__fini(mir_msgs__msg__BMSData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mir_msgs__msg__BMSData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mir_msgs__msg__BMSData__Sequence *
mir_msgs__msg__BMSData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__BMSData__Sequence * array = (mir_msgs__msg__BMSData__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__BMSData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__BMSData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__BMSData__Sequence__destroy(mir_msgs__msg__BMSData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__BMSData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__BMSData__Sequence__are_equal(const mir_msgs__msg__BMSData__Sequence * lhs, const mir_msgs__msg__BMSData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__BMSData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__BMSData__Sequence__copy(
  const mir_msgs__msg__BMSData__Sequence * input,
  mir_msgs__msg__BMSData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__BMSData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__BMSData * data =
      (mir_msgs__msg__BMSData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__BMSData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__BMSData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__BMSData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
