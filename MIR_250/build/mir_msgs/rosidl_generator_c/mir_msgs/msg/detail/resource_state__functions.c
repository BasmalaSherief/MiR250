// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/ResourceState.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/resource_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `assigned`
// Member `queue`
// Member `name`
// Member `guid`
#include "rosidl_runtime_c/string_functions.h"
// Member `collision_point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
mir_msgs__msg__ResourceState__init(mir_msgs__msg__ResourceState * msg)
{
  if (!msg) {
    return false;
  }
  // assigned
  if (!rosidl_runtime_c__String__Sequence__init(&msg->assigned, 0)) {
    mir_msgs__msg__ResourceState__fini(msg);
    return false;
  }
  // type
  // path_idx
  // distance
  // collision_point
  if (!geometry_msgs__msg__Point__init(&msg->collision_point)) {
    mir_msgs__msg__ResourceState__fini(msg);
    return false;
  }
  // queue
  if (!rosidl_runtime_c__String__Sequence__init(&msg->queue, 0)) {
    mir_msgs__msg__ResourceState__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    mir_msgs__msg__ResourceState__fini(msg);
    return false;
  }
  // guid
  if (!rosidl_runtime_c__String__init(&msg->guid)) {
    mir_msgs__msg__ResourceState__fini(msg);
    return false;
  }
  return true;
}

void
mir_msgs__msg__ResourceState__fini(mir_msgs__msg__ResourceState * msg)
{
  if (!msg) {
    return;
  }
  // assigned
  rosidl_runtime_c__String__Sequence__fini(&msg->assigned);
  // type
  // path_idx
  // distance
  // collision_point
  geometry_msgs__msg__Point__fini(&msg->collision_point);
  // queue
  rosidl_runtime_c__String__Sequence__fini(&msg->queue);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // guid
  rosidl_runtime_c__String__fini(&msg->guid);
}

bool
mir_msgs__msg__ResourceState__are_equal(const mir_msgs__msg__ResourceState * lhs, const mir_msgs__msg__ResourceState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // assigned
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->assigned), &(rhs->assigned)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // path_idx
  if (lhs->path_idx != rhs->path_idx) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // collision_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->collision_point), &(rhs->collision_point)))
  {
    return false;
  }
  // queue
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->queue), &(rhs->queue)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // guid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->guid), &(rhs->guid)))
  {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__ResourceState__copy(
  const mir_msgs__msg__ResourceState * input,
  mir_msgs__msg__ResourceState * output)
{
  if (!input || !output) {
    return false;
  }
  // assigned
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->assigned), &(output->assigned)))
  {
    return false;
  }
  // type
  output->type = input->type;
  // path_idx
  output->path_idx = input->path_idx;
  // distance
  output->distance = input->distance;
  // collision_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->collision_point), &(output->collision_point)))
  {
    return false;
  }
  // queue
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->queue), &(output->queue)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // guid
  if (!rosidl_runtime_c__String__copy(
      &(input->guid), &(output->guid)))
  {
    return false;
  }
  return true;
}

mir_msgs__msg__ResourceState *
mir_msgs__msg__ResourceState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__ResourceState * msg = (mir_msgs__msg__ResourceState *)allocator.allocate(sizeof(mir_msgs__msg__ResourceState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__ResourceState));
  bool success = mir_msgs__msg__ResourceState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__ResourceState__destroy(mir_msgs__msg__ResourceState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__ResourceState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__ResourceState__Sequence__init(mir_msgs__msg__ResourceState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__ResourceState * data = NULL;

  if (size) {
    data = (mir_msgs__msg__ResourceState *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__ResourceState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__ResourceState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__ResourceState__fini(&data[i - 1]);
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
mir_msgs__msg__ResourceState__Sequence__fini(mir_msgs__msg__ResourceState__Sequence * array)
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
      mir_msgs__msg__ResourceState__fini(&array->data[i]);
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

mir_msgs__msg__ResourceState__Sequence *
mir_msgs__msg__ResourceState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__ResourceState__Sequence * array = (mir_msgs__msg__ResourceState__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__ResourceState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__ResourceState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__ResourceState__Sequence__destroy(mir_msgs__msg__ResourceState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__ResourceState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__ResourceState__Sequence__are_equal(const mir_msgs__msg__ResourceState__Sequence * lhs, const mir_msgs__msg__ResourceState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__ResourceState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__ResourceState__Sequence__copy(
  const mir_msgs__msg__ResourceState__Sequence * input,
  mir_msgs__msg__ResourceState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__ResourceState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__ResourceState * data =
      (mir_msgs__msg__ResourceState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__ResourceState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__ResourceState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__ResourceState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
