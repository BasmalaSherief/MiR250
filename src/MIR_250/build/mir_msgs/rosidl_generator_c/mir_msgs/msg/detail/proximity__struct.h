// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/Proximity.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PROXIMITY__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__PROXIMITY__STRUCT_H_

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
// Member 'ranges'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Proximity in the package mir_msgs.
typedef struct mir_msgs__msg__Proximity
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__uint16__Sequence ranges;
} mir_msgs__msg__Proximity;

// Struct for a sequence of mir_msgs__msg__Proximity.
typedef struct mir_msgs__msg__Proximity__Sequence
{
  mir_msgs__msg__Proximity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__Proximity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__PROXIMITY__STRUCT_H_
