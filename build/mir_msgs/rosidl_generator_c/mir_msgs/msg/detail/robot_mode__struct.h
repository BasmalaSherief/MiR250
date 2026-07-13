// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/RobotMode.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__ROBOT_MODE__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__ROBOT_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROBOT_MODE_NONE'.
/**
  * start mode
 */
enum
{
  mir_msgs__msg__RobotMode__ROBOT_MODE_NONE = 0
};

/// Constant 'ROBOT_MODE_MAPPING'.
/**
  * Mapping # in mapping a new map is made
 */
enum
{
  mir_msgs__msg__RobotMode__ROBOT_MODE_MAPPING = 3
};

/// Constant 'ROBOT_MODE_MAPPING_FINALIZING'.
/**
  * in mapping the recorded map is being finalised
 */
enum
{
  mir_msgs__msg__RobotMode__ROBOT_MODE_MAPPING_FINALIZING = 4
};

/// Constant 'ROBOT_MODE_MISSION'.
/**
  * Mission # primary mode when executing a mission (action list)
 */
enum
{
  mir_msgs__msg__RobotMode__ROBOT_MODE_MISSION = 7
};

/// Constant 'ROBOT_MODE_CHANGING'.
/**
  * a transition mode - to say that a transition is in progress
 */
enum
{
  mir_msgs__msg__RobotMode__ROBOT_MODE_CHANGING = 255
};

// Include directives for member types
// Member 'robot_mode_string'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RobotMode in the package mir_msgs.
/**
  * The robot operates in different mode
 */
typedef struct mir_msgs__msg__RobotMode
{
  uint8_t robot_mode;
  rosidl_runtime_c__String robot_mode_string;
} mir_msgs__msg__RobotMode;

// Struct for a sequence of mir_msgs__msg__RobotMode.
typedef struct mir_msgs__msg__RobotMode__Sequence
{
  mir_msgs__msg__RobotMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__RobotMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__ROBOT_MODE__STRUCT_H_
