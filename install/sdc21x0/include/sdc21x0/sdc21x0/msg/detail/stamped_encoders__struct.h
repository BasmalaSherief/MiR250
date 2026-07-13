// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdc21x0:msg/StampedEncoders.idl
// generated code does not contain a copyright notice

#ifndef SDC21X0__MSG__DETAIL__STAMPED_ENCODERS__STRUCT_H_
#define SDC21X0__MSG__DETAIL__STAMPED_ENCODERS__STRUCT_H_

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
// Member 'encoders'
#include "sdc21x0/msg/detail/encoders__struct.h"

/// Struct defined in msg/StampedEncoders in the package sdc21x0.
typedef struct sdc21x0__msg__StampedEncoders
{
  std_msgs__msg__Header header;
  sdc21x0__msg__Encoders encoders;
} sdc21x0__msg__StampedEncoders;

// Struct for a sequence of sdc21x0__msg__StampedEncoders.
typedef struct sdc21x0__msg__StampedEncoders__Sequence
{
  sdc21x0__msg__StampedEncoders * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdc21x0__msg__StampedEncoders__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDC21X0__MSG__DETAIL__STAMPED_ENCODERS__STRUCT_H_
