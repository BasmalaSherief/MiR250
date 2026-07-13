// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'errors'
#include "mir_msgs/msg/detail/error__struct.h"
// Member 'footprint'
// Member 'map_id'
// Member 'mission_text'
// Member 'mode_text'
// Member 'robot_name'
// Member 'session_id'
// Member 'software_version'
// Member 'state_text'
// Member 'joystick_web_session_id'
// Member 'mode_key_state'
#include "rosidl_runtime_c/string.h"
// Member 'hook_status'
#include "mir_msgs/msg/detail/hook_status__struct.h"
// Member 'position'
#include "mir_msgs/msg/detail/pose2_d__struct.h"
// Member 'velocity'
#include "mir_msgs/msg/detail/twist2_d__struct.h"
// Member 'user_prompt'
#include "mir_msgs/msg/detail/user_prompt__struct.h"

/// Struct defined in msg/RobotStatus in the package mir_msgs.
typedef struct mir_msgs__msg__RobotStatus
{
  float battery_percentage;
  int32_t battery_time_remaining;
  float battery_voltage;
  float distance_to_next_target;
  mir_msgs__msg__Error__Sequence errors;
  rosidl_runtime_c__String footprint;
  mir_msgs__msg__HookStatus hook_status;
  rosidl_runtime_c__String map_id;
  bool unloaded_map_changes;
  int32_t mission_queue_id;
  rosidl_runtime_c__String mission_text;
  int32_t mode_id;
  rosidl_runtime_c__String mode_text;
  double moved;
  mir_msgs__msg__Pose2D position;
  rosidl_runtime_c__String robot_name;
  rosidl_runtime_c__String session_id;
  rosidl_runtime_c__String software_version;
  uint8_t state_id;
  rosidl_runtime_c__String state_text;
  int32_t uptime;
  mir_msgs__msg__Twist2D velocity;
  mir_msgs__msg__UserPrompt user_prompt;
  bool safety_system_muted;
  bool joystick_low_speed_mode_enabled;
  rosidl_runtime_c__String joystick_web_session_id;
  rosidl_runtime_c__String mode_key_state;
} mir_msgs__msg__RobotStatus;

// Struct for a sequence of mir_msgs__msg__RobotStatus.
typedef struct mir_msgs__msg__RobotStatus__Sequence
{
  mir_msgs__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
