// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mir_msgs:msg/HookExtendedStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mir_msgs/msg/detail/hook_extended_status__rosidl_typesupport_introspection_c.h"
#include "mir_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mir_msgs/msg/detail/hook_extended_status__functions.h"
#include "mir_msgs/msg/detail/hook_extended_status__struct.h"


// Include directives for member types
// Member `brake`
#include "mir_msgs/msg/brake_state.h"
// Member `brake`
#include "mir_msgs/msg/detail/brake_state__rosidl_typesupport_introspection_c.h"
// Member `gripper`
#include "mir_msgs/msg/gripper_state.h"
// Member `gripper`
#include "mir_msgs/msg/detail/gripper_state__rosidl_typesupport_introspection_c.h"
// Member `height`
#include "mir_msgs/msg/height_state.h"
// Member `height`
#include "mir_msgs/msg/detail/height_state__rosidl_typesupport_introspection_c.h"
// Member `qr_marker_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_msgs__msg__HookExtendedStatus__rosidl_typesupport_introspection_c__HookExtendedStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_msgs__msg__HookExtendedStatus__init(message_memory);
}

void mir_msgs__msg__HookExtendedStatus__rosidl_typesupport_introspection_c__HookExtendedStatus_fini_function(void * message_memory)
{
  mir_msgs__msg__HookExtendedStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mir_msgs__msg__HookExtendedStatus__rosidl_typesupport_introspection_c__HookExtendedStatus_message_member_array[6] = {
  {
    "available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__HookExtendedStatus, available),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brake",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__HookExtendedStatus, brake),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gripper",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__HookExtendedStatus, gripper),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__HookExtendedStatus, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__HookExtendedStatus, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "qr_marker_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__HookExtendedStatus, qr_marker_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_msgs__msg__HookExtendedStatus__rosidl_typesupport_introspection_c__HookExtendedStatus_message_members = {
  "mir_msgs__msg",  // message namespace
  "HookExtendedStatus",  // message name
  6,  // number of fields
  sizeof(mir_msgs__msg__HookExtendedStatus),
  mir_msgs__msg__HookExtendedStatus__rosidl_typesupport_introspection_c__HookExtendedStatus_message_member_array,  // message members
  mir_msgs__msg__HookExtendedStatus__rosidl_typesupport_introspection_c__HookExtendedStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_msgs__msg__HookExtendedStatus__rosidl_typesupport_introspection_c__HookExtendedStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_msgs__msg__HookExtendedStatus__rosidl_typesupport_introspection_c__HookExtendedStatus_message_type_support_handle = {
  0,
  &mir_msgs__msg__HookExtendedStatus__rosidl_typesupport_introspection_c__HookExtendedStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, HookExtendedStatus)() {
  mir_msgs__msg__HookExtendedStatus__rosidl_typesupport_introspection_c__HookExtendedStatus_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, BrakeState)();
  mir_msgs__msg__HookExtendedStatus__rosidl_typesupport_introspection_c__HookExtendedStatus_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, GripperState)();
  mir_msgs__msg__HookExtendedStatus__rosidl_typesupport_introspection_c__HookExtendedStatus_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, HeightState)();
  if (!mir_msgs__msg__HookExtendedStatus__rosidl_typesupport_introspection_c__HookExtendedStatus_message_type_support_handle.typesupport_identifier) {
    mir_msgs__msg__HookExtendedStatus__rosidl_typesupport_introspection_c__HookExtendedStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_msgs__msg__HookExtendedStatus__rosidl_typesupport_introspection_c__HookExtendedStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
