// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sdc21x0:srv/Flags.idl
// generated code does not contain a copyright notice
#include "sdc21x0/srv/detail/flags__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
sdc21x0__srv__Flags_Request__init(sdc21x0__srv__Flags_Request * msg)
{
  if (!msg) {
    return false;
  }
  // digital_port
  return true;
}

void
sdc21x0__srv__Flags_Request__fini(sdc21x0__srv__Flags_Request * msg)
{
  if (!msg) {
    return;
  }
  // digital_port
}

bool
sdc21x0__srv__Flags_Request__are_equal(const sdc21x0__srv__Flags_Request * lhs, const sdc21x0__srv__Flags_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // digital_port
  if (lhs->digital_port != rhs->digital_port) {
    return false;
  }
  return true;
}

bool
sdc21x0__srv__Flags_Request__copy(
  const sdc21x0__srv__Flags_Request * input,
  sdc21x0__srv__Flags_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // digital_port
  output->digital_port = input->digital_port;
  return true;
}

sdc21x0__srv__Flags_Request *
sdc21x0__srv__Flags_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdc21x0__srv__Flags_Request * msg = (sdc21x0__srv__Flags_Request *)allocator.allocate(sizeof(sdc21x0__srv__Flags_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sdc21x0__srv__Flags_Request));
  bool success = sdc21x0__srv__Flags_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sdc21x0__srv__Flags_Request__destroy(sdc21x0__srv__Flags_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sdc21x0__srv__Flags_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sdc21x0__srv__Flags_Request__Sequence__init(sdc21x0__srv__Flags_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdc21x0__srv__Flags_Request * data = NULL;

  if (size) {
    data = (sdc21x0__srv__Flags_Request *)allocator.zero_allocate(size, sizeof(sdc21x0__srv__Flags_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sdc21x0__srv__Flags_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sdc21x0__srv__Flags_Request__fini(&data[i - 1]);
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
sdc21x0__srv__Flags_Request__Sequence__fini(sdc21x0__srv__Flags_Request__Sequence * array)
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
      sdc21x0__srv__Flags_Request__fini(&array->data[i]);
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

sdc21x0__srv__Flags_Request__Sequence *
sdc21x0__srv__Flags_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdc21x0__srv__Flags_Request__Sequence * array = (sdc21x0__srv__Flags_Request__Sequence *)allocator.allocate(sizeof(sdc21x0__srv__Flags_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sdc21x0__srv__Flags_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sdc21x0__srv__Flags_Request__Sequence__destroy(sdc21x0__srv__Flags_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sdc21x0__srv__Flags_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sdc21x0__srv__Flags_Request__Sequence__are_equal(const sdc21x0__srv__Flags_Request__Sequence * lhs, const sdc21x0__srv__Flags_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sdc21x0__srv__Flags_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sdc21x0__srv__Flags_Request__Sequence__copy(
  const sdc21x0__srv__Flags_Request__Sequence * input,
  sdc21x0__srv__Flags_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sdc21x0__srv__Flags_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sdc21x0__srv__Flags_Request * data =
      (sdc21x0__srv__Flags_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sdc21x0__srv__Flags_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sdc21x0__srv__Flags_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sdc21x0__srv__Flags_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
sdc21x0__srv__Flags_Response__init(sdc21x0__srv__Flags_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  return true;
}

void
sdc21x0__srv__Flags_Response__fini(sdc21x0__srv__Flags_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
}

bool
sdc21x0__srv__Flags_Response__are_equal(const sdc21x0__srv__Flags_Response * lhs, const sdc21x0__srv__Flags_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (lhs->response != rhs->response) {
    return false;
  }
  return true;
}

bool
sdc21x0__srv__Flags_Response__copy(
  const sdc21x0__srv__Flags_Response * input,
  sdc21x0__srv__Flags_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  output->response = input->response;
  return true;
}

sdc21x0__srv__Flags_Response *
sdc21x0__srv__Flags_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdc21x0__srv__Flags_Response * msg = (sdc21x0__srv__Flags_Response *)allocator.allocate(sizeof(sdc21x0__srv__Flags_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sdc21x0__srv__Flags_Response));
  bool success = sdc21x0__srv__Flags_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sdc21x0__srv__Flags_Response__destroy(sdc21x0__srv__Flags_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sdc21x0__srv__Flags_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sdc21x0__srv__Flags_Response__Sequence__init(sdc21x0__srv__Flags_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdc21x0__srv__Flags_Response * data = NULL;

  if (size) {
    data = (sdc21x0__srv__Flags_Response *)allocator.zero_allocate(size, sizeof(sdc21x0__srv__Flags_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sdc21x0__srv__Flags_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sdc21x0__srv__Flags_Response__fini(&data[i - 1]);
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
sdc21x0__srv__Flags_Response__Sequence__fini(sdc21x0__srv__Flags_Response__Sequence * array)
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
      sdc21x0__srv__Flags_Response__fini(&array->data[i]);
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

sdc21x0__srv__Flags_Response__Sequence *
sdc21x0__srv__Flags_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdc21x0__srv__Flags_Response__Sequence * array = (sdc21x0__srv__Flags_Response__Sequence *)allocator.allocate(sizeof(sdc21x0__srv__Flags_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sdc21x0__srv__Flags_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sdc21x0__srv__Flags_Response__Sequence__destroy(sdc21x0__srv__Flags_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sdc21x0__srv__Flags_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sdc21x0__srv__Flags_Response__Sequence__are_equal(const sdc21x0__srv__Flags_Response__Sequence * lhs, const sdc21x0__srv__Flags_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sdc21x0__srv__Flags_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sdc21x0__srv__Flags_Response__Sequence__copy(
  const sdc21x0__srv__Flags_Response__Sequence * input,
  sdc21x0__srv__Flags_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sdc21x0__srv__Flags_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sdc21x0__srv__Flags_Response * data =
      (sdc21x0__srv__Flags_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sdc21x0__srv__Flags_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sdc21x0__srv__Flags_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sdc21x0__srv__Flags_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
