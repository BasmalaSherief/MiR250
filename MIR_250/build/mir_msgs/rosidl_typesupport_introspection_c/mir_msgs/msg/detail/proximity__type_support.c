// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mir_msgs:msg/Proximity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mir_msgs/msg/detail/proximity__rosidl_typesupport_introspection_c.h"
#include "mir_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mir_msgs/msg/detail/proximity__functions.h"
#include "mir_msgs/msg/detail/proximity__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `ranges`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__Proximity_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_msgs__msg__Proximity__init(message_memory);
}

void mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__Proximity_fini_function(void * message_memory)
{
  mir_msgs__msg__Proximity__fini(message_memory);
}

size_t mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__size_function__Proximity__ranges(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__get_const_function__Proximity__ranges(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__get_function__Proximity__ranges(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__fetch_function__Proximity__ranges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__get_const_function__Proximity__ranges(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__assign_function__Proximity__ranges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__get_function__Proximity__ranges(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__resize_function__Proximity__ranges(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__Proximity_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__Proximity, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ranges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__Proximity, ranges),  // bytes offset in struct
    NULL,  // default value
    mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__size_function__Proximity__ranges,  // size() function pointer
    mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__get_const_function__Proximity__ranges,  // get_const(index) function pointer
    mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__get_function__Proximity__ranges,  // get(index) function pointer
    mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__fetch_function__Proximity__ranges,  // fetch(index, &value) function pointer
    mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__assign_function__Proximity__ranges,  // assign(index, value) function pointer
    mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__resize_function__Proximity__ranges  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__Proximity_message_members = {
  "mir_msgs__msg",  // message namespace
  "Proximity",  // message name
  2,  // number of fields
  sizeof(mir_msgs__msg__Proximity),
  mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__Proximity_message_member_array,  // message members
  mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__Proximity_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__Proximity_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__Proximity_message_type_support_handle = {
  0,
  &mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__Proximity_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, Proximity)() {
  mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__Proximity_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__Proximity_message_type_support_handle.typesupport_identifier) {
    mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__Proximity_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_msgs__msg__Proximity__rosidl_typesupport_introspection_c__Proximity_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
