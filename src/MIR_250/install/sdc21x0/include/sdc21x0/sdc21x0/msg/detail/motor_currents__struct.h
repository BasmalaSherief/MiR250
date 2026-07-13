// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdc21x0:msg/MotorCurrents.idl
// generated code does not contain a copyright notice

#ifndef SDC21X0__MSG__DETAIL__MOTOR_CURRENTS__STRUCT_H_
#define SDC21X0__MSG__DETAIL__MOTOR_CURRENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorCurrents in the package sdc21x0.
typedef struct sdc21x0__msg__MotorCurrents
{
  float left_motor;
  float right_motor;
} sdc21x0__msg__MotorCurrents;

// Struct for a sequence of sdc21x0__msg__MotorCurrents.
typedef struct sdc21x0__msg__MotorCurrents__Sequence
{
  sdc21x0__msg__MotorCurrents * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdc21x0__msg__MotorCurrents__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDC21X0__MSG__DETAIL__MOTOR_CURRENTS__STRUCT_H_
