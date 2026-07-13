// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mir_msgs:msg/GripperState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mir_msgs/msg/detail/gripper_state__rosidl_typesupport_introspection_c.h"
#include "mir_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mir_msgs/msg/detail/gripper_state__functions.h"
#include "mir_msgs/msg/detail/gripper_state__struct.h"


// Include directives for member types
// Member `state_string`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_msgs__msg__GripperState__rosidl_typesupport_introspection_c__GripperState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_msgs__msg__GripperState__init(message_memory);
}

void mir_msgs__msg__GripperState__rosidl_typesupport_introspection_c__GripperState_fini_function(void * message_memory)
{
  mir_msgs__msg__GripperState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mir_msgs__msg__GripperState__rosidl_typesupport_introspection_c__GripperState_message_member_array[3] = {
  {
    "state_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__GripperState, state_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__GripperState, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "closed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__GripperState, closed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_msgs__msg__GripperState__rosidl_typesupport_introspection_c__GripperState_message_members = {
  "mir_msgs__msg",  // message namespace
  "GripperState",  // message name
  3,  // number of fields
  sizeof(mir_msgs__msg__GripperState),
  mir_msgs__msg__GripperState__rosidl_typesupport_introspection_c__GripperState_message_member_array,  // message members
  mir_msgs__msg__GripperState__rosidl_typesupport_introspection_c__GripperState_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_msgs__msg__GripperState__rosidl_typesupport_introspection_c__GripperState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_msgs__msg__GripperState__rosidl_typesupport_introspection_c__GripperState_message_type_support_handle = {
  0,
  &mir_msgs__msg__GripperState__rosidl_typesupport_introspection_c__GripperState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, GripperState)() {
  if (!mir_msgs__msg__GripperState__rosidl_typesupport_introspection_c__GripperState_message_type_support_handle.typesupport_identifier) {
    mir_msgs__msg__GripperState__rosidl_typesupport_introspection_c__GripperState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_msgs__msg__GripperState__rosidl_typesupport_introspection_c__GripperState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
