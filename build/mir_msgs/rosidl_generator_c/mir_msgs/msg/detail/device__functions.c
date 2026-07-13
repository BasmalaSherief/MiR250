// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/Device.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/device__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `serial`
#include "rosidl_runtime_c/string_functions.h"

bool
mir_msgs__msg__Device__init(mir_msgs__msg__Device * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    mir_msgs__msg__Device__fini(msg);
    return false;
  }
  // serial
  if (!rosidl_runtime_c__String__init(&msg->serial)) {
    mir_msgs__msg__Device__fini(msg);
    return false;
  }
  return true;
}

void
mir_msgs__msg__Device__fini(mir_msgs__msg__Device * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // serial
  rosidl_runtime_c__String__fini(&msg->serial);
}

bool
mir_msgs__msg__Device__are_equal(const mir_msgs__msg__Device * lhs, const mir_msgs__msg__Device * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // serial
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->serial), &(rhs->serial)))
  {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__Device__copy(
  const mir_msgs__msg__Device * input,
  mir_msgs__msg__Device * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // serial
  if (!rosidl_runtime_c__String__copy(
      &(input->serial), &(output->serial)))
  {
    return false;
  }
  return true;
}

mir_msgs__msg__Device *
mir_msgs__msg__Device__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__Device * msg = (mir_msgs__msg__Device *)allocator.allocate(sizeof(mir_msgs__msg__Device), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__Device));
  bool success = mir_msgs__msg__Device__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__Device__destroy(mir_msgs__msg__Device * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__Device__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__Device__Sequence__init(mir_msgs__msg__Device__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__Device * data = NULL;

  if (size) {
    data = (mir_msgs__msg__Device *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__Device), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__Device__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__Device__fini(&data[i - 1]);
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
mir_msgs__msg__Device__Sequence__fini(mir_msgs__msg__Device__Sequence * array)
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
      mir_msgs__msg__Device__fini(&array->data[i]);
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

mir_msgs__msg__Device__Sequence *
mir_msgs__msg__Device__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__Device__Sequence * array = (mir_msgs__msg__Device__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__Device__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__Device__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__Device__Sequence__destroy(mir_msgs__msg__Device__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__Device__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__Device__Sequence__are_equal(const mir_msgs__msg__Device__Sequence * lhs, const mir_msgs__msg__Device__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__Device__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__Device__Sequence__copy(
  const mir_msgs__msg__Device__Sequence * input,
  mir_msgs__msg__Device__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__Device);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__Device * data =
      (mir_msgs__msg__Device *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__Device__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__Device__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__Device__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
