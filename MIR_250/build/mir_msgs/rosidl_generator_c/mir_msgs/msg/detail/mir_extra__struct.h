// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/MirExtra.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__MIR_EXTRA__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__MIR_EXTRA__STRUCT_H_

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

/// Struct defined in msg/MirExtra in the package mir_msgs.
/**
  * MirExtra - to publish data on a topic
 */
typedef struct mir_msgs__msg__MirExtra
{
  std_msgs__msg__Header header;
  /// Time since last encoder update.
  float time_delta;
  /// rmp speed from right encoder
  float r_rpm;
  /// rmp speed from left encoder
  float l_rpm;
  /// calc velocity
  float vel;
  /// calculated angle speed
  float ang;
} mir_msgs__msg__MirExtra;

// Struct for a sequence of mir_msgs__msg__MirExtra.
typedef struct mir_msgs__msg__MirExtra__Sequence
{
  mir_msgs__msg__MirExtra * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__MirExtra__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__MIR_EXTRA__STRUCT_H_
