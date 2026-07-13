// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/SafetyStatus.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/safety_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mir_msgs__msg__SafetyStatus__init(mir_msgs__msg__SafetyStatus * msg)
{
  if (!msg) {
    return false;
  }
  // is_connected
  // is_firmware_ok
  // firmware_version
  // in_protective_stop
  // in_emergency_stop
  // sto_feedback
  // is_restart_required
  // is_safety_muted
  // max_lin_speed
  // max_rot_speed
  // mute_mask
  // partial_mute_mask
  // is_limited_speed_active
  // is_lifter_down
  // in_sleep_mode
  // in_manual_mode
  // is_manual_mode_restart_required
  return true;
}

void
mir_msgs__msg__SafetyStatus__fini(mir_msgs__msg__SafetyStatus * msg)
{
  if (!msg) {
    return;
  }
  // is_connected
  // is_firmware_ok
  // firmware_version
  // in_protective_stop
  // in_emergency_stop
  // sto_feedback
  // is_restart_required
  // is_safety_muted
  // max_lin_speed
  // max_rot_speed
  // mute_mask
  // partial_mute_mask
  // is_limited_speed_active
  // is_lifter_down
  // in_sleep_mode
  // in_manual_mode
  // is_manual_mode_restart_required
}

bool
mir_msgs__msg__SafetyStatus__are_equal(const mir_msgs__msg__SafetyStatus * lhs, const mir_msgs__msg__SafetyStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_connected
  if (lhs->is_connected != rhs->is_connected) {
    return false;
  }
  // is_firmware_ok
  if (lhs->is_firmware_ok != rhs->is_firmware_ok) {
    return false;
  }
  // firmware_version
  if (lhs->firmware_version != rhs->firmware_version) {
    return false;
  }
  // in_protective_stop
  if (lhs->in_protective_stop != rhs->in_protective_stop) {
    return false;
  }
  // in_emergency_stop
  if (lhs->in_emergency_stop != rhs->in_emergency_stop) {
    return false;
  }
  // sto_feedback
  if (lhs->sto_feedback != rhs->sto_feedback) {
    return false;
  }
  // is_restart_required
  if (lhs->is_restart_required != rhs->is_restart_required) {
    return false;
  }
  // is_safety_muted
  if (lhs->is_safety_muted != rhs->is_safety_muted) {
    return false;
  }
  // max_lin_speed
  if (lhs->max_lin_speed != rhs->max_lin_speed) {
    return false;
  }
  // max_rot_speed
  if (lhs->max_rot_speed != rhs->max_rot_speed) {
    return false;
  }
  // mute_mask
  if (lhs->mute_mask != rhs->mute_mask) {
    return false;
  }
  // partial_mute_mask
  if (lhs->partial_mute_mask != rhs->partial_mute_mask) {
    return false;
  }
  // is_limited_speed_active
  if (lhs->is_limited_speed_active != rhs->is_limited_speed_active) {
    return false;
  }
  // is_lifter_down
  if (lhs->is_lifter_down != rhs->is_lifter_down) {
    return false;
  }
  // in_sleep_mode
  if (lhs->in_sleep_mode != rhs->in_sleep_mode) {
    return false;
  }
  // in_manual_mode
  if (lhs->in_manual_mode != rhs->in_manual_mode) {
    return false;
  }
  // is_manual_mode_restart_required
  if (lhs->is_manual_mode_restart_required != rhs->is_manual_mode_restart_required) {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__SafetyStatus__copy(
  const mir_msgs__msg__SafetyStatus * input,
  mir_msgs__msg__SafetyStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // is_connected
  output->is_connected = input->is_connected;
  // is_firmware_ok
  output->is_firmware_ok = input->is_firmware_ok;
  // firmware_version
  output->firmware_version = input->firmware_version;
  // in_protective_stop
  output->in_protective_stop = input->in_protective_stop;
  // in_emergency_stop
  output->in_emergency_stop = input->in_emergency_stop;
  // sto_feedback
  output->sto_feedback = input->sto_feedback;
  // is_restart_required
  output->is_restart_required = input->is_restart_required;
  // is_safety_muted
  output->is_safety_muted = input->is_safety_muted;
  // max_lin_speed
  output->max_lin_speed = input->max_lin_speed;
  // max_rot_speed
  output->max_rot_speed = input->max_rot_speed;
  // mute_mask
  output->mute_mask = input->mute_mask;
  // partial_mute_mask
  output->partial_mute_mask = input->partial_mute_mask;
  // is_limited_speed_active
  output->is_limited_speed_active = input->is_limited_speed_active;
  // is_lifter_down
  output->is_lifter_down = input->is_lifter_down;
  // in_sleep_mode
  output->in_sleep_mode = input->in_sleep_mode;
  // in_manual_mode
  output->in_manual_mode = input->in_manual_mode;
  // is_manual_mode_restart_required
  output->is_manual_mode_restart_required = input->is_manual_mode_restart_required;
  return true;
}

mir_msgs__msg__SafetyStatus *
mir_msgs__msg__SafetyStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__SafetyStatus * msg = (mir_msgs__msg__SafetyStatus *)allocator.allocate(sizeof(mir_msgs__msg__SafetyStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__SafetyStatus));
  bool success = mir_msgs__msg__SafetyStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__SafetyStatus__destroy(mir_msgs__msg__SafetyStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__SafetyStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__SafetyStatus__Sequence__init(mir_msgs__msg__SafetyStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__SafetyStatus * data = NULL;

  if (size) {
    data = (mir_msgs__msg__SafetyStatus *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__SafetyStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__SafetyStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__SafetyStatus__fini(&data[i - 1]);
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
mir_msgs__msg__SafetyStatus__Sequence__fini(mir_msgs__msg__SafetyStatus__Sequence * array)
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
      mir_msgs__msg__SafetyStatus__fini(&array->data[i]);
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

mir_msgs__msg__SafetyStatus__Sequence *
mir_msgs__msg__SafetyStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__SafetyStatus__Sequence * array = (mir_msgs__msg__SafetyStatus__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__SafetyStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__SafetyStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__SafetyStatus__Sequence__destroy(mir_msgs__msg__SafetyStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__SafetyStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__SafetyStatus__Sequence__are_equal(const mir_msgs__msg__SafetyStatus__Sequence * lhs, const mir_msgs__msg__SafetyStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__SafetyStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__SafetyStatus__Sequence__copy(
  const mir_msgs__msg__SafetyStatus__Sequence * input,
  mir_msgs__msg__SafetyStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__SafetyStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__SafetyStatus * data =
      (mir_msgs__msg__SafetyStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__SafetyStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__SafetyStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__SafetyStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
