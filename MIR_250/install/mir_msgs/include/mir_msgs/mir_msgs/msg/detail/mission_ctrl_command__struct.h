// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/MissionCtrlCommand.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__MISSION_CTRL_COMMAND__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__MISSION_CTRL_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CMD_GET_STATUS'.
enum
{
  mir_msgs__msg__MissionCtrlCommand__CMD_GET_STATUS = 0
};

/// Constant 'CMD_WAIT_POS_LOCK'.
enum
{
  mir_msgs__msg__MissionCtrlCommand__CMD_WAIT_POS_LOCK = 1
};

/// Constant 'CMD_WAIT_AREA_LOCK'.
enum
{
  mir_msgs__msg__MissionCtrlCommand__CMD_WAIT_AREA_LOCK = 2
};

/// Constant 'CMD_CONTINUE'.
enum
{
  mir_msgs__msg__MissionCtrlCommand__CMD_CONTINUE = 3
};

/// Constant 'CMD_LOAD_MISSION'.
enum
{
  mir_msgs__msg__MissionCtrlCommand__CMD_LOAD_MISSION = 4
};

// Include directives for member types
// Member 'description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MissionCtrlCommand in the package mir_msgs.
typedef struct mir_msgs__msg__MissionCtrlCommand
{
  rosidl_runtime_c__String description;
  int32_t cmd;
  int32_t mission_id;
} mir_msgs__msg__MissionCtrlCommand;

// Struct for a sequence of mir_msgs__msg__MissionCtrlCommand.
typedef struct mir_msgs__msg__MissionCtrlCommand__Sequence
{
  mir_msgs__msg__MissionCtrlCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__MissionCtrlCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__MISSION_CTRL_COMMAND__STRUCT_H_
