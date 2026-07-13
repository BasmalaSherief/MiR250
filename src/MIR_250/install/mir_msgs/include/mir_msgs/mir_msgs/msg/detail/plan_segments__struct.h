// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/PlanSegments.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PLAN_SEGMENTS__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__PLAN_SEGMENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'p_segments'
#include "mir_msgs/msg/detail/plan_segment__struct.h"

/// Struct defined in msg/PlanSegments in the package mir_msgs.
typedef struct mir_msgs__msg__PlanSegments
{
  mir_msgs__msg__PlanSegment__Sequence p_segments;
} mir_msgs__msg__PlanSegments;

// Struct for a sequence of mir_msgs__msg__PlanSegments.
typedef struct mir_msgs__msg__PlanSegments__Sequence
{
  mir_msgs__msg__PlanSegments * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__PlanSegments__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__PLAN_SEGMENTS__STRUCT_H_
