// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/ExternalRobot.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOT__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIR100'.
enum
{
  mir_msgs__msg__ExternalRobot__MIR100 = 1ul
};

/// Constant 'MIR500'.
enum
{
  mir_msgs__msg__ExternalRobot__MIR500 = 3ul
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'name'
// Member 'footprint'
// Member 'ip'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
// Member 'extrapolated_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/ExternalRobot in the package mir_msgs.
typedef struct mir_msgs__msg__ExternalRobot
{
  std_msgs__msg__Header header;
  uint32_t id;
  uint32_t type_id;
  rosidl_runtime_c__String name;
  double robot_length;
  double robot_width;
  rosidl_runtime_c__String footprint;
  rosidl_runtime_c__String ip;
  uint32_t map_id;
  int32_t priority;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Pose extrapolated_pose;
  geometry_msgs__msg__Twist twist;
} mir_msgs__msg__ExternalRobot;

// Struct for a sequence of mir_msgs__msg__ExternalRobot.
typedef struct mir_msgs__msg__ExternalRobot__Sequence
{
  mir_msgs__msg__ExternalRobot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__ExternalRobot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOT__STRUCT_H_
