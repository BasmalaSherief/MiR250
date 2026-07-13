// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/Pendant.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PENDANT__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__PENDANT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Pendant in the package mir_msgs.
typedef struct mir_msgs__msg__Pendant
{
  float x;
  float y;
  uint8_t gpio_bits;
} mir_msgs__msg__Pendant;

// Struct for a sequence of mir_msgs__msg__Pendant.
typedef struct mir_msgs__msg__Pendant__Sequence
{
  mir_msgs__msg__Pendant * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__Pendant__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__PENDANT__STRUCT_H_
