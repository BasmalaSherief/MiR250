// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mir_msgs:msg/Trolley.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mir_msgs/msg/detail/trolley__rosidl_typesupport_introspection_c.h"
#include "mir_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mir_msgs/msg/detail/trolley__functions.h"
#include "mir_msgs/msg/detail/trolley__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mir_msgs__msg__Trolley__rosidl_typesupport_introspection_c__Trolley_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_msgs__msg__Trolley__init(message_memory);
}

void mir_msgs__msg__Trolley__rosidl_typesupport_introspection_c__Trolley_fini_function(void * message_memory)
{
  mir_msgs__msg__Trolley__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mir_msgs__msg__Trolley__rosidl_typesupport_introspection_c__Trolley_message_member_array[5] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__Trolley, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__Trolley, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__Trolley, width),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__Trolley, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_locked_wheels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__Trolley, offset_locked_wheels),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_msgs__msg__Trolley__rosidl_typesupport_introspection_c__Trolley_message_members = {
  "mir_msgs__msg",  // message namespace
  "Trolley",  // message name
  5,  // number of fields
  sizeof(mir_msgs__msg__Trolley),
  mir_msgs__msg__Trolley__rosidl_typesupport_introspection_c__Trolley_message_member_array,  // message members
  mir_msgs__msg__Trolley__rosidl_typesupport_introspection_c__Trolley_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_msgs__msg__Trolley__rosidl_typesupport_introspection_c__Trolley_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_msgs__msg__Trolley__rosidl_typesupport_introspection_c__Trolley_message_type_support_handle = {
  0,
  &mir_msgs__msg__Trolley__rosidl_typesupport_introspection_c__Trolley_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, Trolley)() {
  if (!mir_msgs__msg__Trolley__rosidl_typesupport_introspection_c__Trolley_message_type_support_handle.typesupport_identifier) {
    mir_msgs__msg__Trolley__rosidl_typesupport_introspection_c__Trolley_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_msgs__msg__Trolley__rosidl_typesupport_introspection_c__Trolley_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
