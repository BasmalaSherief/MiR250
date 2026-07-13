// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/MissionCtrlCommand.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/mission_ctrl_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `description`
#include "rosidl_runtime_c/string_functions.h"

bool
mir_msgs__msg__MissionCtrlCommand__init(mir_msgs__msg__MissionCtrlCommand * msg)
{
  if (!msg) {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    mir_msgs__msg__MissionCtrlCommand__fini(msg);
    return false;
  }
  // cmd
  // mission_id
  return true;
}

void
mir_msgs__msg__MissionCtrlCommand__fini(mir_msgs__msg__MissionCtrlCommand * msg)
{
  if (!msg) {
    return;
  }
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // cmd
  // mission_id
}

bool
mir_msgs__msg__MissionCtrlCommand__are_equal(const mir_msgs__msg__MissionCtrlCommand * lhs, const mir_msgs__msg__MissionCtrlCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // cmd
  if (lhs->cmd != rhs->cmd) {
    return false;
  }
  // mission_id
  if (lhs->mission_id != rhs->mission_id) {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__MissionCtrlCommand__copy(
  const mir_msgs__msg__MissionCtrlCommand * input,
  mir_msgs__msg__MissionCtrlCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // cmd
  output->cmd = input->cmd;
  // mission_id
  output->mission_id = input->mission_id;
  return true;
}

mir_msgs__msg__MissionCtrlCommand *
mir_msgs__msg__MissionCtrlCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__MissionCtrlCommand * msg = (mir_msgs__msg__MissionCtrlCommand *)allocator.allocate(sizeof(mir_msgs__msg__MissionCtrlCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__MissionCtrlCommand));
  bool success = mir_msgs__msg__MissionCtrlCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__MissionCtrlCommand__destroy(mir_msgs__msg__MissionCtrlCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__MissionCtrlCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__MissionCtrlCommand__Sequence__init(mir_msgs__msg__MissionCtrlCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__MissionCtrlCommand * data = NULL;

  if (size) {
    data = (mir_msgs__msg__MissionCtrlCommand *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__MissionCtrlCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__MissionCtrlCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__MissionCtrlCommand__fini(&data[i - 1]);
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
mir_msgs__msg__MissionCtrlCommand__Sequence__fini(mir_msgs__msg__MissionCtrlCommand__Sequence * array)
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
      mir_msgs__msg__MissionCtrlCommand__fini(&array->data[i]);
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

mir_msgs__msg__MissionCtrlCommand__Sequence *
mir_msgs__msg__MissionCtrlCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__MissionCtrlCommand__Sequence * array = (mir_msgs__msg__MissionCtrlCommand__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__MissionCtrlCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__MissionCtrlCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__MissionCtrlCommand__Sequence__destroy(mir_msgs__msg__MissionCtrlCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__MissionCtrlCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__MissionCtrlCommand__Sequence__are_equal(const mir_msgs__msg__MissionCtrlCommand__Sequence * lhs, const mir_msgs__msg__MissionCtrlCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__MissionCtrlCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__MissionCtrlCommand__Sequence__copy(
  const mir_msgs__msg__MissionCtrlCommand__Sequence * input,
  mir_msgs__msg__MissionCtrlCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__MissionCtrlCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__MissionCtrlCommand * data =
      (mir_msgs__msg__MissionCtrlCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__MissionCtrlCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__MissionCtrlCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__MissionCtrlCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
