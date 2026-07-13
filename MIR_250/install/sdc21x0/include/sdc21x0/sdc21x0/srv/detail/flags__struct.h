// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdc21x0:srv/Flags.idl
// generated code does not contain a copyright notice

#ifndef SDC21X0__SRV__DETAIL__FLAGS__STRUCT_H_
#define SDC21X0__SRV__DETAIL__FLAGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Flags in the package sdc21x0.
typedef struct sdc21x0__srv__Flags_Request
{
  int32_t digital_port;
} sdc21x0__srv__Flags_Request;

// Struct for a sequence of sdc21x0__srv__Flags_Request.
typedef struct sdc21x0__srv__Flags_Request__Sequence
{
  sdc21x0__srv__Flags_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdc21x0__srv__Flags_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Flags in the package sdc21x0.
typedef struct sdc21x0__srv__Flags_Response
{
  bool response;
} sdc21x0__srv__Flags_Response;

// Struct for a sequence of sdc21x0__srv__Flags_Response.
typedef struct sdc21x0__srv__Flags_Response__Sequence
{
  sdc21x0__srv__Flags_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdc21x0__srv__Flags_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDC21X0__SRV__DETAIL__FLAGS__STRUCT_H_
