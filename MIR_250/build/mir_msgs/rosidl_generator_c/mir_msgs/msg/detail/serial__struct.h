// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/Serial.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__SERIAL__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__SERIAL__STRUCT_H_

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
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Serial in the package mir_msgs.
typedef struct mir_msgs__msg__Serial
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String data;
} mir_msgs__msg__Serial;

// Struct for a sequence of mir_msgs__msg__Serial.
typedef struct mir_msgs__msg__Serial__Sequence
{
  mir_msgs__msg__Serial * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__Serial__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__SERIAL__STRUCT_H_
