// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/SafetyStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__SAFETY_STATUS__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__SAFETY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MUTE_FRONT_RIGHT'.
/**
  * Defines for filling out the mute_mask
 */
enum
{
  mir_msgs__msg__SafetyStatus__MUTE_FRONT_RIGHT = 1
};

/// Constant 'MUTE_FRONT_CENTER'.
enum
{
  mir_msgs__msg__SafetyStatus__MUTE_FRONT_CENTER = 2
};

/// Constant 'MUTE_FRONT_LEFT'.
enum
{
  mir_msgs__msg__SafetyStatus__MUTE_FRONT_LEFT = 4
};

/// Constant 'MUTE_LEFT_CENTER'.
enum
{
  mir_msgs__msg__SafetyStatus__MUTE_LEFT_CENTER = 8
};

/// Constant 'MUTE_REAR_LEFT'.
enum
{
  mir_msgs__msg__SafetyStatus__MUTE_REAR_LEFT = 16
};

/// Constant 'MUTE_REAR_CENTER'.
enum
{
  mir_msgs__msg__SafetyStatus__MUTE_REAR_CENTER = 32
};

/// Constant 'MUTE_REAR_RIGHT'.
enum
{
  mir_msgs__msg__SafetyStatus__MUTE_REAR_RIGHT = 64
};

/// Constant 'MUTE_RIGHT_CENTER'.
enum
{
  mir_msgs__msg__SafetyStatus__MUTE_RIGHT_CENTER = 128
};

/// Constant 'MUTE_FRONT'.
enum
{
  mir_msgs__msg__SafetyStatus__MUTE_FRONT = 7
};

/// Constant 'MUTE_LEFT'.
enum
{
  mir_msgs__msg__SafetyStatus__MUTE_LEFT = 28
};

/// Constant 'MUTE_REAR'.
enum
{
  mir_msgs__msg__SafetyStatus__MUTE_REAR = 112
};

/// Constant 'MUTE_RIGHT'.
enum
{
  mir_msgs__msg__SafetyStatus__MUTE_RIGHT = 193
};

/// Constant 'MUTE_SIDES'.
enum
{
  mir_msgs__msg__SafetyStatus__MUTE_SIDES = 221
};

/// Constant 'MUTE_ALL'.
enum
{
  mir_msgs__msg__SafetyStatus__MUTE_ALL = 255
};

/// Struct defined in msg/SafetyStatus in the package mir_msgs.
typedef struct mir_msgs__msg__SafetyStatus
{
  bool is_connected;
  bool is_firmware_ok;
  int32_t firmware_version;
  bool in_protective_stop;
  bool in_emergency_stop;
  bool sto_feedback;
  bool is_restart_required;
  bool is_safety_muted;
  double max_lin_speed;
  double max_rot_speed;
  uint8_t mute_mask;
  uint8_t partial_mute_mask;
  bool is_limited_speed_active;
  bool is_lifter_down;
  bool in_sleep_mode;
  bool in_manual_mode;
  bool is_manual_mode_restart_required;
} mir_msgs__msg__SafetyStatus;

// Struct for a sequence of mir_msgs__msg__SafetyStatus.
typedef struct mir_msgs__msg__SafetyStatus__Sequence
{
  mir_msgs__msg__SafetyStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__SafetyStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__SAFETY_STATUS__STRUCT_H_
