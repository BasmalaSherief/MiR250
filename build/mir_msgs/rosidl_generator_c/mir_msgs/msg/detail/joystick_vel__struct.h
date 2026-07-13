// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/JoystickVel.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__JOYSTICK_VEL__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__JOYSTICK_VEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joystick_token'
#include "rosidl_runtime_c/string.h"
// Member 'speed_command'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/JoystickVel in the package mir_msgs.
typedef struct mir_msgs__msg__JoystickVel
{
  rosidl_runtime_c__String joystick_token;
  geometry_msgs__msg__Twist speed_command;
} mir_msgs__msg__JoystickVel;

// Struct for a sequence of mir_msgs__msg__JoystickVel.
typedef struct mir_msgs__msg__JoystickVel__Sequence
{
  mir_msgs__msg__JoystickVel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__JoystickVel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__JOYSTICK_VEL__STRUCT_H_
