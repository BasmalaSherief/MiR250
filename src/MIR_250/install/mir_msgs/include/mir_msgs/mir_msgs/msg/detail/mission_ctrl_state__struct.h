// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/MissionCtrlState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__MISSION_CTRL_STATE__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__MISSION_CTRL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATE_IDLE'.
enum
{
  mir_msgs__msg__MissionCtrlState__STATE_IDLE = 0
};

/// Constant 'STATE_WAIT_POS_LOCK'.
enum
{
  mir_msgs__msg__MissionCtrlState__STATE_WAIT_POS_LOCK = 1
};

/// Constant 'STATE_WAIT_AREA_LOCK'.
enum
{
  mir_msgs__msg__MissionCtrlState__STATE_WAIT_AREA_LOCK = 2
};

/// Constant 'STATE_WAIT_MAP_TRANSITION'.
enum
{
  mir_msgs__msg__MissionCtrlState__STATE_WAIT_MAP_TRANSITION = 10
};

/// Constant 'STATE_WAIT_LIFT_START_FLOOR'.
enum
{
  mir_msgs__msg__MissionCtrlState__STATE_WAIT_LIFT_START_FLOOR = 11
};

/// Constant 'STATE_WAIT_LIFT_END_FLOOR'.
enum
{
  mir_msgs__msg__MissionCtrlState__STATE_WAIT_LIFT_END_FLOOR = 12
};

/// Struct defined in msg/MissionCtrlState in the package mir_msgs.
typedef struct mir_msgs__msg__MissionCtrlState
{
  int32_t state;
  int32_t pos_id;
} mir_msgs__msg__MissionCtrlState;

// Struct for a sequence of mir_msgs__msg__MissionCtrlState.
typedef struct mir_msgs__msg__MissionCtrlState__Sequence
{
  mir_msgs__msg__MissionCtrlState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__MissionCtrlState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__MISSION_CTRL_STATE__STRUCT_H_
