// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/PlanSegment.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PLAN_SEGMENT__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__PLAN_SEGMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/PlanSegment in the package mir_msgs.
typedef struct mir_msgs__msg__PlanSegment
{
  bool forward_motion;
  int32_t start_idx;
  double length;
  double remaining_length;
  geometry_msgs__msg__PoseStamped__Sequence path;
} mir_msgs__msg__PlanSegment;

// Struct for a sequence of mir_msgs__msg__PlanSegment.
typedef struct mir_msgs__msg__PlanSegment__Sequence
{
  mir_msgs__msg__PlanSegment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__PlanSegment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__PLAN_SEGMENT__STRUCT_H_
