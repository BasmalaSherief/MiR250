// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/IOs.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/i_os__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `module_guid`
// Member `ip`
// Member `error`
#include "rosidl_runtime_c/string_functions.h"
// Member `input_state`
// Member `output_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mir_msgs__msg__IOs__init(mir_msgs__msg__IOs * msg)
{
  if (!msg) {
    return false;
  }
  // module_guid
  if (!rosidl_runtime_c__String__init(&msg->module_guid)) {
    mir_msgs__msg__IOs__fini(msg);
    return false;
  }
  // connected
  // status
  // num_inputs
  // input_state
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->input_state, 0)) {
    mir_msgs__msg__IOs__fini(msg);
    return false;
  }
  // num_outputs
  // output_state
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->output_state, 0)) {
    mir_msgs__msg__IOs__fini(msg);
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__init(&msg->ip)) {
    mir_msgs__msg__IOs__fini(msg);
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__init(&msg->error)) {
    mir_msgs__msg__IOs__fini(msg);
    return false;
  }
  return true;
}

void
mir_msgs__msg__IOs__fini(mir_msgs__msg__IOs * msg)
{
  if (!msg) {
    return;
  }
  // module_guid
  rosidl_runtime_c__String__fini(&msg->module_guid);
  // connected
  // status
  // num_inputs
  // input_state
  rosidl_runtime_c__boolean__Sequence__fini(&msg->input_state);
  // num_outputs
  // output_state
  rosidl_runtime_c__boolean__Sequence__fini(&msg->output_state);
  // ip
  rosidl_runtime_c__String__fini(&msg->ip);
  // error
  rosidl_runtime_c__String__fini(&msg->error);
}

bool
mir_msgs__msg__IOs__are_equal(const mir_msgs__msg__IOs * lhs, const mir_msgs__msg__IOs * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // module_guid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->module_guid), &(rhs->module_guid)))
  {
    return false;
  }
  // connected
  if (lhs->connected != rhs->connected) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // num_inputs
  if (lhs->num_inputs != rhs->num_inputs) {
    return false;
  }
  // input_state
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->input_state), &(rhs->input_state)))
  {
    return false;
  }
  // num_outputs
  if (lhs->num_outputs != rhs->num_outputs) {
    return false;
  }
  // output_state
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->output_state), &(rhs->output_state)))
  {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ip), &(rhs->ip)))
  {
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__IOs__copy(
  const mir_msgs__msg__IOs * input,
  mir_msgs__msg__IOs * output)
{
  if (!input || !output) {
    return false;
  }
  // module_guid
  if (!rosidl_runtime_c__String__copy(
      &(input->module_guid), &(output->module_guid)))
  {
    return false;
  }
  // connected
  output->connected = input->connected;
  // status
  output->status = input->status;
  // num_inputs
  output->num_inputs = input->num_inputs;
  // input_state
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->input_state), &(output->input_state)))
  {
    return false;
  }
  // num_outputs
  output->num_outputs = input->num_outputs;
  // output_state
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->output_state), &(output->output_state)))
  {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__copy(
      &(input->ip), &(output->ip)))
  {
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  return true;
}

mir_msgs__msg__IOs *
mir_msgs__msg__IOs__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__IOs * msg = (mir_msgs__msg__IOs *)allocator.allocate(sizeof(mir_msgs__msg__IOs), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__IOs));
  bool success = mir_msgs__msg__IOs__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__IOs__destroy(mir_msgs__msg__IOs * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__IOs__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__IOs__Sequence__init(mir_msgs__msg__IOs__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__IOs * data = NULL;

  if (size) {
    data = (mir_msgs__msg__IOs *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__IOs), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__IOs__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__IOs__fini(&data[i - 1]);
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
mir_msgs__msg__IOs__Sequence__fini(mir_msgs__msg__IOs__Sequence * array)
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
      mir_msgs__msg__IOs__fini(&array->data[i]);
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

mir_msgs__msg__IOs__Sequence *
mir_msgs__msg__IOs__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__IOs__Sequence * array = (mir_msgs__msg__IOs__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__IOs__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__IOs__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__IOs__Sequence__destroy(mir_msgs__msg__IOs__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__IOs__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__IOs__Sequence__are_equal(const mir_msgs__msg__IOs__Sequence * lhs, const mir_msgs__msg__IOs__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__IOs__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__IOs__Sequence__copy(
  const mir_msgs__msg__IOs__Sequence * input,
  mir_msgs__msg__IOs__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__IOs);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__IOs * data =
      (mir_msgs__msg__IOs *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__IOs__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__IOs__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__IOs__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
