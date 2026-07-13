// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/HookExtendedStatus.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/hook_extended_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `brake`
#include "mir_msgs/msg/detail/brake_state__functions.h"
// Member `gripper`
#include "mir_msgs/msg/detail/gripper_state__functions.h"
// Member `height`
#include "mir_msgs/msg/detail/height_state__functions.h"
// Member `qr_marker_name`
#include "rosidl_runtime_c/string_functions.h"

bool
mir_msgs__msg__HookExtendedStatus__init(mir_msgs__msg__HookExtendedStatus * msg)
{
  if (!msg) {
    return false;
  }
  // available
  // brake
  if (!mir_msgs__msg__BrakeState__init(&msg->brake)) {
    mir_msgs__msg__HookExtendedStatus__fini(msg);
    return false;
  }
  // gripper
  if (!mir_msgs__msg__GripperState__init(&msg->gripper)) {
    mir_msgs__msg__HookExtendedStatus__fini(msg);
    return false;
  }
  // height
  if (!mir_msgs__msg__HeightState__init(&msg->height)) {
    mir_msgs__msg__HookExtendedStatus__fini(msg);
    return false;
  }
  // angle
  // qr_marker_name
  if (!rosidl_runtime_c__String__init(&msg->qr_marker_name)) {
    mir_msgs__msg__HookExtendedStatus__fini(msg);
    return false;
  }
  return true;
}

void
mir_msgs__msg__HookExtendedStatus__fini(mir_msgs__msg__HookExtendedStatus * msg)
{
  if (!msg) {
    return;
  }
  // available
  // brake
  mir_msgs__msg__BrakeState__fini(&msg->brake);
  // gripper
  mir_msgs__msg__GripperState__fini(&msg->gripper);
  // height
  mir_msgs__msg__HeightState__fini(&msg->height);
  // angle
  // qr_marker_name
  rosidl_runtime_c__String__fini(&msg->qr_marker_name);
}

bool
mir_msgs__msg__HookExtendedStatus__are_equal(const mir_msgs__msg__HookExtendedStatus * lhs, const mir_msgs__msg__HookExtendedStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // available
  if (lhs->available != rhs->available) {
    return false;
  }
  // brake
  if (!mir_msgs__msg__BrakeState__are_equal(
      &(lhs->brake), &(rhs->brake)))
  {
    return false;
  }
  // gripper
  if (!mir_msgs__msg__GripperState__are_equal(
      &(lhs->gripper), &(rhs->gripper)))
  {
    return false;
  }
  // height
  if (!mir_msgs__msg__HeightState__are_equal(
      &(lhs->height), &(rhs->height)))
  {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // qr_marker_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->qr_marker_name), &(rhs->qr_marker_name)))
  {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__HookExtendedStatus__copy(
  const mir_msgs__msg__HookExtendedStatus * input,
  mir_msgs__msg__HookExtendedStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // available
  output->available = input->available;
  // brake
  if (!mir_msgs__msg__BrakeState__copy(
      &(input->brake), &(output->brake)))
  {
    return false;
  }
  // gripper
  if (!mir_msgs__msg__GripperState__copy(
      &(input->gripper), &(output->gripper)))
  {
    return false;
  }
  // height
  if (!mir_msgs__msg__HeightState__copy(
      &(input->height), &(output->height)))
  {
    return false;
  }
  // angle
  output->angle = input->angle;
  // qr_marker_name
  if (!rosidl_runtime_c__String__copy(
      &(input->qr_marker_name), &(output->qr_marker_name)))
  {
    return false;
  }
  return true;
}

mir_msgs__msg__HookExtendedStatus *
mir_msgs__msg__HookExtendedStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__HookExtendedStatus * msg = (mir_msgs__msg__HookExtendedStatus *)allocator.allocate(sizeof(mir_msgs__msg__HookExtendedStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__HookExtendedStatus));
  bool success = mir_msgs__msg__HookExtendedStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__HookExtendedStatus__destroy(mir_msgs__msg__HookExtendedStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__HookExtendedStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__HookExtendedStatus__Sequence__init(mir_msgs__msg__HookExtendedStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__HookExtendedStatus * data = NULL;

  if (size) {
    data = (mir_msgs__msg__HookExtendedStatus *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__HookExtendedStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__HookExtendedStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__HookExtendedStatus__fini(&data[i - 1]);
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
mir_msgs__msg__HookExtendedStatus__Sequence__fini(mir_msgs__msg__HookExtendedStatus__Sequence * array)
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
      mir_msgs__msg__HookExtendedStatus__fini(&array->data[i]);
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

mir_msgs__msg__HookExtendedStatus__Sequence *
mir_msgs__msg__HookExtendedStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__HookExtendedStatus__Sequence * array = (mir_msgs__msg__HookExtendedStatus__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__HookExtendedStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__HookExtendedStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__HookExtendedStatus__Sequence__destroy(mir_msgs__msg__HookExtendedStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__HookExtendedStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__HookExtendedStatus__Sequence__are_equal(const mir_msgs__msg__HookExtendedStatus__Sequence * lhs, const mir_msgs__msg__HookExtendedStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__HookExtendedStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__HookExtendedStatus__Sequence__copy(
  const mir_msgs__msg__HookExtendedStatus__Sequence * input,
  mir_msgs__msg__HookExtendedStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__HookExtendedStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__HookExtendedStatus * data =
      (mir_msgs__msg__HookExtendedStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__HookExtendedStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__HookExtendedStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__HookExtendedStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
