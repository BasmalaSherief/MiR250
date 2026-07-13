// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sdc21x0:msg/Encoders.idl
// generated code does not contain a copyright notice
#include "sdc21x0/msg/detail/encoders__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sdc21x0__msg__Encoders__init(sdc21x0__msg__Encoders * msg)
{
  if (!msg) {
    return false;
  }
  // time_delta
  // left_wheel
  // right_wheel
  return true;
}

void
sdc21x0__msg__Encoders__fini(sdc21x0__msg__Encoders * msg)
{
  if (!msg) {
    return;
  }
  // time_delta
  // left_wheel
  // right_wheel
}

bool
sdc21x0__msg__Encoders__are_equal(const sdc21x0__msg__Encoders * lhs, const sdc21x0__msg__Encoders * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_delta
  if (lhs->time_delta != rhs->time_delta) {
    return false;
  }
  // left_wheel
  if (lhs->left_wheel != rhs->left_wheel) {
    return false;
  }
  // right_wheel
  if (lhs->right_wheel != rhs->right_wheel) {
    return false;
  }
  return true;
}

bool
sdc21x0__msg__Encoders__copy(
  const sdc21x0__msg__Encoders * input,
  sdc21x0__msg__Encoders * output)
{
  if (!input || !output) {
    return false;
  }
  // time_delta
  output->time_delta = input->time_delta;
  // left_wheel
  output->left_wheel = input->left_wheel;
  // right_wheel
  output->right_wheel = input->right_wheel;
  return true;
}

sdc21x0__msg__Encoders *
sdc21x0__msg__Encoders__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdc21x0__msg__Encoders * msg = (sdc21x0__msg__Encoders *)allocator.allocate(sizeof(sdc21x0__msg__Encoders), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sdc21x0__msg__Encoders));
  bool success = sdc21x0__msg__Encoders__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sdc21x0__msg__Encoders__destroy(sdc21x0__msg__Encoders * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sdc21x0__msg__Encoders__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sdc21x0__msg__Encoders__Sequence__init(sdc21x0__msg__Encoders__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdc21x0__msg__Encoders * data = NULL;

  if (size) {
    data = (sdc21x0__msg__Encoders *)allocator.zero_allocate(size, sizeof(sdc21x0__msg__Encoders), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sdc21x0__msg__Encoders__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sdc21x0__msg__Encoders__fini(&data[i - 1]);
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
sdc21x0__msg__Encoders__Sequence__fini(sdc21x0__msg__Encoders__Sequence * array)
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
      sdc21x0__msg__Encoders__fini(&array->data[i]);
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

sdc21x0__msg__Encoders__Sequence *
sdc21x0__msg__Encoders__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdc21x0__msg__Encoders__Sequence * array = (sdc21x0__msg__Encoders__Sequence *)allocator.allocate(sizeof(sdc21x0__msg__Encoders__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sdc21x0__msg__Encoders__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sdc21x0__msg__Encoders__Sequence__destroy(sdc21x0__msg__Encoders__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sdc21x0__msg__Encoders__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sdc21x0__msg__Encoders__Sequence__are_equal(const sdc21x0__msg__Encoders__Sequence * lhs, const sdc21x0__msg__Encoders__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sdc21x0__msg__Encoders__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sdc21x0__msg__Encoders__Sequence__copy(
  const sdc21x0__msg__Encoders__Sequence * input,
  sdc21x0__msg__Encoders__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sdc21x0__msg__Encoders);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sdc21x0__msg__Encoders * data =
      (sdc21x0__msg__Encoders *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sdc21x0__msg__Encoders__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sdc21x0__msg__Encoders__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sdc21x0__msg__Encoders__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
