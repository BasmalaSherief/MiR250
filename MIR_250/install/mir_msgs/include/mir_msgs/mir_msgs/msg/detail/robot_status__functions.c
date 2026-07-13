// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/robot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `errors`
#include "mir_msgs/msg/detail/error__functions.h"
// Member `footprint`
// Member `map_id`
// Member `mission_text`
// Member `mode_text`
// Member `robot_name`
// Member `session_id`
// Member `software_version`
// Member `state_text`
// Member `joystick_web_session_id`
// Member `mode_key_state`
#include "rosidl_runtime_c/string_functions.h"
// Member `hook_status`
#include "mir_msgs/msg/detail/hook_status__functions.h"
// Member `position`
#include "mir_msgs/msg/detail/pose2_d__functions.h"
// Member `velocity`
#include "mir_msgs/msg/detail/twist2_d__functions.h"
// Member `user_prompt`
#include "mir_msgs/msg/detail/user_prompt__functions.h"

bool
mir_msgs__msg__RobotStatus__init(mir_msgs__msg__RobotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // battery_percentage
  // battery_time_remaining
  // battery_voltage
  // distance_to_next_target
  // errors
  if (!mir_msgs__msg__Error__Sequence__init(&msg->errors, 0)) {
    mir_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // footprint
  if (!rosidl_runtime_c__String__init(&msg->footprint)) {
    mir_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // hook_status
  if (!mir_msgs__msg__HookStatus__init(&msg->hook_status)) {
    mir_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // map_id
  if (!rosidl_runtime_c__String__init(&msg->map_id)) {
    mir_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // unloaded_map_changes
  // mission_queue_id
  // mission_text
  if (!rosidl_runtime_c__String__init(&msg->mission_text)) {
    mir_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // mode_id
  // mode_text
  if (!rosidl_runtime_c__String__init(&msg->mode_text)) {
    mir_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // moved
  // position
  if (!mir_msgs__msg__Pose2D__init(&msg->position)) {
    mir_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    mir_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // session_id
  if (!rosidl_runtime_c__String__init(&msg->session_id)) {
    mir_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // software_version
  if (!rosidl_runtime_c__String__init(&msg->software_version)) {
    mir_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // state_id
  // state_text
  if (!rosidl_runtime_c__String__init(&msg->state_text)) {
    mir_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // uptime
  // velocity
  if (!mir_msgs__msg__Twist2D__init(&msg->velocity)) {
    mir_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // user_prompt
  if (!mir_msgs__msg__UserPrompt__init(&msg->user_prompt)) {
    mir_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // safety_system_muted
  // joystick_low_speed_mode_enabled
  // joystick_web_session_id
  if (!rosidl_runtime_c__String__init(&msg->joystick_web_session_id)) {
    mir_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // mode_key_state
  if (!rosidl_runtime_c__String__init(&msg->mode_key_state)) {
    mir_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  return true;
}

void
mir_msgs__msg__RobotStatus__fini(mir_msgs__msg__RobotStatus * msg)
{
  if (!msg) {
    return;
  }
  // battery_percentage
  // battery_time_remaining
  // battery_voltage
  // distance_to_next_target
  // errors
  mir_msgs__msg__Error__Sequence__fini(&msg->errors);
  // footprint
  rosidl_runtime_c__String__fini(&msg->footprint);
  // hook_status
  mir_msgs__msg__HookStatus__fini(&msg->hook_status);
  // map_id
  rosidl_runtime_c__String__fini(&msg->map_id);
  // unloaded_map_changes
  // mission_queue_id
  // mission_text
  rosidl_runtime_c__String__fini(&msg->mission_text);
  // mode_id
  // mode_text
  rosidl_runtime_c__String__fini(&msg->mode_text);
  // moved
  // position
  mir_msgs__msg__Pose2D__fini(&msg->position);
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // session_id
  rosidl_runtime_c__String__fini(&msg->session_id);
  // software_version
  rosidl_runtime_c__String__fini(&msg->software_version);
  // state_id
  // state_text
  rosidl_runtime_c__String__fini(&msg->state_text);
  // uptime
  // velocity
  mir_msgs__msg__Twist2D__fini(&msg->velocity);
  // user_prompt
  mir_msgs__msg__UserPrompt__fini(&msg->user_prompt);
  // safety_system_muted
  // joystick_low_speed_mode_enabled
  // joystick_web_session_id
  rosidl_runtime_c__String__fini(&msg->joystick_web_session_id);
  // mode_key_state
  rosidl_runtime_c__String__fini(&msg->mode_key_state);
}

bool
mir_msgs__msg__RobotStatus__are_equal(const mir_msgs__msg__RobotStatus * lhs, const mir_msgs__msg__RobotStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // battery_percentage
  if (lhs->battery_percentage != rhs->battery_percentage) {
    return false;
  }
  // battery_time_remaining
  if (lhs->battery_time_remaining != rhs->battery_time_remaining) {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // distance_to_next_target
  if (lhs->distance_to_next_target != rhs->distance_to_next_target) {
    return false;
  }
  // errors
  if (!mir_msgs__msg__Error__Sequence__are_equal(
      &(lhs->errors), &(rhs->errors)))
  {
    return false;
  }
  // footprint
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->footprint), &(rhs->footprint)))
  {
    return false;
  }
  // hook_status
  if (!mir_msgs__msg__HookStatus__are_equal(
      &(lhs->hook_status), &(rhs->hook_status)))
  {
    return false;
  }
  // map_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_id), &(rhs->map_id)))
  {
    return false;
  }
  // unloaded_map_changes
  if (lhs->unloaded_map_changes != rhs->unloaded_map_changes) {
    return false;
  }
  // mission_queue_id
  if (lhs->mission_queue_id != rhs->mission_queue_id) {
    return false;
  }
  // mission_text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_text), &(rhs->mission_text)))
  {
    return false;
  }
  // mode_id
  if (lhs->mode_id != rhs->mode_id) {
    return false;
  }
  // mode_text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode_text), &(rhs->mode_text)))
  {
    return false;
  }
  // moved
  if (lhs->moved != rhs->moved) {
    return false;
  }
  // position
  if (!mir_msgs__msg__Pose2D__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_name), &(rhs->robot_name)))
  {
    return false;
  }
  // session_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->session_id), &(rhs->session_id)))
  {
    return false;
  }
  // software_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->software_version), &(rhs->software_version)))
  {
    return false;
  }
  // state_id
  if (lhs->state_id != rhs->state_id) {
    return false;
  }
  // state_text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state_text), &(rhs->state_text)))
  {
    return false;
  }
  // uptime
  if (lhs->uptime != rhs->uptime) {
    return false;
  }
  // velocity
  if (!mir_msgs__msg__Twist2D__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // user_prompt
  if (!mir_msgs__msg__UserPrompt__are_equal(
      &(lhs->user_prompt), &(rhs->user_prompt)))
  {
    return false;
  }
  // safety_system_muted
  if (lhs->safety_system_muted != rhs->safety_system_muted) {
    return false;
  }
  // joystick_low_speed_mode_enabled
  if (lhs->joystick_low_speed_mode_enabled != rhs->joystick_low_speed_mode_enabled) {
    return false;
  }
  // joystick_web_session_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->joystick_web_session_id), &(rhs->joystick_web_session_id)))
  {
    return false;
  }
  // mode_key_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode_key_state), &(rhs->mode_key_state)))
  {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__RobotStatus__copy(
  const mir_msgs__msg__RobotStatus * input,
  mir_msgs__msg__RobotStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // battery_percentage
  output->battery_percentage = input->battery_percentage;
  // battery_time_remaining
  output->battery_time_remaining = input->battery_time_remaining;
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // distance_to_next_target
  output->distance_to_next_target = input->distance_to_next_target;
  // errors
  if (!mir_msgs__msg__Error__Sequence__copy(
      &(input->errors), &(output->errors)))
  {
    return false;
  }
  // footprint
  if (!rosidl_runtime_c__String__copy(
      &(input->footprint), &(output->footprint)))
  {
    return false;
  }
  // hook_status
  if (!mir_msgs__msg__HookStatus__copy(
      &(input->hook_status), &(output->hook_status)))
  {
    return false;
  }
  // map_id
  if (!rosidl_runtime_c__String__copy(
      &(input->map_id), &(output->map_id)))
  {
    return false;
  }
  // unloaded_map_changes
  output->unloaded_map_changes = input->unloaded_map_changes;
  // mission_queue_id
  output->mission_queue_id = input->mission_queue_id;
  // mission_text
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_text), &(output->mission_text)))
  {
    return false;
  }
  // mode_id
  output->mode_id = input->mode_id;
  // mode_text
  if (!rosidl_runtime_c__String__copy(
      &(input->mode_text), &(output->mode_text)))
  {
    return false;
  }
  // moved
  output->moved = input->moved;
  // position
  if (!mir_msgs__msg__Pose2D__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_name), &(output->robot_name)))
  {
    return false;
  }
  // session_id
  if (!rosidl_runtime_c__String__copy(
      &(input->session_id), &(output->session_id)))
  {
    return false;
  }
  // software_version
  if (!rosidl_runtime_c__String__copy(
      &(input->software_version), &(output->software_version)))
  {
    return false;
  }
  // state_id
  output->state_id = input->state_id;
  // state_text
  if (!rosidl_runtime_c__String__copy(
      &(input->state_text), &(output->state_text)))
  {
    return false;
  }
  // uptime
  output->uptime = input->uptime;
  // velocity
  if (!mir_msgs__msg__Twist2D__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // user_prompt
  if (!mir_msgs__msg__UserPrompt__copy(
      &(input->user_prompt), &(output->user_prompt)))
  {
    return false;
  }
  // safety_system_muted
  output->safety_system_muted = input->safety_system_muted;
  // joystick_low_speed_mode_enabled
  output->joystick_low_speed_mode_enabled = input->joystick_low_speed_mode_enabled;
  // joystick_web_session_id
  if (!rosidl_runtime_c__String__copy(
      &(input->joystick_web_session_id), &(output->joystick_web_session_id)))
  {
    return false;
  }
  // mode_key_state
  if (!rosidl_runtime_c__String__copy(
      &(input->mode_key_state), &(output->mode_key_state)))
  {
    return false;
  }
  return true;
}

mir_msgs__msg__RobotStatus *
mir_msgs__msg__RobotStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__RobotStatus * msg = (mir_msgs__msg__RobotStatus *)allocator.allocate(sizeof(mir_msgs__msg__RobotStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__RobotStatus));
  bool success = mir_msgs__msg__RobotStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__RobotStatus__destroy(mir_msgs__msg__RobotStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__RobotStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__RobotStatus__Sequence__init(mir_msgs__msg__RobotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__RobotStatus * data = NULL;

  if (size) {
    data = (mir_msgs__msg__RobotStatus *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__RobotStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__RobotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__RobotStatus__fini(&data[i - 1]);
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
mir_msgs__msg__RobotStatus__Sequence__fini(mir_msgs__msg__RobotStatus__Sequence * array)
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
      mir_msgs__msg__RobotStatus__fini(&array->data[i]);
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

mir_msgs__msg__RobotStatus__Sequence *
mir_msgs__msg__RobotStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__RobotStatus__Sequence * array = (mir_msgs__msg__RobotStatus__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__RobotStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__RobotStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__RobotStatus__Sequence__destroy(mir_msgs__msg__RobotStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__RobotStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__RobotStatus__Sequence__are_equal(const mir_msgs__msg__RobotStatus__Sequence * lhs, const mir_msgs__msg__RobotStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__RobotStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__RobotStatus__Sequence__copy(
  const mir_msgs__msg__RobotStatus__Sequence * input,
  mir_msgs__msg__RobotStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__RobotStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__RobotStatus * data =
      (mir_msgs__msg__RobotStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__RobotStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__RobotStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__RobotStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
