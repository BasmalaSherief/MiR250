// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/ChargingState.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/charging_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mir_msgs__msg__ChargingState__init(mir_msgs__msg__ChargingState * msg)
{
  if (!msg) {
    return false;
  }
  // charging_relay
  // charging_current
  // charging_current_raw
  // last_time_current
  // charging_voltage
  // charging_voltage_raw
  // is_voltage_low
  // last_time_voltage
  return true;
}

void
mir_msgs__msg__ChargingState__fini(mir_msgs__msg__ChargingState * msg)
{
  if (!msg) {
    return;
  }
  // charging_relay
  // charging_current
  // charging_current_raw
  // last_time_current
  // charging_voltage
  // charging_voltage_raw
  // is_voltage_low
  // last_time_voltage
}

bool
mir_msgs__msg__ChargingState__are_equal(const mir_msgs__msg__ChargingState * lhs, const mir_msgs__msg__ChargingState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // charging_relay
  if (lhs->charging_relay != rhs->charging_relay) {
    return false;
  }
  // charging_current
  if (lhs->charging_current != rhs->charging_current) {
    return false;
  }
  // charging_current_raw
  if (lhs->charging_current_raw != rhs->charging_current_raw) {
    return false;
  }
  // last_time_current
  if (lhs->last_time_current != rhs->last_time_current) {
    return false;
  }
  // charging_voltage
  if (lhs->charging_voltage != rhs->charging_voltage) {
    return false;
  }
  // charging_voltage_raw
  if (lhs->charging_voltage_raw != rhs->charging_voltage_raw) {
    return false;
  }
  // is_voltage_low
  if (lhs->is_voltage_low != rhs->is_voltage_low) {
    return false;
  }
  // last_time_voltage
  if (lhs->last_time_voltage != rhs->last_time_voltage) {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__ChargingState__copy(
  const mir_msgs__msg__ChargingState * input,
  mir_msgs__msg__ChargingState * output)
{
  if (!input || !output) {
    return false;
  }
  // charging_relay
  output->charging_relay = input->charging_relay;
  // charging_current
  output->charging_current = input->charging_current;
  // charging_current_raw
  output->charging_current_raw = input->charging_current_raw;
  // last_time_current
  output->last_time_current = input->last_time_current;
  // charging_voltage
  output->charging_voltage = input->charging_voltage;
  // charging_voltage_raw
  output->charging_voltage_raw = input->charging_voltage_raw;
  // is_voltage_low
  output->is_voltage_low = input->is_voltage_low;
  // last_time_voltage
  output->last_time_voltage = input->last_time_voltage;
  return true;
}

mir_msgs__msg__ChargingState *
mir_msgs__msg__ChargingState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__ChargingState * msg = (mir_msgs__msg__ChargingState *)allocator.allocate(sizeof(mir_msgs__msg__ChargingState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__ChargingState));
  bool success = mir_msgs__msg__ChargingState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__ChargingState__destroy(mir_msgs__msg__ChargingState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__ChargingState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__ChargingState__Sequence__init(mir_msgs__msg__ChargingState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__ChargingState * data = NULL;

  if (size) {
    data = (mir_msgs__msg__ChargingState *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__ChargingState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__ChargingState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__ChargingState__fini(&data[i - 1]);
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
mir_msgs__msg__ChargingState__Sequence__fini(mir_msgs__msg__ChargingState__Sequence * array)
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
      mir_msgs__msg__ChargingState__fini(&array->data[i]);
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

mir_msgs__msg__ChargingState__Sequence *
mir_msgs__msg__ChargingState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__ChargingState__Sequence * array = (mir_msgs__msg__ChargingState__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__ChargingState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__ChargingState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__ChargingState__Sequence__destroy(mir_msgs__msg__ChargingState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__ChargingState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__ChargingState__Sequence__are_equal(const mir_msgs__msg__ChargingState__Sequence * lhs, const mir_msgs__msg__ChargingState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__ChargingState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__ChargingState__Sequence__copy(
  const mir_msgs__msg__ChargingState__Sequence * input,
  mir_msgs__msg__ChargingState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__ChargingState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__ChargingState * data =
      (mir_msgs__msg__ChargingState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__ChargingState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__ChargingState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__ChargingState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
