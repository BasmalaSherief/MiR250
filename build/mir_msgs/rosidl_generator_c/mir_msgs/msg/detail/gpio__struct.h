// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/Gpio.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__GPIO__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__GPIO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POWERBOARD_GPIO'.
enum
{
  mir_msgs__msg__Gpio__POWERBOARD_GPIO = 0
};

/// Constant 'POWERBOARD_RESET_SWITCH_LED'.
enum
{
  mir_msgs__msg__Gpio__POWERBOARD_RESET_SWITCH_LED = 1
};

/// Constant 'PENDANT_INPUT'.
enum
{
  mir_msgs__msg__Gpio__PENDANT_INPUT = 5
};

/// Constant 'AUTO_MODE_SWITCH'.
enum
{
  mir_msgs__msg__Gpio__AUTO_MODE_SWITCH = 10
};

/// Constant 'MANUAL_MODE_SWITCH'.
enum
{
  mir_msgs__msg__Gpio__MANUAL_MODE_SWITCH = 11
};

/// Struct defined in msg/Gpio in the package mir_msgs.
typedef struct mir_msgs__msg__Gpio
{
  uint8_t ioport;
  uint8_t dat;
} mir_msgs__msg__Gpio;

// Struct for a sequence of mir_msgs__msg__Gpio.
typedef struct mir_msgs__msg__Gpio__Sequence
{
  mir_msgs__msg__Gpio * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__Gpio__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__GPIO__STRUCT_H_
