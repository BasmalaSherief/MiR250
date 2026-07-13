// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/PalletLifterStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PALLET_LIFTER_STATUS__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__PALLET_LIFTER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PALLET_LIFT_STATE_DISABLED'.
enum
{
  mir_msgs__msg__PalletLifterStatus__PALLET_LIFT_STATE_DISABLED = 0
};

/// Constant 'PALLET_LIFT_STATE_MOVING'.
enum
{
  mir_msgs__msg__PalletLifterStatus__PALLET_LIFT_STATE_MOVING = 1
};

/// Constant 'PALLET_LIFT_STATE_DOWN'.
enum
{
  mir_msgs__msg__PalletLifterStatus__PALLET_LIFT_STATE_DOWN = 2
};

/// Constant 'PALLET_LIFT_STATE_UP'.
enum
{
  mir_msgs__msg__PalletLifterStatus__PALLET_LIFT_STATE_UP = 3
};

/// Struct defined in msg/PalletLifterStatus in the package mir_msgs.
typedef struct mir_msgs__msg__PalletLifterStatus
{
  bool is_enabled;
  uint8_t state;
} mir_msgs__msg__PalletLifterStatus;

// Struct for a sequence of mir_msgs__msg__PalletLifterStatus.
typedef struct mir_msgs__msg__PalletLifterStatus__Sequence
{
  mir_msgs__msg__PalletLifterStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__PalletLifterStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__PALLET_LIFTER_STATUS__STRUCT_H_
