// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/Events.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__EVENTS__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__EVENTS__STRUCT_H_

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
// Member 'events'
#include "mir_msgs/msg/detail/event__struct.h"

/// Struct defined in msg/Events in the package mir_msgs.
typedef struct mir_msgs__msg__Events
{
  std_msgs__msg__Header header;
  mir_msgs__msg__Event__Sequence events;
} mir_msgs__msg__Events;

// Struct for a sequence of mir_msgs__msg__Events.
typedef struct mir_msgs__msg__Events__Sequence
{
  mir_msgs__msg__Events * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__Events__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__EVENTS__STRUCT_H_
