// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/ChargingState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__CHARGING_STATE__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__CHARGING_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ChargingState in the package mir_msgs.
typedef struct mir_msgs__msg__ChargingState
{
  bool charging_relay;
  double charging_current;
  uint32_t charging_current_raw;
  double last_time_current;
  double charging_voltage;
  uint32_t charging_voltage_raw;
  bool is_voltage_low;
  double last_time_voltage;
} mir_msgs__msg__ChargingState;

// Struct for a sequence of mir_msgs__msg__ChargingState.
typedef struct mir_msgs__msg__ChargingState__Sequence
{
  mir_msgs__msg__ChargingState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__ChargingState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__CHARGING_STATE__STRUCT_H_
