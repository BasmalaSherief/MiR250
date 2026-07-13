// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sdc21x0:msg/StampedEncoders.idl
// generated code does not contain a copyright notice
#include "sdc21x0/msg/detail/stamped_encoders__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `encoders`
#include "sdc21x0/msg/detail/encoders__functions.h"

bool
sdc21x0__msg__StampedEncoders__init(sdc21x0__msg__StampedEncoders * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sdc21x0__msg__StampedEncoders__fini(msg);
    return false;
  }
  // encoders
  if (!sdc21x0__msg__Encoders__init(&msg->encoders)) {
    sdc21x0__msg__StampedEncoders__fini(msg);
    return false;
  }
  return true;
}

void
sdc21x0__msg__StampedEncoders__fini(sdc21x0__msg__StampedEncoders * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // encoders
  sdc21x0__msg__Encoders__fini(&msg->encoders);
}

bool
sdc21x0__msg__StampedEncoders__are_equal(const sdc21x0__msg__StampedEncoders * lhs, const sdc21x0__msg__StampedEncoders * rhs)
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
  // encoders
  if (!sdc21x0__msg__Encoders__are_equal(
      &(lhs->encoders), &(rhs->encoders)))
  {
    return false;
  }
  return true;
}

bool
sdc21x0__msg__StampedEncoders__copy(
  const sdc21x0__msg__StampedEncoders * input,
  sdc21x0__msg__StampedEncoders * output)
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
  // encoders
  if (!sdc21x0__msg__Encoders__copy(
      &(input->encoders), &(output->encoders)))
  {
    return false;
  }
  return true;
}

sdc21x0__msg__StampedEncoders *
sdc21x0__msg__StampedEncoders__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdc21x0__msg__StampedEncoders * msg = (sdc21x0__msg__StampedEncoders *)allocator.allocate(sizeof(sdc21x0__msg__StampedEncoders), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sdc21x0__msg__StampedEncoders));
  bool success = sdc21x0__msg__StampedEncoders__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sdc21x0__msg__StampedEncoders__destroy(sdc21x0__msg__StampedEncoders * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sdc21x0__msg__StampedEncoders__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sdc21x0__msg__StampedEncoders__Sequence__init(sdc21x0__msg__StampedEncoders__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdc21x0__msg__StampedEncoders * data = NULL;

  if (size) {
    data = (sdc21x0__msg__StampedEncoders *)allocator.zero_allocate(size, sizeof(sdc21x0__msg__StampedEncoders), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sdc21x0__msg__StampedEncoders__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sdc21x0__msg__StampedEncoders__fini(&data[i - 1]);
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
sdc21x0__msg__StampedEncoders__Sequence__fini(sdc21x0__msg__StampedEncoders__Sequence * array)
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
      sdc21x0__msg__StampedEncoders__fini(&array->data[i]);
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

sdc21x0__msg__StampedEncoders__Sequence *
sdc21x0__msg__StampedEncoders__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdc21x0__msg__StampedEncoders__Sequence * array = (sdc21x0__msg__StampedEncoders__Sequence *)allocator.allocate(sizeof(sdc21x0__msg__StampedEncoders__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sdc21x0__msg__StampedEncoders__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sdc21x0__msg__StampedEncoders__Sequence__destroy(sdc21x0__msg__StampedEncoders__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sdc21x0__msg__StampedEncoders__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sdc21x0__msg__StampedEncoders__Sequence__are_equal(const sdc21x0__msg__StampedEncoders__Sequence * lhs, const sdc21x0__msg__StampedEncoders__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sdc21x0__msg__StampedEncoders__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sdc21x0__msg__StampedEncoders__Sequence__copy(
  const sdc21x0__msg__StampedEncoders__Sequence * input,
  sdc21x0__msg__StampedEncoders__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sdc21x0__msg__StampedEncoders);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sdc21x0__msg__StampedEncoders * data =
      (sdc21x0__msg__StampedEncoders *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sdc21x0__msg__StampedEncoders__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sdc21x0__msg__StampedEncoders__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sdc21x0__msg__StampedEncoders__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
