// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/WebPath.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__WEB_PATH__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__WEB_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/WebPath in the package mir_msgs.
typedef struct mir_msgs__msg__WebPath
{
  int32_t seq;
  rosidl_runtime_c__float__Sequence x;
  rosidl_runtime_c__float__Sequence y;
} mir_msgs__msg__WebPath;

// Struct for a sequence of mir_msgs__msg__WebPath.
typedef struct mir_msgs__msg__WebPath__Sequence
{
  mir_msgs__msg__WebPath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__WebPath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__WEB_PATH__STRUCT_H_
