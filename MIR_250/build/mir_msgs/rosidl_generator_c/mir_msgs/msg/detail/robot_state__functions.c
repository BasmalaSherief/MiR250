// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_state_string`
#include "rosidl_runtime_c/string_functions.h"

bool
mir_msgs__msg__RobotState__init(mir_msgs__msg__RobotState * msg)
{
  if (!msg) {
    return false;
  }
  // robot_state
  // robot_state_string
  if (!rosidl_runtime_c__String__init(&msg->robot_state_string)) {
    mir_msgs__msg__RobotState__fini(msg);
    return false;
  }
  return true;
}

void
mir_msgs__msg__RobotState__fini(mir_msgs__msg__RobotState * msg)
{
  if (!msg) {
    return;
  }
  // robot_state
  // robot_state_string
  rosidl_runtime_c__String__fini(&msg->robot_state_string);
}

bool
mir_msgs__msg__RobotState__are_equal(const mir_msgs__msg__RobotState * lhs, const mir_msgs__msg__RobotState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_state
  if (lhs->robot_state != rhs->robot_state) {
    return false;
  }
  // robot_state_string
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_state_string), &(rhs->robot_state_string)))
  {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__RobotState__copy(
  const mir_msgs__msg__RobotState * input,
  mir_msgs__msg__RobotState * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_state
  output->robot_state = input->robot_state;
  // robot_state_string
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_state_string), &(output->robot_state_string)))
  {
    return false;
  }
  return true;
}

mir_msgs__msg__RobotState *
mir_msgs__msg__RobotState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__RobotState * msg = (mir_msgs__msg__RobotState *)allocator.allocate(sizeof(mir_msgs__msg__RobotState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__RobotState));
  bool success = mir_msgs__msg__RobotState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__RobotState__destroy(mir_msgs__msg__RobotState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__RobotState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__RobotState__Sequence__init(mir_msgs__msg__RobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__RobotState * data = NULL;

  if (size) {
    data = (mir_msgs__msg__RobotState *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__RobotState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__RobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__RobotState__fini(&data[i - 1]);
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
mir_msgs__msg__RobotState__Sequence__fini(mir_msgs__msg__RobotState__Sequence * array)
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
      mir_msgs__msg__RobotState__fini(&array->data[i]);
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

mir_msgs__msg__RobotState__Sequence *
mir_msgs__msg__RobotState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__RobotState__Sequence * array = (mir_msgs__msg__RobotState__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__RobotState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__RobotState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__RobotState__Sequence__destroy(mir_msgs__msg__RobotState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__RobotState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__RobotState__Sequence__are_equal(const mir_msgs__msg__RobotState__Sequence * lhs, const mir_msgs__msg__RobotState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__RobotState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__RobotState__Sequence__copy(
  const mir_msgs__msg__RobotState__Sequence * input,
  mir_msgs__msg__RobotState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__RobotState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__RobotState * data =
      (mir_msgs__msg__RobotState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__RobotState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__RobotState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__RobotState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
