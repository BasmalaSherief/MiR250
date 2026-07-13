// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/Error.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__ERROR__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HARDWARE_ERROR'.
enum
{
  mir_msgs__msg__Error__HARDWARE_ERROR = 0l
};

/// Constant 'CPU_LOAD_ERROR'.
enum
{
  mir_msgs__msg__Error__CPU_LOAD_ERROR = 100l
};

/// Constant 'MEMORY_ERROR'.
enum
{
  mir_msgs__msg__Error__MEMORY_ERROR = 200l
};

/// Constant 'ETHERNET_ERROR'.
enum
{
  mir_msgs__msg__Error__ETHERNET_ERROR = 300l
};

/// Constant 'HDD_ERROR'.
enum
{
  mir_msgs__msg__Error__HDD_ERROR = 400l
};

/// Constant 'BATTERY_ERROR'.
enum
{
  mir_msgs__msg__Error__BATTERY_ERROR = 500l
};

/// Constant 'IMU_ERROR'.
enum
{
  mir_msgs__msg__Error__IMU_ERROR = 600l
};

/// Constant 'MOTOR_ERROR'.
enum
{
  mir_msgs__msg__Error__MOTOR_ERROR = 700l
};

/// Constant 'LASER_ERROR'.
enum
{
  mir_msgs__msg__Error__LASER_ERROR = 800l
};

/// Constant 'CAMERA_ERROR'.
enum
{
  mir_msgs__msg__Error__CAMERA_ERROR = 900l
};

/// Constant 'SAFETY_SYSTEM_ERROR'.
enum
{
  mir_msgs__msg__Error__SAFETY_SYSTEM_ERROR = 1000l
};

/// Constant 'POWERBOARD_ERROR'.
enum
{
  mir_msgs__msg__Error__POWERBOARD_ERROR = 2000l
};

/// Constant 'POWERSUPPLY_ERROR'.
enum
{
  mir_msgs__msg__Error__POWERSUPPLY_ERROR = 2100l
};

/// Constant 'CANBUS_ERROR'.
enum
{
  mir_msgs__msg__Error__CANBUS_ERROR = 2200l
};

/// Constant 'HOOK_ERROR'.
enum
{
  mir_msgs__msg__Error__HOOK_ERROR = 5000l
};

/// Constant 'HOOK_CAMERA_ERROR'.
enum
{
  mir_msgs__msg__Error__HOOK_CAMERA_ERROR = 5100l
};

/// Constant 'HOOK_ACTUATOR_ERROR'.
enum
{
  mir_msgs__msg__Error__HOOK_ACTUATOR_ERROR = 5200l
};

/// Constant 'HOOK_BRAKE_ERROR'.
enum
{
  mir_msgs__msg__Error__HOOK_BRAKE_ERROR = 5300l
};

/// Constant 'HOOK_ENCODER_ERROR'.
enum
{
  mir_msgs__msg__Error__HOOK_ENCODER_ERROR = 5400l
};

/// Constant 'MISSING_ERROR'.
enum
{
  mir_msgs__msg__Error__MISSING_ERROR = 9000l
};

/// Constant 'SOFTWARE_ERROR'.
enum
{
  mir_msgs__msg__Error__SOFTWARE_ERROR = 10000l
};

/// Constant 'MISSION_ERROR'.
enum
{
  mir_msgs__msg__Error__MISSION_ERROR = 10100l
};

/// Constant 'LOCALIZATION_ERROR'.
enum
{
  mir_msgs__msg__Error__LOCALIZATION_ERROR = 10200l
};

/// Constant 'MAPPING_ERROR'.
enum
{
  mir_msgs__msg__Error__MAPPING_ERROR = 10300l
};

/// Constant 'ODOM_FUSION_ERROR'.
enum
{
  mir_msgs__msg__Error__ODOM_FUSION_ERROR = 10400l
};

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'description'
// Member 'module'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Error in the package mir_msgs.
/**
  * Definition of offsets indicating what type an error is
 */
typedef struct mir_msgs__msg__Error
{
  /// Timestamp for when the error occurred
  builtin_interfaces__msg__Time timestamp;
  /// Error code
  int32_t code;
  /// Error description
  rosidl_runtime_c__String description;
  /// Module in which the error occurred
  rosidl_runtime_c__String module;
} mir_msgs__msg__Error;

// Struct for a sequence of mir_msgs__msg__Error.
typedef struct mir_msgs__msg__Error__Sequence
{
  mir_msgs__msg__Error * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__Error__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__ERROR__STRUCT_H_
