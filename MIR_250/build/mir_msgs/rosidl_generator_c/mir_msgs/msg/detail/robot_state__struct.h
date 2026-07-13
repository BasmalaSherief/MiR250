// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROBOT_STATE_NONE'.
enum
{
  mir_msgs__msg__RobotState__ROBOT_STATE_NONE = 0
};

/// Constant 'ROBOT_STATE_STARTING'.
enum
{
  mir_msgs__msg__RobotState__ROBOT_STATE_STARTING = 1
};

/// Constant 'ROBOT_STATE_SHUTTINGDOWN'.
enum
{
  mir_msgs__msg__RobotState__ROBOT_STATE_SHUTTINGDOWN = 2
};

/// Constant 'ROBOT_STATE_READY'.
/**
  * ready to execute
 */
enum
{
  mir_msgs__msg__RobotState__ROBOT_STATE_READY = 3
};

/// Constant 'ROBOT_STATE_PAUSE'.
/**
  * pause from executing
 */
enum
{
  mir_msgs__msg__RobotState__ROBOT_STATE_PAUSE = 4
};

/// Constant 'ROBOT_STATE_EXECUTING'.
/**
  * when running in mission/taxa/bus
 */
enum
{
  mir_msgs__msg__RobotState__ROBOT_STATE_EXECUTING = 5
};

/// Constant 'ROBOT_STATE_ABORTED'.
enum
{
  mir_msgs__msg__RobotState__ROBOT_STATE_ABORTED = 6
};

/// Constant 'ROBOT_STATE_COMPLETED'.
/**
  * done executing
 */
enum
{
  mir_msgs__msg__RobotState__ROBOT_STATE_COMPLETED = 7
};

/// Constant 'ROBOT_STATE_DOCKED'.
/**
  * in the dock and charging the batteries
 */
enum
{
  mir_msgs__msg__RobotState__ROBOT_STATE_DOCKED = 8
};

/// Constant 'ROBOT_STATE_DOCKING'.
enum
{
  mir_msgs__msg__RobotState__ROBOT_STATE_DOCKING = 9
};

/// Constant 'ROBOT_STATE_EMERGENCYSTOP'.
/**
  * the robot has emg-stop activated
 */
enum
{
  mir_msgs__msg__RobotState__ROBOT_STATE_EMERGENCYSTOP = 10
};

/// Constant 'ROBOT_STATE_MANUALCONTROL'.
/**
  * a pause state, where the robot can move
 */
enum
{
  mir_msgs__msg__RobotState__ROBOT_STATE_MANUALCONTROL = 11
};

/// Constant 'ROBOT_STATE_ERROR'.
/**
  * a general error state, requires a error handle
 */
enum
{
  mir_msgs__msg__RobotState__ROBOT_STATE_ERROR = 12
};

// Include directives for member types
// Member 'robot_state_string'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RobotState in the package mir_msgs.
/**
  * The robot has to be in a predefined state
 */
typedef struct mir_msgs__msg__RobotState
{
  uint8_t robot_state;
  rosidl_runtime_c__String robot_state_string;
} mir_msgs__msg__RobotState;

// Struct for a sequence of mir_msgs__msg__RobotState.
typedef struct mir_msgs__msg__RobotState__Sequence
{
  mir_msgs__msg__RobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__RobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
