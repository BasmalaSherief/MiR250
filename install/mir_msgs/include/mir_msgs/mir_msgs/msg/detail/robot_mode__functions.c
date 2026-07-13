// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/RobotMode.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/robot_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_mode_string`
#include "rosidl_runtime_c/string_functions.h"

bool
mir_msgs__msg__RobotMode__init(mir_msgs__msg__RobotMode * msg)
{
  if (!msg) {
    return false;
  }
  // robot_mode
  // robot_mode_string
  if (!rosidl_runtime_c__String__init(&msg->robot_mode_string)) {
    mir_msgs__msg__RobotMode__fini(msg);
    return false;
  }
  return true;
}

void
mir_msgs__msg__RobotMode__fini(mir_msgs__msg__RobotMode * msg)
{
  if (!msg) {
    return;
  }
  // robot_mode
  // robot_mode_string
  rosidl_runtime_c__String__fini(&msg->robot_mode_string);
}

bool
mir_msgs__msg__RobotMode__are_equal(const mir_msgs__msg__RobotMode * lhs, const mir_msgs__msg__RobotMode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_mode
  if (lhs->robot_mode != rhs->robot_mode) {
    return false;
  }
  // robot_mode_string
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_mode_string), &(rhs->robot_mode_string)))
  {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__RobotMode__copy(
  const mir_msgs__msg__RobotMode * input,
  mir_msgs__msg__RobotMode * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_mode
  output->robot_mode = input->robot_mode;
  // robot_mode_string
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_mode_string), &(output->robot_mode_string)))
  {
    return false;
  }
  return true;
}

mir_msgs__msg__RobotMode *
mir_msgs__msg__RobotMode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__RobotMode * msg = (mir_msgs__msg__RobotMode *)allocator.allocate(sizeof(mir_msgs__msg__RobotMode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__RobotMode));
  bool success = mir_msgs__msg__RobotMode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__RobotMode__destroy(mir_msgs__msg__RobotMode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__RobotMode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__RobotMode__Sequence__init(mir_msgs__msg__RobotMode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__RobotMode * data = NULL;

  if (size) {
    data = (mir_msgs__msg__RobotMode *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__RobotMode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__RobotMode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__RobotMode__fini(&data[i - 1]);
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
mir_msgs__msg__RobotMode__Sequence__fini(mir_msgs__msg__RobotMode__Sequence * array)
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
      mir_msgs__msg__RobotMode__fini(&array->data[i]);
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

mir_msgs__msg__RobotMode__Sequence *
mir_msgs__msg__RobotMode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__RobotMode__Sequence * array = (mir_msgs__msg__RobotMode__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__RobotMode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__RobotMode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__RobotMode__Sequence__destroy(mir_msgs__msg__RobotMode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__RobotMode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__RobotMode__Sequence__are_equal(const mir_msgs__msg__RobotMode__Sequence * lhs, const mir_msgs__msg__RobotMode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__RobotMode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__RobotMode__Sequence__copy(
  const mir_msgs__msg__RobotMode__Sequence * input,
  mir_msgs__msg__RobotMode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__RobotMode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__RobotMode * data =
      (mir_msgs__msg__RobotMode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__RobotMode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__RobotMode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__RobotMode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
