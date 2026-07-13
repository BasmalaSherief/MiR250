// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/BrakeState.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/brake_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `state_string`
#include "rosidl_runtime_c/string_functions.h"

bool
mir_msgs__msg__BrakeState__init(mir_msgs__msg__BrakeState * msg)
{
  if (!msg) {
    return false;
  }
  // state_string
  if (!rosidl_runtime_c__String__init(&msg->state_string)) {
    mir_msgs__msg__BrakeState__fini(msg);
    return false;
  }
  // state
  // braked
  return true;
}

void
mir_msgs__msg__BrakeState__fini(mir_msgs__msg__BrakeState * msg)
{
  if (!msg) {
    return;
  }
  // state_string
  rosidl_runtime_c__String__fini(&msg->state_string);
  // state
  // braked
}

bool
mir_msgs__msg__BrakeState__are_equal(const mir_msgs__msg__BrakeState * lhs, const mir_msgs__msg__BrakeState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state_string
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state_string), &(rhs->state_string)))
  {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // braked
  if (lhs->braked != rhs->braked) {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__BrakeState__copy(
  const mir_msgs__msg__BrakeState * input,
  mir_msgs__msg__BrakeState * output)
{
  if (!input || !output) {
    return false;
  }
  // state_string
  if (!rosidl_runtime_c__String__copy(
      &(input->state_string), &(output->state_string)))
  {
    return false;
  }
  // state
  output->state = input->state;
  // braked
  output->braked = input->braked;
  return true;
}

mir_msgs__msg__BrakeState *
mir_msgs__msg__BrakeState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__BrakeState * msg = (mir_msgs__msg__BrakeState *)allocator.allocate(sizeof(mir_msgs__msg__BrakeState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__BrakeState));
  bool success = mir_msgs__msg__BrakeState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__BrakeState__destroy(mir_msgs__msg__BrakeState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__BrakeState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__BrakeState__Sequence__init(mir_msgs__msg__BrakeState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__BrakeState * data = NULL;

  if (size) {
    data = (mir_msgs__msg__BrakeState *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__BrakeState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__BrakeState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__BrakeState__fini(&data[i - 1]);
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
mir_msgs__msg__BrakeState__Sequence__fini(mir_msgs__msg__BrakeState__Sequence * array)
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
      mir_msgs__msg__BrakeState__fini(&array->data[i]);
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

mir_msgs__msg__BrakeState__Sequence *
mir_msgs__msg__BrakeState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__BrakeState__Sequence * array = (mir_msgs__msg__BrakeState__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__BrakeState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__BrakeState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__BrakeState__Sequence__destroy(mir_msgs__msg__BrakeState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__BrakeState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__BrakeState__Sequence__are_equal(const mir_msgs__msg__BrakeState__Sequence * lhs, const mir_msgs__msg__BrakeState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__BrakeState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__BrakeState__Sequence__copy(
  const mir_msgs__msg__BrakeState__Sequence * input,
  mir_msgs__msg__BrakeState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__BrakeState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__BrakeState * data =
      (mir_msgs__msg__BrakeState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__BrakeState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__BrakeState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__BrakeState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
