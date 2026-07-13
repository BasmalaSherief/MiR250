// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/ResourceState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__RESOURCE_STATE__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__RESOURCE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROBOT_POSITION'.
enum
{
  mir_msgs__msg__ResourceState__ROBOT_POSITION = 0ul
};

/// Constant 'STAGING_POSITION'.
enum
{
  mir_msgs__msg__ResourceState__STAGING_POSITION = 1ul
};

/// Constant 'CHARGING_STATION'.
enum
{
  mir_msgs__msg__ResourceState__CHARGING_STATION = 2ul
};

/// Constant 'AREA'.
enum
{
  mir_msgs__msg__ResourceState__AREA = 3ul
};

// Include directives for member types
// Member 'assigned'
// Member 'queue'
// Member 'name'
// Member 'guid'
#include "rosidl_runtime_c/string.h"
// Member 'collision_point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/ResourceState in the package mir_msgs.
typedef struct mir_msgs__msg__ResourceState
{
  /// A token that is true whenever the resource is busy.
  rosidl_runtime_c__String__Sequence assigned;
  /// The resource type
  uint32_t type;
  /// The index from the global path in which the robot gets into the position
  uint32_t path_idx;
  /// The distance from the robot to the resource
  float distance;
  /// The collision point with the resource
  geometry_msgs__msg__Point collision_point;
  /// The queue for a resource. It's a list of robots ips.
  rosidl_runtime_c__String__Sequence queue;
  /// The name of the resource
  rosidl_runtime_c__String name;
  /// The guid of the resource
  rosidl_runtime_c__String guid;
} mir_msgs__msg__ResourceState;

// Struct for a sequence of mir_msgs__msg__ResourceState.
typedef struct mir_msgs__msg__ResourceState__Sequence
{
  mir_msgs__msg__ResourceState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__ResourceState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__RESOURCE_STATE__STRUCT_H_
