// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mir_msgs:msg/UserPrompt.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mir_msgs/msg/detail/user_prompt__rosidl_typesupport_introspection_c.h"
#include "mir_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mir_msgs/msg/detail/user_prompt__functions.h"
#include "mir_msgs/msg/detail/user_prompt__struct.h"


// Include directives for member types
// Member `guid`
// Member `user_group`
// Member `question`
// Member `options`
#include "rosidl_runtime_c/string_functions.h"
// Member `timeout`
#include "builtin_interfaces/msg/duration.h"
// Member `timeout`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__UserPrompt_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_msgs__msg__UserPrompt__init(message_memory);
}

void mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__UserPrompt_fini_function(void * message_memory)
{
  mir_msgs__msg__UserPrompt__fini(message_memory);
}

size_t mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__size_function__UserPrompt__options(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__get_const_function__UserPrompt__options(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__get_function__UserPrompt__options(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__fetch_function__UserPrompt__options(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__get_const_function__UserPrompt__options(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__assign_function__UserPrompt__options(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__get_function__UserPrompt__options(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__resize_function__UserPrompt__options(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__UserPrompt_message_member_array[6] = {
  {
    "has_request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__UserPrompt, has_request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "guid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__UserPrompt, guid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "user_group",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__UserPrompt, user_group),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "question",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__UserPrompt, question),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__UserPrompt, options),  // bytes offset in struct
    NULL,  // default value
    mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__size_function__UserPrompt__options,  // size() function pointer
    mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__get_const_function__UserPrompt__options,  // get_const(index) function pointer
    mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__get_function__UserPrompt__options,  // get(index) function pointer
    mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__fetch_function__UserPrompt__options,  // fetch(index, &value) function pointer
    mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__assign_function__UserPrompt__options,  // assign(index, value) function pointer
    mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__resize_function__UserPrompt__options  // resize(index) function pointer
  },
  {
    "timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__UserPrompt, timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__UserPrompt_message_members = {
  "mir_msgs__msg",  // message namespace
  "UserPrompt",  // message name
  6,  // number of fields
  sizeof(mir_msgs__msg__UserPrompt),
  mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__UserPrompt_message_member_array,  // message members
  mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__UserPrompt_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__UserPrompt_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__UserPrompt_message_type_support_handle = {
  0,
  &mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__UserPrompt_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, UserPrompt)() {
  mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__UserPrompt_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__UserPrompt_message_type_support_handle.typesupport_identifier) {
    mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__UserPrompt_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_msgs__msg__UserPrompt__rosidl_typesupport_introspection_c__UserPrompt_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
