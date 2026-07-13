// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PATH__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'poses'
#include "mir_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in msg/Path in the package mir_msgs.
typedef struct mir_msgs__msg__Path
{
  std_msgs__msg__Header header;
  mir_msgs__msg__Pose2D__Sequence poses;
} mir_msgs__msg__Path;

// Struct for a sequence of mir_msgs__msg__Path.
typedef struct mir_msgs__msg__Path__Sequence
{
  mir_msgs__msg__Path * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__Path__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__PATH__STRUCT_H_
