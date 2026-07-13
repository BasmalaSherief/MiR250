// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/PowerBoardMotorStatus.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/power_board_motor_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mir_msgs__msg__PowerBoardMotorStatus__init(mir_msgs__msg__PowerBoardMotorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // left_motor_ctrl_word
  // left_motor_speed
  // left_motor_encoder
  // left_motor_status
  // left_motor_error
  // left_motor_error_hist1
  // left_motor_error_hist2
  // left_motor_current
  // left_motor_i2t_motor
  // left_motor_i2t_controller
  // left_motor_temperature
  // right_motor_ctrl_word
  // right_motor_speed
  // right_motor_encoder
  // right_motor_status
  // right_motor_error
  // right_motor_error_hist1
  // right_motor_error_hist2
  // right_motor_current
  // right_motor_i2t_motor
  // right_motor_i2t_controller
  // right_motor_temperature
  // brake_left_status
  // brake_right_status
  return true;
}

void
mir_msgs__msg__PowerBoardMotorStatus__fini(mir_msgs__msg__PowerBoardMotorStatus * msg)
{
  if (!msg) {
    return;
  }
  // left_motor_ctrl_word
  // left_motor_speed
  // left_motor_encoder
  // left_motor_status
  // left_motor_error
  // left_motor_error_hist1
  // left_motor_error_hist2
  // left_motor_current
  // left_motor_i2t_motor
  // left_motor_i2t_controller
  // left_motor_temperature
  // right_motor_ctrl_word
  // right_motor_speed
  // right_motor_encoder
  // right_motor_status
  // right_motor_error
  // right_motor_error_hist1
  // right_motor_error_hist2
  // right_motor_current
  // right_motor_i2t_motor
  // right_motor_i2t_controller
  // right_motor_temperature
  // brake_left_status
  // brake_right_status
}

bool
mir_msgs__msg__PowerBoardMotorStatus__are_equal(const mir_msgs__msg__PowerBoardMotorStatus * lhs, const mir_msgs__msg__PowerBoardMotorStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_motor_ctrl_word
  if (lhs->left_motor_ctrl_word != rhs->left_motor_ctrl_word) {
    return false;
  }
  // left_motor_speed
  if (lhs->left_motor_speed != rhs->left_motor_speed) {
    return false;
  }
  // left_motor_encoder
  if (lhs->left_motor_encoder != rhs->left_motor_encoder) {
    return false;
  }
  // left_motor_status
  if (lhs->left_motor_status != rhs->left_motor_status) {
    return false;
  }
  // left_motor_error
  if (lhs->left_motor_error != rhs->left_motor_error) {
    return false;
  }
  // left_motor_error_hist1
  if (lhs->left_motor_error_hist1 != rhs->left_motor_error_hist1) {
    return false;
  }
  // left_motor_error_hist2
  if (lhs->left_motor_error_hist2 != rhs->left_motor_error_hist2) {
    return false;
  }
  // left_motor_current
  if (lhs->left_motor_current != rhs->left_motor_current) {
    return false;
  }
  // left_motor_i2t_motor
  if (lhs->left_motor_i2t_motor != rhs->left_motor_i2t_motor) {
    return false;
  }
  // left_motor_i2t_controller
  if (lhs->left_motor_i2t_controller != rhs->left_motor_i2t_controller) {
    return false;
  }
  // left_motor_temperature
  if (lhs->left_motor_temperature != rhs->left_motor_temperature) {
    return false;
  }
  // right_motor_ctrl_word
  if (lhs->right_motor_ctrl_word != rhs->right_motor_ctrl_word) {
    return false;
  }
  // right_motor_speed
  if (lhs->right_motor_speed != rhs->right_motor_speed) {
    return false;
  }
  // right_motor_encoder
  if (lhs->right_motor_encoder != rhs->right_motor_encoder) {
    return false;
  }
  // right_motor_status
  if (lhs->right_motor_status != rhs->right_motor_status) {
    return false;
  }
  // right_motor_error
  if (lhs->right_motor_error != rhs->right_motor_error) {
    return false;
  }
  // right_motor_error_hist1
  if (lhs->right_motor_error_hist1 != rhs->right_motor_error_hist1) {
    return false;
  }
  // right_motor_error_hist2
  if (lhs->right_motor_error_hist2 != rhs->right_motor_error_hist2) {
    return false;
  }
  // right_motor_current
  if (lhs->right_motor_current != rhs->right_motor_current) {
    return false;
  }
  // right_motor_i2t_motor
  if (lhs->right_motor_i2t_motor != rhs->right_motor_i2t_motor) {
    return false;
  }
  // right_motor_i2t_controller
  if (lhs->right_motor_i2t_controller != rhs->right_motor_i2t_controller) {
    return false;
  }
  // right_motor_temperature
  if (lhs->right_motor_temperature != rhs->right_motor_temperature) {
    return false;
  }
  // brake_left_status
  if (lhs->brake_left_status != rhs->brake_left_status) {
    return false;
  }
  // brake_right_status
  if (lhs->brake_right_status != rhs->brake_right_status) {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__PowerBoardMotorStatus__copy(
  const mir_msgs__msg__PowerBoardMotorStatus * input,
  mir_msgs__msg__PowerBoardMotorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // left_motor_ctrl_word
  output->left_motor_ctrl_word = input->left_motor_ctrl_word;
  // left_motor_speed
  output->left_motor_speed = input->left_motor_speed;
  // left_motor_encoder
  output->left_motor_encoder = input->left_motor_encoder;
  // left_motor_status
  output->left_motor_status = input->left_motor_status;
  // left_motor_error
  output->left_motor_error = input->left_motor_error;
  // left_motor_error_hist1
  output->left_motor_error_hist1 = input->left_motor_error_hist1;
  // left_motor_error_hist2
  output->left_motor_error_hist2 = input->left_motor_error_hist2;
  // left_motor_current
  output->left_motor_current = input->left_motor_current;
  // left_motor_i2t_motor
  output->left_motor_i2t_motor = input->left_motor_i2t_motor;
  // left_motor_i2t_controller
  output->left_motor_i2t_controller = input->left_motor_i2t_controller;
  // left_motor_temperature
  output->left_motor_temperature = input->left_motor_temperature;
  // right_motor_ctrl_word
  output->right_motor_ctrl_word = input->right_motor_ctrl_word;
  // right_motor_speed
  output->right_motor_speed = input->right_motor_speed;
  // right_motor_encoder
  output->right_motor_encoder = input->right_motor_encoder;
  // right_motor_status
  output->right_motor_status = input->right_motor_status;
  // right_motor_error
  output->right_motor_error = input->right_motor_error;
  // right_motor_error_hist1
  output->right_motor_error_hist1 = input->right_motor_error_hist1;
  // right_motor_error_hist2
  output->right_motor_error_hist2 = input->right_motor_error_hist2;
  // right_motor_current
  output->right_motor_current = input->right_motor_current;
  // right_motor_i2t_motor
  output->right_motor_i2t_motor = input->right_motor_i2t_motor;
  // right_motor_i2t_controller
  output->right_motor_i2t_controller = input->right_motor_i2t_controller;
  // right_motor_temperature
  output->right_motor_temperature = input->right_motor_temperature;
  // brake_left_status
  output->brake_left_status = input->brake_left_status;
  // brake_right_status
  output->brake_right_status = input->brake_right_status;
  return true;
}

mir_msgs__msg__PowerBoardMotorStatus *
mir_msgs__msg__PowerBoardMotorStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__PowerBoardMotorStatus * msg = (mir_msgs__msg__PowerBoardMotorStatus *)allocator.allocate(sizeof(mir_msgs__msg__PowerBoardMotorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__PowerBoardMotorStatus));
  bool success = mir_msgs__msg__PowerBoardMotorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__PowerBoardMotorStatus__destroy(mir_msgs__msg__PowerBoardMotorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__PowerBoardMotorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__PowerBoardMotorStatus__Sequence__init(mir_msgs__msg__PowerBoardMotorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__PowerBoardMotorStatus * data = NULL;

  if (size) {
    data = (mir_msgs__msg__PowerBoardMotorStatus *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__PowerBoardMotorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__PowerBoardMotorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__PowerBoardMotorStatus__fini(&data[i - 1]);
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
mir_msgs__msg__PowerBoardMotorStatus__Sequence__fini(mir_msgs__msg__PowerBoardMotorStatus__Sequence * array)
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
      mir_msgs__msg__PowerBoardMotorStatus__fini(&array->data[i]);
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

mir_msgs__msg__PowerBoardMotorStatus__Sequence *
mir_msgs__msg__PowerBoardMotorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__PowerBoardMotorStatus__Sequence * array = (mir_msgs__msg__PowerBoardMotorStatus__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__PowerBoardMotorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__PowerBoardMotorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__PowerBoardMotorStatus__Sequence__destroy(mir_msgs__msg__PowerBoardMotorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__PowerBoardMotorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__PowerBoardMotorStatus__Sequence__are_equal(const mir_msgs__msg__PowerBoardMotorStatus__Sequence * lhs, const mir_msgs__msg__PowerBoardMotorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__PowerBoardMotorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__PowerBoardMotorStatus__Sequence__copy(
  const mir_msgs__msg__PowerBoardMotorStatus__Sequence * input,
  mir_msgs__msg__PowerBoardMotorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__PowerBoardMotorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__PowerBoardMotorStatus * data =
      (mir_msgs__msg__PowerBoardMotorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__PowerBoardMotorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__PowerBoardMotorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__PowerBoardMotorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
