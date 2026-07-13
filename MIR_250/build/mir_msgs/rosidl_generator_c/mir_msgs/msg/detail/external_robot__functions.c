// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_msgs:msg/ExternalRobot.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/external_robot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
// Member `footprint`
// Member `ip`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
// Member `extrapolated_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
mir_msgs__msg__ExternalRobot__init(mir_msgs__msg__ExternalRobot * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mir_msgs__msg__ExternalRobot__fini(msg);
    return false;
  }
  // id
  // type_id
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    mir_msgs__msg__ExternalRobot__fini(msg);
    return false;
  }
  // robot_length
  // robot_width
  // footprint
  if (!rosidl_runtime_c__String__init(&msg->footprint)) {
    mir_msgs__msg__ExternalRobot__fini(msg);
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__init(&msg->ip)) {
    mir_msgs__msg__ExternalRobot__fini(msg);
    return false;
  }
  // map_id
  // priority
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    mir_msgs__msg__ExternalRobot__fini(msg);
    return false;
  }
  // extrapolated_pose
  if (!geometry_msgs__msg__Pose__init(&msg->extrapolated_pose)) {
    mir_msgs__msg__ExternalRobot__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    mir_msgs__msg__ExternalRobot__fini(msg);
    return false;
  }
  return true;
}

void
mir_msgs__msg__ExternalRobot__fini(mir_msgs__msg__ExternalRobot * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // type_id
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // robot_length
  // robot_width
  // footprint
  rosidl_runtime_c__String__fini(&msg->footprint);
  // ip
  rosidl_runtime_c__String__fini(&msg->ip);
  // map_id
  // priority
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // extrapolated_pose
  geometry_msgs__msg__Pose__fini(&msg->extrapolated_pose);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
}

bool
mir_msgs__msg__ExternalRobot__are_equal(const mir_msgs__msg__ExternalRobot * lhs, const mir_msgs__msg__ExternalRobot * rhs)
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
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // type_id
  if (lhs->type_id != rhs->type_id) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // robot_length
  if (lhs->robot_length != rhs->robot_length) {
    return false;
  }
  // robot_width
  if (lhs->robot_width != rhs->robot_width) {
    return false;
  }
  // footprint
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->footprint), &(rhs->footprint)))
  {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ip), &(rhs->ip)))
  {
    return false;
  }
  // map_id
  if (lhs->map_id != rhs->map_id) {
    return false;
  }
  // priority
  if (lhs->priority != rhs->priority) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // extrapolated_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->extrapolated_pose), &(rhs->extrapolated_pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  return true;
}

bool
mir_msgs__msg__ExternalRobot__copy(
  const mir_msgs__msg__ExternalRobot * input,
  mir_msgs__msg__ExternalRobot * output)
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
  // id
  output->id = input->id;
  // type_id
  output->type_id = input->type_id;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // robot_length
  output->robot_length = input->robot_length;
  // robot_width
  output->robot_width = input->robot_width;
  // footprint
  if (!rosidl_runtime_c__String__copy(
      &(input->footprint), &(output->footprint)))
  {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__copy(
      &(input->ip), &(output->ip)))
  {
    return false;
  }
  // map_id
  output->map_id = input->map_id;
  // priority
  output->priority = input->priority;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // extrapolated_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->extrapolated_pose), &(output->extrapolated_pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  return true;
}

mir_msgs__msg__ExternalRobot *
mir_msgs__msg__ExternalRobot__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__ExternalRobot * msg = (mir_msgs__msg__ExternalRobot *)allocator.allocate(sizeof(mir_msgs__msg__ExternalRobot), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_msgs__msg__ExternalRobot));
  bool success = mir_msgs__msg__ExternalRobot__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_msgs__msg__ExternalRobot__destroy(mir_msgs__msg__ExternalRobot * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_msgs__msg__ExternalRobot__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_msgs__msg__ExternalRobot__Sequence__init(mir_msgs__msg__ExternalRobot__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__ExternalRobot * data = NULL;

  if (size) {
    data = (mir_msgs__msg__ExternalRobot *)allocator.zero_allocate(size, sizeof(mir_msgs__msg__ExternalRobot), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_msgs__msg__ExternalRobot__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_msgs__msg__ExternalRobot__fini(&data[i - 1]);
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
mir_msgs__msg__ExternalRobot__Sequence__fini(mir_msgs__msg__ExternalRobot__Sequence * array)
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
      mir_msgs__msg__ExternalRobot__fini(&array->data[i]);
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

mir_msgs__msg__ExternalRobot__Sequence *
mir_msgs__msg__ExternalRobot__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_msgs__msg__ExternalRobot__Sequence * array = (mir_msgs__msg__ExternalRobot__Sequence *)allocator.allocate(sizeof(mir_msgs__msg__ExternalRobot__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_msgs__msg__ExternalRobot__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_msgs__msg__ExternalRobot__Sequence__destroy(mir_msgs__msg__ExternalRobot__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_msgs__msg__ExternalRobot__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_msgs__msg__ExternalRobot__Sequence__are_equal(const mir_msgs__msg__ExternalRobot__Sequence * lhs, const mir_msgs__msg__ExternalRobot__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_msgs__msg__ExternalRobot__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_msgs__msg__ExternalRobot__Sequence__copy(
  const mir_msgs__msg__ExternalRobot__Sequence * input,
  mir_msgs__msg__ExternalRobot__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_msgs__msg__ExternalRobot);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_msgs__msg__ExternalRobot * data =
      (mir_msgs__msg__ExternalRobot *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_msgs__msg__ExternalRobot__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_msgs__msg__ExternalRobot__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_msgs__msg__ExternalRobot__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
