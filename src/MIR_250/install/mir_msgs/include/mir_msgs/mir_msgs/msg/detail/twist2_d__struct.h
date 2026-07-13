// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/Twist2D.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__TWIST2_D__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__TWIST2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Twist2D in the package mir_msgs.
typedef struct mir_msgs__msg__Twist2D
{
  float linear;
  float angular;
} mir_msgs__msg__Twist2D;

// Struct for a sequence of mir_msgs__msg__Twist2D.
typedef struct mir_msgs__msg__Twist2D__Sequence
{
  mir_msgs__msg__Twist2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__Twist2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__TWIST2_D__STRUCT_H_
