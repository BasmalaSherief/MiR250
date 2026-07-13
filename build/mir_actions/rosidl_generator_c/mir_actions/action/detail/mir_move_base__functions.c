// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_actions:action/MirMoveBase.idl
// generated code does not contain a copyright notice
#include "mir_actions/action/detail/mir_move_base__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `path`
#include "nav_msgs/msg/detail/path__functions.h"
// Member `pose_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
// Member `offset`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

bool
mir_actions__action__MirMoveBase_Goal__init(mir_actions__action__MirMoveBase_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // move_task
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->target_pose)) {
    mir_actions__action__MirMoveBase_Goal__fini(msg);
    return false;
  }
  // goal_dist_threshold
  // goal_orientation_threshold
  // path
  if (!nav_msgs__msg__Path__init(&msg->path)) {
    mir_actions__action__MirMoveBase_Goal__fini(msg);
    return false;
  }
  // max_plan_time
  // clear_costmaps
  // pause_command
  // continue_command
  // yaw
  // collision_detection
  // collision_avoidance
  // disable_collision_check_dist
  // max_linear_speed
  // max_rotational_speed
  // pid_dist_offset
  // target_offset
  // only_collision_detection
  // timeout
  // pattern_type
  // pattern_value
  // only_track
  // same_goal
  // pose_frame
  if (!rosidl_runtime_c__String__init(&msg->pose_frame)) {
    mir_actions__action__MirMoveBase_Goal__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose2D__init(&msg->pose)) {
    mir_actions__action__MirMoveBase_Goal__fini(msg);
    return false;
  }
  // offset
  if (!geometry_msgs__msg__Pose2D__init(&msg->offset)) {
    mir_actions__action__MirMoveBase_Goal__fini(msg);
    return false;
  }
  // bar_length
  // bar_distance
  // shelf_leg_asymmetry_x
  // tolerance
  return true;
}

void
mir_actions__action__MirMoveBase_Goal__fini(mir_actions__action__MirMoveBase_Goal * msg)
{
  if (!msg) {
    return;
  }
  // move_task
  // target_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->target_pose);
  // goal_dist_threshold
  // goal_orientation_threshold
  // path
  nav_msgs__msg__Path__fini(&msg->path);
  // max_plan_time
  // clear_costmaps
  // pause_command
  // continue_command
  // yaw
  // collision_detection
  // collision_avoidance
  // disable_collision_check_dist
  // max_linear_speed
  // max_rotational_speed
  // pid_dist_offset
  // target_offset
  // only_collision_detection
  // timeout
  // pattern_type
  // pattern_value
  // only_track
  // same_goal
  // pose_frame
  rosidl_runtime_c__String__fini(&msg->pose_frame);
  // pose
  geometry_msgs__msg__Pose2D__fini(&msg->pose);
  // offset
  geometry_msgs__msg__Pose2D__fini(&msg->offset);
  // bar_length
  // bar_distance
  // shelf_leg_asymmetry_x
  // tolerance
}

bool
mir_actions__action__MirMoveBase_Goal__are_equal(const mir_actions__action__MirMoveBase_Goal * lhs, const mir_actions__action__MirMoveBase_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // move_task
  if (lhs->move_task != rhs->move_task) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->target_pose), &(rhs->target_pose)))
  {
    return false;
  }
  // goal_dist_threshold
  if (lhs->goal_dist_threshold != rhs->goal_dist_threshold) {
    return false;
  }
  // goal_orientation_threshold
  if (lhs->goal_orientation_threshold != rhs->goal_orientation_threshold) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // max_plan_time
  if (lhs->max_plan_time != rhs->max_plan_time) {
    return false;
  }
  // clear_costmaps
  if (lhs->clear_costmaps != rhs->clear_costmaps) {
    return false;
  }
  // pause_command
  if (lhs->pause_command != rhs->pause_command) {
    return false;
  }
  // continue_command
  if (lhs->continue_command != rhs->continue_command) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // collision_detection
  if (lhs->collision_detection != rhs->collision_detection) {
    return false;
  }
  // collision_avoidance
  if (lhs->collision_avoidance != rhs->collision_avoidance) {
    return false;
  }
  // disable_collision_check_dist
  if (lhs->disable_collision_check_dist != rhs->disable_collision_check_dist) {
    return false;
  }
  // max_linear_speed
  if (lhs->max_linear_speed != rhs->max_linear_speed) {
    return false;
  }
  // max_rotational_speed
  if (lhs->max_rotational_speed != rhs->max_rotational_speed) {
    return false;
  }
  // pid_dist_offset
  if (lhs->pid_dist_offset != rhs->pid_dist_offset) {
    return false;
  }
  // target_offset
  if (lhs->target_offset != rhs->target_offset) {
    return false;
  }
  // only_collision_detection
  if (lhs->only_collision_detection != rhs->only_collision_detection) {
    return false;
  }
  // timeout
  if (lhs->timeout != rhs->timeout) {
    return false;
  }
  // pattern_type
  if (lhs->pattern_type != rhs->pattern_type) {
    return false;
  }
  // pattern_value
  if (lhs->pattern_value != rhs->pattern_value) {
    return false;
  }
  // only_track
  if (lhs->only_track != rhs->only_track) {
    return false;
  }
  // same_goal
  if (lhs->same_goal != rhs->same_goal) {
    return false;
  }
  // pose_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pose_frame), &(rhs->pose_frame)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose2D__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // offset
  if (!geometry_msgs__msg__Pose2D__are_equal(
      &(lhs->offset), &(rhs->offset)))
  {
    return false;
  }
  // bar_length
  if (lhs->bar_length != rhs->bar_length) {
    return false;
  }
  // bar_distance
  if (lhs->bar_distance != rhs->bar_distance) {
    return false;
  }
  // shelf_leg_asymmetry_x
  if (lhs->shelf_leg_asymmetry_x != rhs->shelf_leg_asymmetry_x) {
    return false;
  }
  // tolerance
  if (lhs->tolerance != rhs->tolerance) {
    return false;
  }
  return true;
}

bool
mir_actions__action__MirMoveBase_Goal__copy(
  const mir_actions__action__MirMoveBase_Goal * input,
  mir_actions__action__MirMoveBase_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // move_task
  output->move_task = input->move_task;
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->target_pose), &(output->target_pose)))
  {
    return false;
  }
  // goal_dist_threshold
  output->goal_dist_threshold = input->goal_dist_threshold;
  // goal_orientation_threshold
  output->goal_orientation_threshold = input->goal_orientation_threshold;
  // path
  if (!nav_msgs__msg__Path__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // max_plan_time
  output->max_plan_time = input->max_plan_time;
  // clear_costmaps
  output->clear_costmaps = input->clear_costmaps;
  // pause_command
  output->pause_command = input->pause_command;
  // continue_command
  output->continue_command = input->continue_command;
  // yaw
  output->yaw = input->yaw;
  // collision_detection
  output->collision_detection = input->collision_detection;
  // collision_avoidance
  output->collision_avoidance = input->collision_avoidance;
  // disable_collision_check_dist
  output->disable_collision_check_dist = input->disable_collision_check_dist;
  // max_linear_speed
  output->max_linear_speed = input->max_linear_speed;
  // max_rotational_speed
  output->max_rotational_speed = input->max_rotational_speed;
  // pid_dist_offset
  output->pid_dist_offset = input->pid_dist_offset;
  // target_offset
  output->target_offset = input->target_offset;
  // only_collision_detection
  output->only_collision_detection = input->only_collision_detection;
  // timeout
  output->timeout = input->timeout;
  // pattern_type
  output->pattern_type = input->pattern_type;
  // pattern_value
  output->pattern_value = input->pattern_value;
  // only_track
  output->only_track = input->only_track;
  // same_goal
  output->same_goal = input->same_goal;
  // pose_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->pose_frame), &(output->pose_frame)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose2D__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // offset
  if (!geometry_msgs__msg__Pose2D__copy(
      &(input->offset), &(output->offset)))
  {
    return false;
  }
  // bar_length
  output->bar_length = input->bar_length;
  // bar_distance
  output->bar_distance = input->bar_distance;
  // shelf_leg_asymmetry_x
  output->shelf_leg_asymmetry_x = input->shelf_leg_asymmetry_x;
  // tolerance
  output->tolerance = input->tolerance;
  return true;
}

mir_actions__action__MirMoveBase_Goal *
mir_actions__action__MirMoveBase_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_Goal * msg = (mir_actions__action__MirMoveBase_Goal *)allocator.allocate(sizeof(mir_actions__action__MirMoveBase_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_actions__action__MirMoveBase_Goal));
  bool success = mir_actions__action__MirMoveBase_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_actions__action__MirMoveBase_Goal__destroy(mir_actions__action__MirMoveBase_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_actions__action__MirMoveBase_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_actions__action__MirMoveBase_Goal__Sequence__init(mir_actions__action__MirMoveBase_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_Goal * data = NULL;

  if (size) {
    data = (mir_actions__action__MirMoveBase_Goal *)allocator.zero_allocate(size, sizeof(mir_actions__action__MirMoveBase_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_actions__action__MirMoveBase_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_actions__action__MirMoveBase_Goal__fini(&data[i - 1]);
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
mir_actions__action__MirMoveBase_Goal__Sequence__fini(mir_actions__action__MirMoveBase_Goal__Sequence * array)
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
      mir_actions__action__MirMoveBase_Goal__fini(&array->data[i]);
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

mir_actions__action__MirMoveBase_Goal__Sequence *
mir_actions__action__MirMoveBase_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_Goal__Sequence * array = (mir_actions__action__MirMoveBase_Goal__Sequence *)allocator.allocate(sizeof(mir_actions__action__MirMoveBase_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_actions__action__MirMoveBase_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_actions__action__MirMoveBase_Goal__Sequence__destroy(mir_actions__action__MirMoveBase_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_actions__action__MirMoveBase_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_actions__action__MirMoveBase_Goal__Sequence__are_equal(const mir_actions__action__MirMoveBase_Goal__Sequence * lhs, const mir_actions__action__MirMoveBase_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_actions__action__MirMoveBase_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_actions__action__MirMoveBase_Goal__Sequence__copy(
  const mir_actions__action__MirMoveBase_Goal__Sequence * input,
  mir_actions__action__MirMoveBase_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_actions__action__MirMoveBase_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_actions__action__MirMoveBase_Goal * data =
      (mir_actions__action__MirMoveBase_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_actions__action__MirMoveBase_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_actions__action__MirMoveBase_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_actions__action__MirMoveBase_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `end_pose`
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `pose`
// already included above
// #include "geometry_msgs/msg/detail/pose2_d__functions.h"
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
mir_actions__action__MirMoveBase_Result__init(mir_actions__action__MirMoveBase_Result * msg)
{
  if (!msg) {
    return false;
  }
  // end_state
  // end_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->end_pose)) {
    mir_actions__action__MirMoveBase_Result__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose2D__init(&msg->pose)) {
    mir_actions__action__MirMoveBase_Result__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    mir_actions__action__MirMoveBase_Result__fini(msg);
    return false;
  }
  return true;
}

void
mir_actions__action__MirMoveBase_Result__fini(mir_actions__action__MirMoveBase_Result * msg)
{
  if (!msg) {
    return;
  }
  // end_state
  // end_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->end_pose);
  // pose
  geometry_msgs__msg__Pose2D__fini(&msg->pose);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
mir_actions__action__MirMoveBase_Result__are_equal(const mir_actions__action__MirMoveBase_Result * lhs, const mir_actions__action__MirMoveBase_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // end_state
  if (lhs->end_state != rhs->end_state) {
    return false;
  }
  // end_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->end_pose), &(rhs->end_pose)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose2D__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
mir_actions__action__MirMoveBase_Result__copy(
  const mir_actions__action__MirMoveBase_Result * input,
  mir_actions__action__MirMoveBase_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // end_state
  output->end_state = input->end_state;
  // end_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->end_pose), &(output->end_pose)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose2D__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

mir_actions__action__MirMoveBase_Result *
mir_actions__action__MirMoveBase_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_Result * msg = (mir_actions__action__MirMoveBase_Result *)allocator.allocate(sizeof(mir_actions__action__MirMoveBase_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_actions__action__MirMoveBase_Result));
  bool success = mir_actions__action__MirMoveBase_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_actions__action__MirMoveBase_Result__destroy(mir_actions__action__MirMoveBase_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_actions__action__MirMoveBase_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_actions__action__MirMoveBase_Result__Sequence__init(mir_actions__action__MirMoveBase_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_Result * data = NULL;

  if (size) {
    data = (mir_actions__action__MirMoveBase_Result *)allocator.zero_allocate(size, sizeof(mir_actions__action__MirMoveBase_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_actions__action__MirMoveBase_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_actions__action__MirMoveBase_Result__fini(&data[i - 1]);
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
mir_actions__action__MirMoveBase_Result__Sequence__fini(mir_actions__action__MirMoveBase_Result__Sequence * array)
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
      mir_actions__action__MirMoveBase_Result__fini(&array->data[i]);
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

mir_actions__action__MirMoveBase_Result__Sequence *
mir_actions__action__MirMoveBase_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_Result__Sequence * array = (mir_actions__action__MirMoveBase_Result__Sequence *)allocator.allocate(sizeof(mir_actions__action__MirMoveBase_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_actions__action__MirMoveBase_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_actions__action__MirMoveBase_Result__Sequence__destroy(mir_actions__action__MirMoveBase_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_actions__action__MirMoveBase_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_actions__action__MirMoveBase_Result__Sequence__are_equal(const mir_actions__action__MirMoveBase_Result__Sequence * lhs, const mir_actions__action__MirMoveBase_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_actions__action__MirMoveBase_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_actions__action__MirMoveBase_Result__Sequence__copy(
  const mir_actions__action__MirMoveBase_Result__Sequence * input,
  mir_actions__action__MirMoveBase_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_actions__action__MirMoveBase_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_actions__action__MirMoveBase_Result * data =
      (mir_actions__action__MirMoveBase_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_actions__action__MirMoveBase_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_actions__action__MirMoveBase_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_actions__action__MirMoveBase_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `base_position`
// Member `current_goal`
// Member `dist_to_goal`
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `pose`
// already included above
// #include "geometry_msgs/msg/detail/pose2_d__functions.h"

bool
mir_actions__action__MirMoveBase_Feedback__init(mir_actions__action__MirMoveBase_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // state
  // base_position
  if (!geometry_msgs__msg__PoseStamped__init(&msg->base_position)) {
    mir_actions__action__MirMoveBase_Feedback__fini(msg);
    return false;
  }
  // current_goal
  if (!geometry_msgs__msg__PoseStamped__init(&msg->current_goal)) {
    mir_actions__action__MirMoveBase_Feedback__fini(msg);
    return false;
  }
  // dist_to_goal
  if (!geometry_msgs__msg__PoseStamped__init(&msg->dist_to_goal)) {
    mir_actions__action__MirMoveBase_Feedback__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose2D__init(&msg->pose)) {
    mir_actions__action__MirMoveBase_Feedback__fini(msg);
    return false;
  }
  // marker_inversion
  return true;
}

void
mir_actions__action__MirMoveBase_Feedback__fini(mir_actions__action__MirMoveBase_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // state
  // base_position
  geometry_msgs__msg__PoseStamped__fini(&msg->base_position);
  // current_goal
  geometry_msgs__msg__PoseStamped__fini(&msg->current_goal);
  // dist_to_goal
  geometry_msgs__msg__PoseStamped__fini(&msg->dist_to_goal);
  // pose
  geometry_msgs__msg__Pose2D__fini(&msg->pose);
  // marker_inversion
}

bool
mir_actions__action__MirMoveBase_Feedback__are_equal(const mir_actions__action__MirMoveBase_Feedback * lhs, const mir_actions__action__MirMoveBase_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // base_position
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->base_position), &(rhs->base_position)))
  {
    return false;
  }
  // current_goal
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->current_goal), &(rhs->current_goal)))
  {
    return false;
  }
  // dist_to_goal
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->dist_to_goal), &(rhs->dist_to_goal)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose2D__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // marker_inversion
  if (lhs->marker_inversion != rhs->marker_inversion) {
    return false;
  }
  return true;
}

bool
mir_actions__action__MirMoveBase_Feedback__copy(
  const mir_actions__action__MirMoveBase_Feedback * input,
  mir_actions__action__MirMoveBase_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  output->state = input->state;
  // base_position
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->base_position), &(output->base_position)))
  {
    return false;
  }
  // current_goal
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->current_goal), &(output->current_goal)))
  {
    return false;
  }
  // dist_to_goal
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->dist_to_goal), &(output->dist_to_goal)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose2D__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // marker_inversion
  output->marker_inversion = input->marker_inversion;
  return true;
}

mir_actions__action__MirMoveBase_Feedback *
mir_actions__action__MirMoveBase_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_Feedback * msg = (mir_actions__action__MirMoveBase_Feedback *)allocator.allocate(sizeof(mir_actions__action__MirMoveBase_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_actions__action__MirMoveBase_Feedback));
  bool success = mir_actions__action__MirMoveBase_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_actions__action__MirMoveBase_Feedback__destroy(mir_actions__action__MirMoveBase_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_actions__action__MirMoveBase_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_actions__action__MirMoveBase_Feedback__Sequence__init(mir_actions__action__MirMoveBase_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_Feedback * data = NULL;

  if (size) {
    data = (mir_actions__action__MirMoveBase_Feedback *)allocator.zero_allocate(size, sizeof(mir_actions__action__MirMoveBase_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_actions__action__MirMoveBase_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_actions__action__MirMoveBase_Feedback__fini(&data[i - 1]);
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
mir_actions__action__MirMoveBase_Feedback__Sequence__fini(mir_actions__action__MirMoveBase_Feedback__Sequence * array)
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
      mir_actions__action__MirMoveBase_Feedback__fini(&array->data[i]);
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

mir_actions__action__MirMoveBase_Feedback__Sequence *
mir_actions__action__MirMoveBase_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_Feedback__Sequence * array = (mir_actions__action__MirMoveBase_Feedback__Sequence *)allocator.allocate(sizeof(mir_actions__action__MirMoveBase_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_actions__action__MirMoveBase_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_actions__action__MirMoveBase_Feedback__Sequence__destroy(mir_actions__action__MirMoveBase_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_actions__action__MirMoveBase_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_actions__action__MirMoveBase_Feedback__Sequence__are_equal(const mir_actions__action__MirMoveBase_Feedback__Sequence * lhs, const mir_actions__action__MirMoveBase_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_actions__action__MirMoveBase_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_actions__action__MirMoveBase_Feedback__Sequence__copy(
  const mir_actions__action__MirMoveBase_Feedback__Sequence * input,
  mir_actions__action__MirMoveBase_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_actions__action__MirMoveBase_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_actions__action__MirMoveBase_Feedback * data =
      (mir_actions__action__MirMoveBase_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_actions__action__MirMoveBase_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_actions__action__MirMoveBase_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_actions__action__MirMoveBase_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "mir_actions/action/detail/mir_move_base__functions.h"

bool
mir_actions__action__MirMoveBase_SendGoal_Request__init(mir_actions__action__MirMoveBase_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mir_actions__action__MirMoveBase_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!mir_actions__action__MirMoveBase_Goal__init(&msg->goal)) {
    mir_actions__action__MirMoveBase_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
mir_actions__action__MirMoveBase_SendGoal_Request__fini(mir_actions__action__MirMoveBase_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  mir_actions__action__MirMoveBase_Goal__fini(&msg->goal);
}

bool
mir_actions__action__MirMoveBase_SendGoal_Request__are_equal(const mir_actions__action__MirMoveBase_SendGoal_Request * lhs, const mir_actions__action__MirMoveBase_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!mir_actions__action__MirMoveBase_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
mir_actions__action__MirMoveBase_SendGoal_Request__copy(
  const mir_actions__action__MirMoveBase_SendGoal_Request * input,
  mir_actions__action__MirMoveBase_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!mir_actions__action__MirMoveBase_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

mir_actions__action__MirMoveBase_SendGoal_Request *
mir_actions__action__MirMoveBase_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_SendGoal_Request * msg = (mir_actions__action__MirMoveBase_SendGoal_Request *)allocator.allocate(sizeof(mir_actions__action__MirMoveBase_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_actions__action__MirMoveBase_SendGoal_Request));
  bool success = mir_actions__action__MirMoveBase_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_actions__action__MirMoveBase_SendGoal_Request__destroy(mir_actions__action__MirMoveBase_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_actions__action__MirMoveBase_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_actions__action__MirMoveBase_SendGoal_Request__Sequence__init(mir_actions__action__MirMoveBase_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_SendGoal_Request * data = NULL;

  if (size) {
    data = (mir_actions__action__MirMoveBase_SendGoal_Request *)allocator.zero_allocate(size, sizeof(mir_actions__action__MirMoveBase_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_actions__action__MirMoveBase_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_actions__action__MirMoveBase_SendGoal_Request__fini(&data[i - 1]);
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
mir_actions__action__MirMoveBase_SendGoal_Request__Sequence__fini(mir_actions__action__MirMoveBase_SendGoal_Request__Sequence * array)
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
      mir_actions__action__MirMoveBase_SendGoal_Request__fini(&array->data[i]);
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

mir_actions__action__MirMoveBase_SendGoal_Request__Sequence *
mir_actions__action__MirMoveBase_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_SendGoal_Request__Sequence * array = (mir_actions__action__MirMoveBase_SendGoal_Request__Sequence *)allocator.allocate(sizeof(mir_actions__action__MirMoveBase_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_actions__action__MirMoveBase_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_actions__action__MirMoveBase_SendGoal_Request__Sequence__destroy(mir_actions__action__MirMoveBase_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_actions__action__MirMoveBase_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_actions__action__MirMoveBase_SendGoal_Request__Sequence__are_equal(const mir_actions__action__MirMoveBase_SendGoal_Request__Sequence * lhs, const mir_actions__action__MirMoveBase_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_actions__action__MirMoveBase_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_actions__action__MirMoveBase_SendGoal_Request__Sequence__copy(
  const mir_actions__action__MirMoveBase_SendGoal_Request__Sequence * input,
  mir_actions__action__MirMoveBase_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_actions__action__MirMoveBase_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_actions__action__MirMoveBase_SendGoal_Request * data =
      (mir_actions__action__MirMoveBase_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_actions__action__MirMoveBase_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_actions__action__MirMoveBase_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_actions__action__MirMoveBase_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
mir_actions__action__MirMoveBase_SendGoal_Response__init(mir_actions__action__MirMoveBase_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mir_actions__action__MirMoveBase_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
mir_actions__action__MirMoveBase_SendGoal_Response__fini(mir_actions__action__MirMoveBase_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
mir_actions__action__MirMoveBase_SendGoal_Response__are_equal(const mir_actions__action__MirMoveBase_SendGoal_Response * lhs, const mir_actions__action__MirMoveBase_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
mir_actions__action__MirMoveBase_SendGoal_Response__copy(
  const mir_actions__action__MirMoveBase_SendGoal_Response * input,
  mir_actions__action__MirMoveBase_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

mir_actions__action__MirMoveBase_SendGoal_Response *
mir_actions__action__MirMoveBase_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_SendGoal_Response * msg = (mir_actions__action__MirMoveBase_SendGoal_Response *)allocator.allocate(sizeof(mir_actions__action__MirMoveBase_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_actions__action__MirMoveBase_SendGoal_Response));
  bool success = mir_actions__action__MirMoveBase_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_actions__action__MirMoveBase_SendGoal_Response__destroy(mir_actions__action__MirMoveBase_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_actions__action__MirMoveBase_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_actions__action__MirMoveBase_SendGoal_Response__Sequence__init(mir_actions__action__MirMoveBase_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_SendGoal_Response * data = NULL;

  if (size) {
    data = (mir_actions__action__MirMoveBase_SendGoal_Response *)allocator.zero_allocate(size, sizeof(mir_actions__action__MirMoveBase_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_actions__action__MirMoveBase_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_actions__action__MirMoveBase_SendGoal_Response__fini(&data[i - 1]);
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
mir_actions__action__MirMoveBase_SendGoal_Response__Sequence__fini(mir_actions__action__MirMoveBase_SendGoal_Response__Sequence * array)
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
      mir_actions__action__MirMoveBase_SendGoal_Response__fini(&array->data[i]);
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

mir_actions__action__MirMoveBase_SendGoal_Response__Sequence *
mir_actions__action__MirMoveBase_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_SendGoal_Response__Sequence * array = (mir_actions__action__MirMoveBase_SendGoal_Response__Sequence *)allocator.allocate(sizeof(mir_actions__action__MirMoveBase_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_actions__action__MirMoveBase_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_actions__action__MirMoveBase_SendGoal_Response__Sequence__destroy(mir_actions__action__MirMoveBase_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_actions__action__MirMoveBase_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_actions__action__MirMoveBase_SendGoal_Response__Sequence__are_equal(const mir_actions__action__MirMoveBase_SendGoal_Response__Sequence * lhs, const mir_actions__action__MirMoveBase_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_actions__action__MirMoveBase_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_actions__action__MirMoveBase_SendGoal_Response__Sequence__copy(
  const mir_actions__action__MirMoveBase_SendGoal_Response__Sequence * input,
  mir_actions__action__MirMoveBase_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_actions__action__MirMoveBase_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_actions__action__MirMoveBase_SendGoal_Response * data =
      (mir_actions__action__MirMoveBase_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_actions__action__MirMoveBase_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_actions__action__MirMoveBase_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_actions__action__MirMoveBase_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
mir_actions__action__MirMoveBase_GetResult_Request__init(mir_actions__action__MirMoveBase_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mir_actions__action__MirMoveBase_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
mir_actions__action__MirMoveBase_GetResult_Request__fini(mir_actions__action__MirMoveBase_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
mir_actions__action__MirMoveBase_GetResult_Request__are_equal(const mir_actions__action__MirMoveBase_GetResult_Request * lhs, const mir_actions__action__MirMoveBase_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
mir_actions__action__MirMoveBase_GetResult_Request__copy(
  const mir_actions__action__MirMoveBase_GetResult_Request * input,
  mir_actions__action__MirMoveBase_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

mir_actions__action__MirMoveBase_GetResult_Request *
mir_actions__action__MirMoveBase_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_GetResult_Request * msg = (mir_actions__action__MirMoveBase_GetResult_Request *)allocator.allocate(sizeof(mir_actions__action__MirMoveBase_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_actions__action__MirMoveBase_GetResult_Request));
  bool success = mir_actions__action__MirMoveBase_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_actions__action__MirMoveBase_GetResult_Request__destroy(mir_actions__action__MirMoveBase_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_actions__action__MirMoveBase_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_actions__action__MirMoveBase_GetResult_Request__Sequence__init(mir_actions__action__MirMoveBase_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_GetResult_Request * data = NULL;

  if (size) {
    data = (mir_actions__action__MirMoveBase_GetResult_Request *)allocator.zero_allocate(size, sizeof(mir_actions__action__MirMoveBase_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_actions__action__MirMoveBase_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_actions__action__MirMoveBase_GetResult_Request__fini(&data[i - 1]);
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
mir_actions__action__MirMoveBase_GetResult_Request__Sequence__fini(mir_actions__action__MirMoveBase_GetResult_Request__Sequence * array)
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
      mir_actions__action__MirMoveBase_GetResult_Request__fini(&array->data[i]);
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

mir_actions__action__MirMoveBase_GetResult_Request__Sequence *
mir_actions__action__MirMoveBase_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_GetResult_Request__Sequence * array = (mir_actions__action__MirMoveBase_GetResult_Request__Sequence *)allocator.allocate(sizeof(mir_actions__action__MirMoveBase_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_actions__action__MirMoveBase_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_actions__action__MirMoveBase_GetResult_Request__Sequence__destroy(mir_actions__action__MirMoveBase_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_actions__action__MirMoveBase_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_actions__action__MirMoveBase_GetResult_Request__Sequence__are_equal(const mir_actions__action__MirMoveBase_GetResult_Request__Sequence * lhs, const mir_actions__action__MirMoveBase_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_actions__action__MirMoveBase_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_actions__action__MirMoveBase_GetResult_Request__Sequence__copy(
  const mir_actions__action__MirMoveBase_GetResult_Request__Sequence * input,
  mir_actions__action__MirMoveBase_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_actions__action__MirMoveBase_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_actions__action__MirMoveBase_GetResult_Request * data =
      (mir_actions__action__MirMoveBase_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_actions__action__MirMoveBase_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_actions__action__MirMoveBase_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_actions__action__MirMoveBase_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "mir_actions/action/detail/mir_move_base__functions.h"

bool
mir_actions__action__MirMoveBase_GetResult_Response__init(mir_actions__action__MirMoveBase_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!mir_actions__action__MirMoveBase_Result__init(&msg->result)) {
    mir_actions__action__MirMoveBase_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
mir_actions__action__MirMoveBase_GetResult_Response__fini(mir_actions__action__MirMoveBase_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  mir_actions__action__MirMoveBase_Result__fini(&msg->result);
}

bool
mir_actions__action__MirMoveBase_GetResult_Response__are_equal(const mir_actions__action__MirMoveBase_GetResult_Response * lhs, const mir_actions__action__MirMoveBase_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!mir_actions__action__MirMoveBase_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
mir_actions__action__MirMoveBase_GetResult_Response__copy(
  const mir_actions__action__MirMoveBase_GetResult_Response * input,
  mir_actions__action__MirMoveBase_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!mir_actions__action__MirMoveBase_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

mir_actions__action__MirMoveBase_GetResult_Response *
mir_actions__action__MirMoveBase_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_GetResult_Response * msg = (mir_actions__action__MirMoveBase_GetResult_Response *)allocator.allocate(sizeof(mir_actions__action__MirMoveBase_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_actions__action__MirMoveBase_GetResult_Response));
  bool success = mir_actions__action__MirMoveBase_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_actions__action__MirMoveBase_GetResult_Response__destroy(mir_actions__action__MirMoveBase_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_actions__action__MirMoveBase_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_actions__action__MirMoveBase_GetResult_Response__Sequence__init(mir_actions__action__MirMoveBase_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_GetResult_Response * data = NULL;

  if (size) {
    data = (mir_actions__action__MirMoveBase_GetResult_Response *)allocator.zero_allocate(size, sizeof(mir_actions__action__MirMoveBase_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_actions__action__MirMoveBase_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_actions__action__MirMoveBase_GetResult_Response__fini(&data[i - 1]);
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
mir_actions__action__MirMoveBase_GetResult_Response__Sequence__fini(mir_actions__action__MirMoveBase_GetResult_Response__Sequence * array)
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
      mir_actions__action__MirMoveBase_GetResult_Response__fini(&array->data[i]);
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

mir_actions__action__MirMoveBase_GetResult_Response__Sequence *
mir_actions__action__MirMoveBase_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_GetResult_Response__Sequence * array = (mir_actions__action__MirMoveBase_GetResult_Response__Sequence *)allocator.allocate(sizeof(mir_actions__action__MirMoveBase_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_actions__action__MirMoveBase_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_actions__action__MirMoveBase_GetResult_Response__Sequence__destroy(mir_actions__action__MirMoveBase_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_actions__action__MirMoveBase_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_actions__action__MirMoveBase_GetResult_Response__Sequence__are_equal(const mir_actions__action__MirMoveBase_GetResult_Response__Sequence * lhs, const mir_actions__action__MirMoveBase_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_actions__action__MirMoveBase_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_actions__action__MirMoveBase_GetResult_Response__Sequence__copy(
  const mir_actions__action__MirMoveBase_GetResult_Response__Sequence * input,
  mir_actions__action__MirMoveBase_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_actions__action__MirMoveBase_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_actions__action__MirMoveBase_GetResult_Response * data =
      (mir_actions__action__MirMoveBase_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_actions__action__MirMoveBase_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_actions__action__MirMoveBase_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_actions__action__MirMoveBase_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "mir_actions/action/detail/mir_move_base__functions.h"

bool
mir_actions__action__MirMoveBase_FeedbackMessage__init(mir_actions__action__MirMoveBase_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mir_actions__action__MirMoveBase_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!mir_actions__action__MirMoveBase_Feedback__init(&msg->feedback)) {
    mir_actions__action__MirMoveBase_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
mir_actions__action__MirMoveBase_FeedbackMessage__fini(mir_actions__action__MirMoveBase_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  mir_actions__action__MirMoveBase_Feedback__fini(&msg->feedback);
}

bool
mir_actions__action__MirMoveBase_FeedbackMessage__are_equal(const mir_actions__action__MirMoveBase_FeedbackMessage * lhs, const mir_actions__action__MirMoveBase_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!mir_actions__action__MirMoveBase_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
mir_actions__action__MirMoveBase_FeedbackMessage__copy(
  const mir_actions__action__MirMoveBase_FeedbackMessage * input,
  mir_actions__action__MirMoveBase_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!mir_actions__action__MirMoveBase_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

mir_actions__action__MirMoveBase_FeedbackMessage *
mir_actions__action__MirMoveBase_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_FeedbackMessage * msg = (mir_actions__action__MirMoveBase_FeedbackMessage *)allocator.allocate(sizeof(mir_actions__action__MirMoveBase_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_actions__action__MirMoveBase_FeedbackMessage));
  bool success = mir_actions__action__MirMoveBase_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_actions__action__MirMoveBase_FeedbackMessage__destroy(mir_actions__action__MirMoveBase_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_actions__action__MirMoveBase_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_actions__action__MirMoveBase_FeedbackMessage__Sequence__init(mir_actions__action__MirMoveBase_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_FeedbackMessage * data = NULL;

  if (size) {
    data = (mir_actions__action__MirMoveBase_FeedbackMessage *)allocator.zero_allocate(size, sizeof(mir_actions__action__MirMoveBase_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_actions__action__MirMoveBase_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_actions__action__MirMoveBase_FeedbackMessage__fini(&data[i - 1]);
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
mir_actions__action__MirMoveBase_FeedbackMessage__Sequence__fini(mir_actions__action__MirMoveBase_FeedbackMessage__Sequence * array)
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
      mir_actions__action__MirMoveBase_FeedbackMessage__fini(&array->data[i]);
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

mir_actions__action__MirMoveBase_FeedbackMessage__Sequence *
mir_actions__action__MirMoveBase_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_actions__action__MirMoveBase_FeedbackMessage__Sequence * array = (mir_actions__action__MirMoveBase_FeedbackMessage__Sequence *)allocator.allocate(sizeof(mir_actions__action__MirMoveBase_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_actions__action__MirMoveBase_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_actions__action__MirMoveBase_FeedbackMessage__Sequence__destroy(mir_actions__action__MirMoveBase_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_actions__action__MirMoveBase_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_actions__action__MirMoveBase_FeedbackMessage__Sequence__are_equal(const mir_actions__action__MirMoveBase_FeedbackMessage__Sequence * lhs, const mir_actions__action__MirMoveBase_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_actions__action__MirMoveBase_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_actions__action__MirMoveBase_FeedbackMessage__Sequence__copy(
  const mir_actions__action__MirMoveBase_FeedbackMessage__Sequence * input,
  mir_actions__action__MirMoveBase_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_actions__action__MirMoveBase_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_actions__action__MirMoveBase_FeedbackMessage * data =
      (mir_actions__action__MirMoveBase_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_actions__action__MirMoveBase_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_actions__action__MirMoveBase_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_actions__action__MirMoveBase_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
