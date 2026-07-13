// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/Device.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__DEVICE__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__DEVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'serial'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Device in the package mir_msgs.
typedef struct mir_msgs__msg__Device
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String serial;
} mir_msgs__msg__Device;

// Struct for a sequence of mir_msgs__msg__Device.
typedef struct mir_msgs__msg__Device__Sequence
{
  mir_msgs__msg__Device * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__Device__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__DEVICE__STRUCT_H_
