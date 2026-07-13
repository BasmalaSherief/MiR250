// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/ExternalRobots.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOTS__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOTS__STRUCT_H_

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
// Member 'robots'
#include "mir_msgs/msg/detail/external_robot__struct.h"

/// Struct defined in msg/ExternalRobots in the package mir_msgs.
typedef struct mir_msgs__msg__ExternalRobots
{
  std_msgs__msg__Header header;
  mir_msgs__msg__ExternalRobot__Sequence robots;
} mir_msgs__msg__ExternalRobots;

// Struct for a sequence of mir_msgs__msg__ExternalRobots.
typedef struct mir_msgs__msg__ExternalRobots__Sequence
{
  mir_msgs__msg__ExternalRobots * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__ExternalRobots__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOTS__STRUCT_H_
