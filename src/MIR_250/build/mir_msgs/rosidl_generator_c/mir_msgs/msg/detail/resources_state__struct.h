// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/ResourcesState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__RESOURCES_STATE__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__RESOURCES_STATE__STRUCT_H_

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
// Member 'resources'
#include "mir_msgs/msg/detail/resource_state__struct.h"

/// Struct defined in msg/ResourcesState in the package mir_msgs.
typedef struct mir_msgs__msg__ResourcesState
{
  std_msgs__msg__Header header;
  mir_msgs__msg__ResourceState__Sequence resources;
} mir_msgs__msg__ResourcesState;

// Struct for a sequence of mir_msgs__msg__ResourcesState.
typedef struct mir_msgs__msg__ResourcesState__Sequence
{
  mir_msgs__msg__ResourcesState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__ResourcesState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__RESOURCES_STATE__STRUCT_H_
