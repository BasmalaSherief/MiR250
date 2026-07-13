// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mir_msgs:msg/WebPath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mir_msgs/msg/detail/web_path__rosidl_typesupport_introspection_c.h"
#include "mir_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mir_msgs/msg/detail/web_path__functions.h"
#include "mir_msgs/msg/detail/web_path__struct.h"


// Include directives for member types
// Member `x`
// Member `y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__WebPath_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_msgs__msg__WebPath__init(message_memory);
}

void mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__WebPath_fini_function(void * message_memory)
{
  mir_msgs__msg__WebPath__fini(message_memory);
}

size_t mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__size_function__WebPath__x(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__get_const_function__WebPath__x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__get_function__WebPath__x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__fetch_function__WebPath__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__get_const_function__WebPath__x(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__assign_function__WebPath__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__get_function__WebPath__x(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__resize_function__WebPath__x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__size_function__WebPath__y(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__get_const_function__WebPath__y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__get_function__WebPath__y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__fetch_function__WebPath__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__get_const_function__WebPath__y(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__assign_function__WebPath__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__get_function__WebPath__y(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__resize_function__WebPath__y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__WebPath_message_member_array[3] = {
  {
    "seq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__WebPath, seq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__WebPath, x),  // bytes offset in struct
    NULL,  // default value
    mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__size_function__WebPath__x,  // size() function pointer
    mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__get_const_function__WebPath__x,  // get_const(index) function pointer
    mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__get_function__WebPath__x,  // get(index) function pointer
    mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__fetch_function__WebPath__x,  // fetch(index, &value) function pointer
    mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__assign_function__WebPath__x,  // assign(index, value) function pointer
    mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__resize_function__WebPath__x  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__WebPath, y),  // bytes offset in struct
    NULL,  // default value
    mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__size_function__WebPath__y,  // size() function pointer
    mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__get_const_function__WebPath__y,  // get_const(index) function pointer
    mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__get_function__WebPath__y,  // get(index) function pointer
    mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__fetch_function__WebPath__y,  // fetch(index, &value) function pointer
    mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__assign_function__WebPath__y,  // assign(index, value) function pointer
    mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__resize_function__WebPath__y  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__WebPath_message_members = {
  "mir_msgs__msg",  // message namespace
  "WebPath",  // message name
  3,  // number of fields
  sizeof(mir_msgs__msg__WebPath),
  mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__WebPath_message_member_array,  // message members
  mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__WebPath_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__WebPath_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__WebPath_message_type_support_handle = {
  0,
  &mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__WebPath_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, WebPath)() {
  if (!mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__WebPath_message_type_support_handle.typesupport_identifier) {
    mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__WebPath_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_msgs__msg__WebPath__rosidl_typesupport_introspection_c__WebPath_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
