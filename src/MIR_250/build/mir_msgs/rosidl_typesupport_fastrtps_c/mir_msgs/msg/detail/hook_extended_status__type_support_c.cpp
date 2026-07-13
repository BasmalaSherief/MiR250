// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mir_msgs:msg/HookExtendedStatus.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/hook_extended_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mir_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mir_msgs/msg/detail/hook_extended_status__struct.h"
#include "mir_msgs/msg/detail/hook_extended_status__functions.h"
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

#include "mir_msgs/msg/detail/brake_state__functions.h"  // brake
#include "mir_msgs/msg/detail/gripper_state__functions.h"  // gripper
#include "mir_msgs/msg/detail/height_state__functions.h"  // height
#include "rosidl_runtime_c/string.h"  // qr_marker_name
#include "rosidl_runtime_c/string_functions.h"  // qr_marker_name

// forward declare type support functions
size_t get_serialized_size_mir_msgs__msg__BrakeState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mir_msgs__msg__BrakeState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, BrakeState)();
size_t get_serialized_size_mir_msgs__msg__GripperState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mir_msgs__msg__GripperState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, GripperState)();
size_t get_serialized_size_mir_msgs__msg__HeightState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mir_msgs__msg__HeightState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, HeightState)();


using _HookExtendedStatus__ros_msg_type = mir_msgs__msg__HookExtendedStatus;

static bool _HookExtendedStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HookExtendedStatus__ros_msg_type * ros_message = static_cast<const _HookExtendedStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: available
  {
    cdr << (ros_message->available ? true : false);
  }

  // Field name: brake
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mir_msgs, msg, BrakeState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->brake, cdr))
    {
      return false;
    }
  }

  // Field name: gripper
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mir_msgs, msg, GripperState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gripper, cdr))
    {
      return false;
    }
  }

  // Field name: height
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mir_msgs, msg, HeightState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->height, cdr))
    {
      return false;
    }
  }

  // Field name: angle
  {
    cdr << ros_message->angle;
  }

  // Field name: qr_marker_name
  {
    const rosidl_runtime_c__String * str = &ros_message->qr_marker_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _HookExtendedStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HookExtendedStatus__ros_msg_type * ros_message = static_cast<_HookExtendedStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->available = tmp ? true : false;
  }

  // Field name: brake
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mir_msgs, msg, BrakeState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->brake))
    {
      return false;
    }
  }

  // Field name: gripper
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mir_msgs, msg, GripperState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gripper))
    {
      return false;
    }
  }

  // Field name: height
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mir_msgs, msg, HeightState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->height))
    {
      return false;
    }
  }

  // Field name: angle
  {
    cdr >> ros_message->angle;
  }

  // Field name: qr_marker_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->qr_marker_name.data) {
      rosidl_runtime_c__String__init(&ros_message->qr_marker_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->qr_marker_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'qr_marker_name'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t get_serialized_size_mir_msgs__msg__HookExtendedStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HookExtendedStatus__ros_msg_type * ros_message = static_cast<const _HookExtendedStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name brake

  current_alignment += get_serialized_size_mir_msgs__msg__BrakeState(
    &(ros_message->brake), current_alignment);
  // field.name gripper

  current_alignment += get_serialized_size_mir_msgs__msg__GripperState(
    &(ros_message->gripper), current_alignment);
  // field.name height

  current_alignment += get_serialized_size_mir_msgs__msg__HeightState(
    &(ros_message->height), current_alignment);
  // field.name angle
  {
    size_t item_size = sizeof(ros_message->angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name qr_marker_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->qr_marker_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _HookExtendedStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mir_msgs__msg__HookExtendedStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t max_serialized_size_mir_msgs__msg__HookExtendedStatus(
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
  // member: brake
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mir_msgs__msg__BrakeState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: gripper
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mir_msgs__msg__GripperState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: height
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mir_msgs__msg__HeightState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: qr_marker_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mir_msgs__msg__HookExtendedStatus;
    is_plain =
      (
      offsetof(DataType, qr_marker_name) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _HookExtendedStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mir_msgs__msg__HookExtendedStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HookExtendedStatus = {
  "mir_msgs::msg",
  "HookExtendedStatus",
  _HookExtendedStatus__cdr_serialize,
  _HookExtendedStatus__cdr_deserialize,
  _HookExtendedStatus__get_serialized_size,
  _HookExtendedStatus__max_serialized_size
};

static rosidl_message_type_support_t _HookExtendedStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HookExtendedStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, HookExtendedStatus)() {
  return &_HookExtendedStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
