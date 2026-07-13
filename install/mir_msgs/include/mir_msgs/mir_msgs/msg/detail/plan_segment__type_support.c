// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mir_msgs:msg/PlanSegment.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mir_msgs/msg/detail/plan_segment__rosidl_typesupport_introspection_c.h"
#include "mir_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mir_msgs/msg/detail/plan_segment__functions.h"
#include "mir_msgs/msg/detail/plan_segment__struct.h"


// Include directives for member types
// Member `path`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `path`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__PlanSegment_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_msgs__msg__PlanSegment__init(message_memory);
}

void mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__PlanSegment_fini_function(void * message_memory)
{
  mir_msgs__msg__PlanSegment__fini(message_memory);
}

size_t mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__size_function__PlanSegment__path(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__get_const_function__PlanSegment__path(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__get_function__PlanSegment__path(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__fetch_function__PlanSegment__path(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__PoseStamped * item =
    ((const geometry_msgs__msg__PoseStamped *)
    mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__get_const_function__PlanSegment__path(untyped_member, index));
  geometry_msgs__msg__PoseStamped * value =
    (geometry_msgs__msg__PoseStamped *)(untyped_value);
  *value = *item;
}

void mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__assign_function__PlanSegment__path(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__PoseStamped * item =
    ((geometry_msgs__msg__PoseStamped *)
    mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__get_function__PlanSegment__path(untyped_member, index));
  const geometry_msgs__msg__PoseStamped * value =
    (const geometry_msgs__msg__PoseStamped *)(untyped_value);
  *item = *value;
}

bool mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__resize_function__PlanSegment__path(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseStamped__Sequence__fini(member);
  return geometry_msgs__msg__PoseStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__PlanSegment_message_member_array[5] = {
  {
    "forward_motion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__PlanSegment, forward_motion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__PlanSegment, start_idx),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__PlanSegment, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "remaining_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__PlanSegment, remaining_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__PlanSegment, path),  // bytes offset in struct
    NULL,  // default value
    mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__size_function__PlanSegment__path,  // size() function pointer
    mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__get_const_function__PlanSegment__path,  // get_const(index) function pointer
    mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__get_function__PlanSegment__path,  // get(index) function pointer
    mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__fetch_function__PlanSegment__path,  // fetch(index, &value) function pointer
    mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__assign_function__PlanSegment__path,  // assign(index, value) function pointer
    mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__resize_function__PlanSegment__path  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__PlanSegment_message_members = {
  "mir_msgs__msg",  // message namespace
  "PlanSegment",  // message name
  5,  // number of fields
  sizeof(mir_msgs__msg__PlanSegment),
  mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__PlanSegment_message_member_array,  // message members
  mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__PlanSegment_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__PlanSegment_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__PlanSegment_message_type_support_handle = {
  0,
  &mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__PlanSegment_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, PlanSegment)() {
  mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__PlanSegment_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__PlanSegment_message_type_support_handle.typesupport_identifier) {
    mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__PlanSegment_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_msgs__msg__PlanSegment__rosidl_typesupport_introspection_c__PlanSegment_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
