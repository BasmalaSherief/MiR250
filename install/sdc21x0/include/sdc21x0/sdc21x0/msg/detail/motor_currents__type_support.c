// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sdc21x0:msg/MotorCurrents.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sdc21x0/msg/detail/motor_currents__rosidl_typesupport_introspection_c.h"
#include "sdc21x0/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sdc21x0/msg/detail/motor_currents__functions.h"
#include "sdc21x0/msg/detail/motor_currents__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void sdc21x0__msg__MotorCurrents__rosidl_typesupport_introspection_c__MotorCurrents_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sdc21x0__msg__MotorCurrents__init(message_memory);
}

void sdc21x0__msg__MotorCurrents__rosidl_typesupport_introspection_c__MotorCurrents_fini_function(void * message_memory)
{
  sdc21x0__msg__MotorCurrents__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sdc21x0__msg__MotorCurrents__rosidl_typesupport_introspection_c__MotorCurrents_message_member_array[2] = {
  {
    "left_motor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdc21x0__msg__MotorCurrents, left_motor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_motor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdc21x0__msg__MotorCurrents, right_motor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sdc21x0__msg__MotorCurrents__rosidl_typesupport_introspection_c__MotorCurrents_message_members = {
  "sdc21x0__msg",  // message namespace
  "MotorCurrents",  // message name
  2,  // number of fields
  sizeof(sdc21x0__msg__MotorCurrents),
  sdc21x0__msg__MotorCurrents__rosidl_typesupport_introspection_c__MotorCurrents_message_member_array,  // message members
  sdc21x0__msg__MotorCurrents__rosidl_typesupport_introspection_c__MotorCurrents_init_function,  // function to initialize message memory (memory has to be allocated)
  sdc21x0__msg__MotorCurrents__rosidl_typesupport_introspection_c__MotorCurrents_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sdc21x0__msg__MotorCurrents__rosidl_typesupport_introspection_c__MotorCurrents_message_type_support_handle = {
  0,
  &sdc21x0__msg__MotorCurrents__rosidl_typesupport_introspection_c__MotorCurrents_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sdc21x0
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sdc21x0, msg, MotorCurrents)() {
  if (!sdc21x0__msg__MotorCurrents__rosidl_typesupport_introspection_c__MotorCurrents_message_type_support_handle.typesupport_identifier) {
    sdc21x0__msg__MotorCurrents__rosidl_typesupport_introspection_c__MotorCurrents_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sdc21x0__msg__MotorCurrents__rosidl_typesupport_introspection_c__MotorCurrents_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
