// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_msgs:msg/UserPrompt.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__USER_PROMPT__STRUCT_H_
#define MIR_MSGS__MSG__DETAIL__USER_PROMPT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'guid'
// Member 'user_group'
// Member 'question'
// Member 'options'
#include "rosidl_runtime_c/string.h"
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/UserPrompt in the package mir_msgs.
typedef struct mir_msgs__msg__UserPrompt
{
  bool has_request;
  rosidl_runtime_c__String guid;
  rosidl_runtime_c__String user_group;
  rosidl_runtime_c__String question;
  rosidl_runtime_c__String__Sequence options;
  builtin_interfaces__msg__Duration timeout;
} mir_msgs__msg__UserPrompt;

// Struct for a sequence of mir_msgs__msg__UserPrompt.
typedef struct mir_msgs__msg__UserPrompt__Sequence
{
  mir_msgs__msg__UserPrompt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_msgs__msg__UserPrompt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_MSGS__MSG__DETAIL__USER_PROMPT__STRUCT_H_
