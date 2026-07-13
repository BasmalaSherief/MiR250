// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/WorldModel.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/world_model__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `world_map`
#include "mir_msgs/msg/detail/world_map__functions.h"

bool
mir_msgs__msg__WorldModel__init(mir_msgs__msg__WorldModel * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mir_msgs__msg__WorldModel__fini(msg);
    return false;
  }
  // world_map
  if (!mir_msgs__msg__WorldMap__Sequence__init(&msg->world_map, 0)) {
    mir_msgs__msg__WorldModel__fini(msg);
    return false;
  }
  return true;
}

void
mir_msgs__msg__WorldModel__fini(mir_msgs__msg__WorldModel * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // world_map
  mir_msgs__msg__WorldMap__Sequence__fini(&msg->world_map);
}

bool
mir_msgs__msg__WorldModel__are_equal(const mir_msgs__msg__WorldModel * lhs, const mir_msgs__msg__WorldModel * rhs)
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
  // world_map
  if (!mir_msgs__msg__WorldMap__Sequence__are_equal(
      &(lhs->world_map), &(rhs->world_map)))
  {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__WorldModel__copy(
  const mir_msgs__msg__WorldModel * input,
  mir_msgs__msg__WorldModel * output)
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
  // world_map
  if (!mir_msgs__msg__WorldMap__Sequence__copy(
      &(input->world_map), &(output->world_map)))
  {
    return false;
  }
  return true;
}

mir_msgs__msg__WorldModel *
mir_msgs__msg__WorldModel__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__WorldModel * msg = (mir_msgs__msg__WorldModel *)allocator.allocate(sizeof(mir_msgs__msg__WorldModel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__WorldModel));
  bool success = mir_msgs__msg__WorldModel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__WorldModel__destroy(mir_msgs__msg__WorldModel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__WorldModel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__WorldModel__Sequence__init(mir_msgs__msg__WorldModel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__WorldModel * data = NULL;

  if (size) {
    data = (mir_msgs__msg__WorldModel *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__WorldModel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__WorldModel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__WorldModel__fini(&data[i - 1]);
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
mir_msgs__msg__WorldModel__Sequence__fini(mir_msgs__msg__WorldModel__Sequence * array)
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
      mir_msgs__msg__WorldModel__fini(&array->data[i]);
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

mir_msgs__msg__WorldModel__Sequence *
mir_msgs__msg__WorldModel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__WorldModel__Sequence * array = (mir_msgs__msg__WorldModel__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__WorldModel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__WorldModel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__WorldModel__Sequence__destroy(mir_msgs__msg__WorldModel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__WorldModel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__WorldModel__Sequence__are_equal(const mir_msgs__msg__WorldModel__Sequence * lhs, const mir_msgs__msg__WorldModel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__WorldModel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__WorldModel__Sequence__copy(
  const mir_msgs__msg__WorldModel__Sequence * input,
  mir_msgs__msg__WorldModel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__WorldModel);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__WorldModel * data =
      (mir_msgs__msg__WorldModel *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__WorldModel__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__WorldModel__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__WorldModel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
