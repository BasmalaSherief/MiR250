// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/BrakeState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__BRAKE_STATE__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__BRAKE_STATE__STRUCT_H_

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

/// Struct defined in msg/BrakeState in the package mir_msgs.
typedef struct mir_msgs__msg__BrakeState
{
  rosidl_runtime_c__String state_string;
  uint8_t state;
  bool braked;
} mir_msgs__msg__BrakeState;

// Struct for a sequence of mir_msgs__msg__BrakeState.
typedef struct mir_msgs__msg__BrakeState__Sequence
{
  mir_msgs__msg__BrakeState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__BrakeState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__BRAKE_STATE__STRUCT_H_
