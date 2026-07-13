// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mir_msgs:msg/PlanSegments.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mir_msgs/msg/detail/plan_segments__rosidl_typesupport_introspection_c.h"
#include "mir_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mir_msgs/msg/detail/plan_segments__functions.h"
#include "mir_msgs/msg/detail/plan_segments__struct.h"


// Include directives for member types
// Member `p_segments`
#include "mir_msgs/msg/plan_segment.h"
// Member `p_segments`
#include "mir_msgs/msg/detail/plan_segment__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__PlanSegments_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_msgs__msg__PlanSegments__init(message_memory);
}

void mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__PlanSegments_fini_function(void * message_memory)
{
  mir_msgs__msg__PlanSegments__fini(message_memory);
}

size_t mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__size_function__PlanSegments__p_segments(
  const void * untyped_member)
{
  const mir_msgs__msg__PlanSegment__Sequence * member =
    (const mir_msgs__msg__PlanSegment__Sequence *)(untyped_member);
  return member->size;
}

const void * mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__get_const_function__PlanSegments__p_segments(
  const void * untyped_member, size_t index)
{
  const mir_msgs__msg__PlanSegment__Sequence * member =
    (const mir_msgs__msg__PlanSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__get_function__PlanSegments__p_segments(
  void * untyped_member, size_t index)
{
  mir_msgs__msg__PlanSegment__Sequence * member =
    (mir_msgs__msg__PlanSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__fetch_function__PlanSegments__p_segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mir_msgs__msg__PlanSegment * item =
    ((const mir_msgs__msg__PlanSegment *)
    mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__get_const_function__PlanSegments__p_segments(untyped_member, index));
  mir_msgs__msg__PlanSegment * value =
    (mir_msgs__msg__PlanSegment *)(untyped_value);
  *value = *item;
}

void mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__assign_function__PlanSegments__p_segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mir_msgs__msg__PlanSegment * item =
    ((mir_msgs__msg__PlanSegment *)
    mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__get_function__PlanSegments__p_segments(untyped_member, index));
  const mir_msgs__msg__PlanSegment * value =
    (const mir_msgs__msg__PlanSegment *)(untyped_value);
  *item = *value;
}

bool mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__resize_function__PlanSegments__p_segments(
  void * untyped_member, size_t size)
{
  mir_msgs__msg__PlanSegment__Sequence * member =
    (mir_msgs__msg__PlanSegment__Sequence *)(untyped_member);
  mir_msgs__msg__PlanSegment__Sequence__fini(member);
  return mir_msgs__msg__PlanSegment__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__PlanSegments_message_member_array[1] = {
  {
    "p_segments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_msgs__msg__PlanSegments, p_segments),  // bytes offset in struct
    NULL,  // default value
    mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__size_function__PlanSegments__p_segments,  // size() function pointer
    mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__get_const_function__PlanSegments__p_segments,  // get_const(index) function pointer
    mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__get_function__PlanSegments__p_segments,  // get(index) function pointer
    mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__fetch_function__PlanSegments__p_segments,  // fetch(index, &value) function pointer
    mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__assign_function__PlanSegments__p_segments,  // assign(index, value) function pointer
    mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__resize_function__PlanSegments__p_segments  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__PlanSegments_message_members = {
  "mir_msgs__msg",  // message namespace
  "PlanSegments",  // message name
  1,  // number of fields
  sizeof(mir_msgs__msg__PlanSegments),
  mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__PlanSegments_message_member_array,  // message members
  mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__PlanSegments_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__PlanSegments_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__PlanSegments_message_type_support_handle = {
  0,
  &mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__PlanSegments_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, PlanSegments)() {
  mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__PlanSegments_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_msgs, msg, PlanSegment)();
  if (!mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__PlanSegments_message_type_support_handle.typesupport_identifier) {
    mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__PlanSegments_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_msgs__msg__PlanSegments__rosidl_typesupport_introspection_c__PlanSegments_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
