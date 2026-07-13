// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mir_msgs:msg/HookStatus.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/hook_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mir_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mir_msgs/msg/detail/hook_status__struct.h"
#include "mir_msgs/msg/detail/hook_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "mir_msgs/msg/detail/trolley__functions.h"  // trolley

// forward declare type support functions
size_t get_serialized_size_mir_msgs__msg__Trolley(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mir_msgs__msg__Trolley(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, Trolley)();


using _HookStatus__ros_msg_type = mir_msgs__msg__HookStatus;

static bool _HookStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HookStatus__ros_msg_type * ros_message = static_cast<const _HookStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: available
  {
    cdr << (ros_message->available ? true : false);
  }

  // Field name: length
  {
    cdr << ros_message->length;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: angle
  {
    cdr << ros_message->angle;
  }

  // Field name: braked
  {
    cdr << (ros_message->braked ? true : false);
  }

  // Field name: trolley_attached
  {
    cdr << (ros_message->trolley_attached ? true : false);
  }

  // Field name: trolley
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mir_msgs, msg, Trolley
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trolley, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _HookStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HookStatus__ros_msg_type * ros_message = static_cast<_HookStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->available = tmp ? true : false;
  }

  // Field name: length
  {
    cdr >> ros_message->length;
  }

  // Field name: height
  {
    cdr >> ros_message->height;
  }

  // Field name: angle
  {
    cdr >> ros_message->angle;
  }

  // Field name: braked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->braked = tmp ? true : false;
  }

  // Field name: trolley_attached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->trolley_attached = tmp ? true : false;
  }

  // Field name: trolley
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mir_msgs, msg, Trolley
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trolley))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t get_serialized_size_mir_msgs__msg__HookStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HookStatus__ros_msg_type * ros_message = static_cast<const _HookStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name available
  {
    size_t item_size = sizeof(ros_message->available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle
  {
    size_t item_size = sizeof(ros_message->angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name braked
  {
    size_t item_size = sizeof(ros_message->braked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trolley_attached
  {
    size_t item_size = sizeof(ros_message->trolley_attached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trolley

  current_alignment += get_serialized_size_mir_msgs__msg__Trolley(
    &(ros_message->trolley), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _HookStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mir_msgs__msg__HookStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t max_serialized_size_mir_msgs__msg__HookStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: braked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trolley_attached
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trolley
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mir_msgs__msg__Trolley(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mir_msgs__msg__HookStatus;
    is_plain =
      (
      offsetof(DataType, trolley) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _HookStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mir_msgs__msg__HookStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HookStatus = {
  "mir_msgs::msg",
  "HookStatus",
  _HookStatus__cdr_serialize,
  _HookStatus__cdr_deserialize,
  _HookStatus__get_serialized_size,
  _HookStatus__max_serialized_size
};

static rosidl_message_type_support_t _HookStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HookStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, HookStatus)() {
  return &_HookStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
