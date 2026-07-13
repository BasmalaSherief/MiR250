// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdc21x0:msg/Encoders.idl
// generated code does not contain a copyright notice

#ifndef SDC21X0__MSG__DETAIL__ENCODERS__STRUCT_H_
#define SDC21X0__MSG__DETAIL__ENCODERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Encoders in the package sdc21x0.
typedef struct sdc21x0__msg__Encoders
{
  /// Time since last encoder update.
  float time_delta;
  /// Encoder counts (absolute or relative)
  int32_t left_wheel;
  /// Encoder counts (absolute or relative)
  int32_t right_wheel;
} sdc21x0__msg__Encoders;

// Struct for a sequence of sdc21x0__msg__Encoders.
typedef struct sdc21x0__msg__Encoders__Sequence
{
  sdc21x0__msg__Encoders * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdc21x0__msg__Encoders__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDC21X0__MSG__DETAIL__ENCODERS__STRUCT_H_
