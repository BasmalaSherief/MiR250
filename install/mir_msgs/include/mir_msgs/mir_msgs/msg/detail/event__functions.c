// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/Event.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `area_guid`
// Member `area_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `polygon`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
mir_msgs__msg__Event__init(mir_msgs__msg__Event * msg)
{
  if (!msg) {
    return false;
  }
  // event_type
  // area_guid
  if (!rosidl_runtime_c__String__init(&msg->area_guid)) {
    mir_msgs__msg__Event__fini(msg);
    return false;
  }
  // area_name
  if (!rosidl_runtime_c__String__init(&msg->area_name)) {
    mir_msgs__msg__Event__fini(msg);
    return false;
  }
  // polygon
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->polygon, 0)) {
    mir_msgs__msg__Event__fini(msg);
    return false;
  }
  return true;
}

void
mir_msgs__msg__Event__fini(mir_msgs__msg__Event * msg)
{
  if (!msg) {
    return;
  }
  // event_type
  // area_guid
  rosidl_runtime_c__String__fini(&msg->area_guid);
  // area_name
  rosidl_runtime_c__String__fini(&msg->area_name);
  // polygon
  geometry_msgs__msg__Point__Sequence__fini(&msg->polygon);
}

bool
mir_msgs__msg__Event__are_equal(const mir_msgs__msg__Event * lhs, const mir_msgs__msg__Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // event_type
  if (lhs->event_type != rhs->event_type) {
    return false;
  }
  // area_guid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->area_guid), &(rhs->area_guid)))
  {
    return false;
  }
  // area_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->area_name), &(rhs->area_name)))
  {
    return false;
  }
  // polygon
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->polygon), &(rhs->polygon)))
  {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__Event__copy(
  const mir_msgs__msg__Event * input,
  mir_msgs__msg__Event * output)
{
  if (!input || !output) {
    return false;
  }
  // event_type
  output->event_type = input->event_type;
  // area_guid
  if (!rosidl_runtime_c__String__copy(
      &(input->area_guid), &(output->area_guid)))
  {
    return false;
  }
  // area_name
  if (!rosidl_runtime_c__String__copy(
      &(input->area_name), &(output->area_name)))
  {
    return false;
  }
  // polygon
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->polygon), &(output->polygon)))
  {
    return false;
  }
  return true;
}

mir_msgs__msg__Event *
mir_msgs__msg__Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__Event * msg = (mir_msgs__msg__Event *)allocator.allocate(sizeof(mir_msgs__msg__Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__Event));
  bool success = mir_msgs__msg__Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__Event__destroy(mir_msgs__msg__Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__Event__Sequence__init(mir_msgs__msg__Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__Event * data = NULL;

  if (size) {
    data = (mir_msgs__msg__Event *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__Event__fini(&data[i - 1]);
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
mir_msgs__msg__Event__Sequence__fini(mir_msgs__msg__Event__Sequence * array)
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
      mir_msgs__msg__Event__fini(&array->data[i]);
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

mir_msgs__msg__Event__Sequence *
mir_msgs__msg__Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__Event__Sequence * array = (mir_msgs__msg__Event__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__Event__Sequence__destroy(mir_msgs__msg__Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__Event__Sequence__are_equal(const mir_msgs__msg__Event__Sequence * lhs, const mir_msgs__msg__Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__Event__Sequence__copy(
  const mir_msgs__msg__Event__Sequence * input,
  mir_msgs__msg__Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__Event * data =
      (mir_msgs__msg__Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
