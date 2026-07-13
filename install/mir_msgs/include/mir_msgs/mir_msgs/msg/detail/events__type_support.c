// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mir_msgs:msg/Events.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mir_msgs/msg/detail/events__rosidl_typesupport_introspection_c.h"
#include "mir_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mir_msgs/msg/detail/events__functions.h"
#include "mir_msgs/msg/detail/events__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `events`
#include "mir_msgs/msg/event.h"
// Member `events`
#include "mir_msgs/msg/detail/event__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_msgs__msg__Events__rosidl_typesupport_introspection_c__Events_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_msgs__msg__Events__init(message_memory);
}

void mir_msgs__msg__Events__rosidl_typesupport_introspection_c__Events_fini_function(void * message_memory)
{
  mir_msgs__msg__Events__fini(message_memory);
}

size_t mir_msgs__msg__Events__rosidl_typesupport_introspection_c__size_function__Events__events(
  const void * untyped_member)
{
  const mir_msgs__msg__Event__Sequence * member =
    (const mir_msgs__msg__Event__Sequence *)(untyped_member);
  return member->size;
}

const void * mir_msgs__msg__Events__rosidl_typesupport_introspection_c__get_const_function__Events__events(
  const void * untyped_member, size_t index)
{
  const mir_msgs__msg__Event__Sequence * member =
    (const mir_msgs__msg__Event__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mir_msgs__msg__Events__rosidl_typesupport_introspection_c__get_function__Events__events(
  void * untyped_member, size_t index)
{
  mir_msgs__msg__Event__Sequence * member =
    (mir_msgs__msg__Event__Sequence *)(untyped_member);
  return &member->data[index];
}

void mir_msgs__msg__Events__rosidl_typesupport_introspection_c__fetch_function__Events__events(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mir_msgs__msg__Event * item =
    ((const mir_msgs__msg__Event *)
    mir_msgs__msg__Events__rosidl_typesupport_introspection_c__get_const_function__Events__events(untyped_member, index));
  mir_msgs__msg__Event * value =
    (mir_msgs__msg__Event *)(untyped_value);
  *value = *item;
}

void mir_msgs__msg__Events__rosidl_typesupport_introspection_c__assign_function__Events__events(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mir_msgs__msg__Event * item =
    ((mir_msgs__msg__Event *)
    mir_msgs__msg__Events__rosidl_typesupport_introspection_c__get_function__Events__events(untyped_member, index));
  const mir_msgs__msg__Event * value =
    (const mir_msgs__msg__Event *)(untyped_value);
  *item = *value;
}

bool mir_msgs__msg__Events__rosidl_typesupport_introspection_c__resize_function__Events__events(
  void * untyped_member, size_t size)
{
  mir_msgs__msg__Event__Sequence * member =
    (mir_msgs__msg__Event__Sequence *)(untyped_member);
  mir_msgs__msg__Event__Sequence__fini(member);
  return mir_msgs__msg__Event__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mir_msgs__msg__Events__rosidl_typesupport_introspection_c__Events_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__Events, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "events",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__Events, events),  // bytes offset in struct
    NULL,  // default value
    mir_msgs__msg__Events__rosidl_typesupport_introspection_c__size_function__Events__events,  // size() function pointer
    mir_msgs__msg__Events__rosidl_typesupport_introspection_c__get_const_function__Events__events,  // get_const(index) function pointer
    mir_msgs__msg__Events__rosidl_typesupport_introspection_c__get_function__Events__events,  // get(index) function pointer
    mir_msgs__msg__Events__rosidl_typesupport_introspection_c__fetch_function__Events__events,  // fetch(index, &value) function pointer
    mir_msgs__msg__Events__rosidl_typesupport_introspection_c__assign_function__Events__events,  // assign(index, value) function pointer
    mir_msgs__msg__Events__rosidl_typesupport_introspection_c__resize_function__Events__events  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_msgs__msg__Events__rosidl_typesupport_introspection_c__Events_message_members = {
  "mir_msgs__msg",  // message namespace
  "Events",  // message name
  2,  // number of fields
  sizeof(mir_msgs__msg__Events),
  mir_msgs__msg__Events__rosidl_typesupport_introspection_c__Events_message_member_array,  // message members
  mir_msgs__msg__Events__rosidl_typesupport_introspection_c__Events_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_msgs__msg__Events__rosidl_typesupport_introspection_c__Events_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_msgs__msg__Events__rosidl_typesupport_introspection_c__Events_message_type_support_handle = {
  0,
  &mir_msgs__msg__Events__rosidl_typesupport_introspection_c__Events_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, Events)() {
  mir_msgs__msg__Events__rosidl_typesupport_introspection_c__Events_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  mir_msgs__msg__Events__rosidl_typesupport_introspection_c__Events_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, Event)();
  if (!mir_msgs__msg__Events__rosidl_typesupport_introspection_c__Events_message_type_support_handle.typesupport_identifier) {
    mir_msgs__msg__Events__rosidl_typesupport_introspection_c__Events_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_msgs__msg__Events__rosidl_typesupport_introspection_c__Events_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
