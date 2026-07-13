// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/HeightState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__HEIGHT_STATE__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__HEIGHT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state_string'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HeightState in the package mir_msgs.
typedef struct mir_msgs__msg__HeightState
{
  rosidl_runtime_c__String state_string;
  uint8_t state;
  double height;
} mir_msgs__msg__HeightState;

// Struct for a sequence of mir_msgs__msg__HeightState.
typedef struct mir_msgs__msg__HeightState__Sequence
{
  mir_msgs__msg__HeightState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__HeightState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__HEIGHT_STATE__STRUCT_H_
