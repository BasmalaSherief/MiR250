// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/IOs.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__I_OS__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__I_OS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DONE'.
enum
{
  mir_msgs__msg__IOs__DONE = 0
};

/// Constant 'STARTED'.
enum
{
  mir_msgs__msg__IOs__STARTED = 1
};

/// Constant 'ERROR'.
enum
{
  mir_msgs__msg__IOs__ERROR = 3
};

// Include directives for member types
// Member 'module_guid'
// Member 'ip'
// Member 'error'
#include "rosidl_runtime_c/string.h"
// Member 'input_state'
// Member 'output_state'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/IOs in the package mir_msgs.
typedef struct mir_msgs__msg__IOs
{
  rosidl_runtime_c__String module_guid;
  bool connected;
  uint8_t status;
  int8_t num_inputs;
  rosidl_runtime_c__boolean__Sequence input_state;
  int8_t num_outputs;
  rosidl_runtime_c__boolean__Sequence output_state;
  rosidl_runtime_c__String ip;
  rosidl_runtime_c__String error;
} mir_msgs__msg__IOs;

// Struct for a sequence of mir_msgs__msg__IOs.
typedef struct mir_msgs__msg__IOs__Sequence
{
  mir_msgs__msg__IOs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__IOs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__I_OS__STRUCT_H_
