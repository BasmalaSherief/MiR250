// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/MirExtra.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/mir_extra__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mir_msgs__msg__MirExtra__init(mir_msgs__msg__MirExtra * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mir_msgs__msg__MirExtra__fini(msg);
    return false;
  }
  // time_delta
  // r_rpm
  // l_rpm
  // vel
  // ang
  return true;
}

void
mir_msgs__msg__MirExtra__fini(mir_msgs__msg__MirExtra * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // time_delta
  // r_rpm
  // l_rpm
  // vel
  // ang
}

bool
mir_msgs__msg__MirExtra__are_equal(const mir_msgs__msg__MirExtra * lhs, const mir_msgs__msg__MirExtra * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // time_delta
  if (lhs->time_delta != rhs->time_delta) {
    return false;
  }
  // r_rpm
  if (lhs->r_rpm != rhs->r_rpm) {
    return false;
  }
  // l_rpm
  if (lhs->l_rpm != rhs->l_rpm) {
    return false;
  }
  // vel
  if (lhs->vel != rhs->vel) {
    return false;
  }
  // ang
  if (lhs->ang != rhs->ang) {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__MirExtra__copy(
  const mir_msgs__msg__MirExtra * input,
  mir_msgs__msg__MirExtra * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // time_delta
  output->time_delta = input->time_delta;
  // r_rpm
  output->r_rpm = input->r_rpm;
  // l_rpm
  output->l_rpm = input->l_rpm;
  // vel
  output->vel = input->vel;
  // ang
  output->ang = input->ang;
  return true;
}

mir_msgs__msg__MirExtra *
mir_msgs__msg__MirExtra__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__MirExtra * msg = (mir_msgs__msg__MirExtra *)allocator.allocate(sizeof(mir_msgs__msg__MirExtra), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__MirExtra));
  bool success = mir_msgs__msg__MirExtra__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__MirExtra__destroy(mir_msgs__msg__MirExtra * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__MirExtra__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__MirExtra__Sequence__init(mir_msgs__msg__MirExtra__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__MirExtra * data = NULL;

  if (size) {
    data = (mir_msgs__msg__MirExtra *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__MirExtra), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__MirExtra__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__MirExtra__fini(&data[i - 1]);
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
mir_msgs__msg__MirExtra__Sequence__fini(mir_msgs__msg__MirExtra__Sequence * array)
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
      mir_msgs__msg__MirExtra__fini(&array->data[i]);
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

mir_msgs__msg__MirExtra__Sequence *
mir_msgs__msg__MirExtra__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__MirExtra__Sequence * array = (mir_msgs__msg__MirExtra__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__MirExtra__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__MirExtra__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__MirExtra__Sequence__destroy(mir_msgs__msg__MirExtra__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__MirExtra__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__MirExtra__Sequence__are_equal(const mir_msgs__msg__MirExtra__Sequence * lhs, const mir_msgs__msg__MirExtra__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__MirExtra__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__MirExtra__Sequence__copy(
  const mir_msgs__msg__MirExtra__Sequence * input,
  mir_msgs__msg__MirExtra__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__MirExtra);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__MirExtra * data =
      (mir_msgs__msg__MirExtra *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__MirExtra__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__MirExtra__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__MirExtra__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
