// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/PlanSegment.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/plan_segment__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `path`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
mir_msgs__msg__PlanSegment__init(mir_msgs__msg__PlanSegment * msg)
{
  if (!msg) {
    return false;
  }
  // forward_motion
  // start_idx
  // length
  // remaining_length
  // path
  if (!geometry_msgs__msg__PoseStamped__Sequence__init(&msg->path, 0)) {
    mir_msgs__msg__PlanSegment__fini(msg);
    return false;
  }
  return true;
}

void
mir_msgs__msg__PlanSegment__fini(mir_msgs__msg__PlanSegment * msg)
{
  if (!msg) {
    return;
  }
  // forward_motion
  // start_idx
  // length
  // remaining_length
  // path
  geometry_msgs__msg__PoseStamped__Sequence__fini(&msg->path);
}

bool
mir_msgs__msg__PlanSegment__are_equal(const mir_msgs__msg__PlanSegment * lhs, const mir_msgs__msg__PlanSegment * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // forward_motion
  if (lhs->forward_motion != rhs->forward_motion) {
    return false;
  }
  // start_idx
  if (lhs->start_idx != rhs->start_idx) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // remaining_length
  if (lhs->remaining_length != rhs->remaining_length) {
    return false;
  }
  // path
  if (!geometry_msgs__msg__PoseStamped__Sequence__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__PlanSegment__copy(
  const mir_msgs__msg__PlanSegment * input,
  mir_msgs__msg__PlanSegment * output)
{
  if (!input || !output) {
    return false;
  }
  // forward_motion
  output->forward_motion = input->forward_motion;
  // start_idx
  output->start_idx = input->start_idx;
  // length
  output->length = input->length;
  // remaining_length
  output->remaining_length = input->remaining_length;
  // path
  if (!geometry_msgs__msg__PoseStamped__Sequence__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  return true;
}

mir_msgs__msg__PlanSegment *
mir_msgs__msg__PlanSegment__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__PlanSegment * msg = (mir_msgs__msg__PlanSegment *)allocator.allocate(sizeof(mir_msgs__msg__PlanSegment), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__PlanSegment));
  bool success = mir_msgs__msg__PlanSegment__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__PlanSegment__destroy(mir_msgs__msg__PlanSegment * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__PlanSegment__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__PlanSegment__Sequence__init(mir_msgs__msg__PlanSegment__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__PlanSegment * data = NULL;

  if (size) {
    data = (mir_msgs__msg__PlanSegment *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__PlanSegment), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__PlanSegment__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__PlanSegment__fini(&data[i - 1]);
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
mir_msgs__msg__PlanSegment__Sequence__fini(mir_msgs__msg__PlanSegment__Sequence * array)
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
      mir_msgs__msg__PlanSegment__fini(&array->data[i]);
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

mir_msgs__msg__PlanSegment__Sequence *
mir_msgs__msg__PlanSegment__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__PlanSegment__Sequence * array = (mir_msgs__msg__PlanSegment__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__PlanSegment__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__PlanSegment__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__PlanSegment__Sequence__destroy(mir_msgs__msg__PlanSegment__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__PlanSegment__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__PlanSegment__Sequence__are_equal(const mir_msgs__msg__PlanSegment__Sequence * lhs, const mir_msgs__msg__PlanSegment__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__PlanSegment__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__PlanSegment__Sequence__copy(
  const mir_msgs__msg__PlanSegment__Sequence * input,
  mir_msgs__msg__PlanSegment__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__PlanSegment);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__PlanSegment * data =
      (mir_msgs__msg__PlanSegment *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__PlanSegment__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__PlanSegment__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__PlanSegment__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
