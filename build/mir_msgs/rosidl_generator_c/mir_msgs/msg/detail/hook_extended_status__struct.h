// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/HookExtendedStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__HOOK_EXTENDED_STATUS__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__HOOK_EXTENDED_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'brake'
#include "mir_msgs/msg/detail/brake_state__struct.h"
// Member 'gripper'
#include "mir_msgs/msg/detail/gripper_state__struct.h"
// Member 'height'
#include "mir_msgs/msg/detail/height_state__struct.h"
// Member 'qr_marker_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HookExtendedStatus in the package mir_msgs.
typedef struct mir_msgs__msg__HookExtendedStatus
{
  bool available;
  mir_msgs__msg__BrakeState brake;
  mir_msgs__msg__GripperState gripper;
  mir_msgs__msg__HeightState height;
  float angle;
  rosidl_runtime_c__String qr_marker_name;
} mir_msgs__msg__HookExtendedStatus;

// Struct for a sequence of mir_msgs__msg__HookExtendedStatus.
typedef struct mir_msgs__msg__HookExtendedStatus__Sequence
{
  mir_msgs__msg__HookExtendedStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__HookExtendedStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__HOOK_EXTENDED_STATUS__STRUCT_H_
