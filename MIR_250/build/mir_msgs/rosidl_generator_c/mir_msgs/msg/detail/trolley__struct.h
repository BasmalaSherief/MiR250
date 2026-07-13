// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/Trolley.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__TROLLEY__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__TROLLEY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Trolley in the package mir_msgs.
typedef struct mir_msgs__msg__Trolley
{
  int32_t id;
  float length;
  float width;
  float height;
  float offset_locked_wheels;
} mir_msgs__msg__Trolley;

// Struct for a sequence of mir_msgs__msg__Trolley.
typedef struct mir_msgs__msg__Trolley__Sequence
{
  mir_msgs__msg__Trolley * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__Trolley__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__TROLLEY__STRUCT_H_
