// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/HookStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__HOOK_STATUS__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__HOOK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trolley'
#include "mir_msgs/msg/detail/trolley__struct.h"

/// Struct defined in msg/HookStatus in the package mir_msgs.
typedef struct mir_msgs__msg__HookStatus
{
  bool available;
  float length;
  float height;
  float angle;
  bool braked;
  bool trolley_attached;
  mir_msgs__msg__Trolley trolley;
} mir_msgs__msg__HookStatus;

// Struct for a sequence of mir_msgs__msg__HookStatus.
typedef struct mir_msgs__msg__HookStatus__Sequence
{
  mir_msgs__msg__HookStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__HookStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__HOOK_STATUS__STRUCT_H_
