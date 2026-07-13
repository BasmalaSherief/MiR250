// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mir_msgs:msg/SafetyStatus.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/safety_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mir_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mir_msgs/msg/detail/safety_status__struct.h"
#include "mir_msgs/msg/detail/safety_status__functions.h"
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


// forward declare type support functions


using _SafetyStatus__ros_msg_type = mir_msgs__msg__SafetyStatus;

static bool _SafetyStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SafetyStatus__ros_msg_type * ros_message = static_cast<const _SafetyStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: is_connected
  {
    cdr << (ros_message->is_connected ? true : false);
  }

  // Field name: is_firmware_ok
  {
    cdr << (ros_message->is_firmware_ok ? true : false);
  }

  // Field name: firmware_version
  {
    cdr << ros_message->firmware_version;
  }

  // Field name: in_protective_stop
  {
    cdr << (ros_message->in_protective_stop ? true : false);
  }

  // Field name: in_emergency_stop
  {
    cdr << (ros_message->in_emergency_stop ? true : false);
  }

  // Field name: sto_feedback
  {
    cdr << (ros_message->sto_feedback ? true : false);
  }

  // Field name: is_restart_required
  {
    cdr << (ros_message->is_restart_required ? true : false);
  }

  // Field name: is_safety_muted
  {
    cdr << (ros_message->is_safety_muted ? true : false);
  }

  // Field name: max_lin_speed
  {
    cdr << ros_message->max_lin_speed;
  }

  // Field name: max_rot_speed
  {
    cdr << ros_message->max_rot_speed;
  }

  // Field name: mute_mask
  {
    cdr << ros_message->mute_mask;
  }

  // Field name: partial_mute_mask
  {
    cdr << ros_message->partial_mute_mask;
  }

  // Field name: is_limited_speed_active
  {
    cdr << (ros_message->is_limited_speed_active ? true : false);
  }

  // Field name: is_lifter_down
  {
    cdr << (ros_message->is_lifter_down ? true : false);
  }

  // Field name: in_sleep_mode
  {
    cdr << (ros_message->in_sleep_mode ? true : false);
  }

  // Field name: in_manual_mode
  {
    cdr << (ros_message->in_manual_mode ? true : false);
  }

  // Field name: is_manual_mode_restart_required
  {
    cdr << (ros_message->is_manual_mode_restart_required ? true : false);
  }

  return true;
}

static bool _SafetyStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SafetyStatus__ros_msg_type * ros_message = static_cast<_SafetyStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: is_connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_connected = tmp ? true : false;
  }

  // Field name: is_firmware_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_firmware_ok = tmp ? true : false;
  }

  // Field name: firmware_version
  {
    cdr >> ros_message->firmware_version;
  }

  // Field name: in_protective_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->in_protective_stop = tmp ? true : false;
  }

  // Field name: in_emergency_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->in_emergency_stop = tmp ? true : false;
  }

  // Field name: sto_feedback
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sto_feedback = tmp ? true : false;
  }

  // Field name: is_restart_required
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_restart_required = tmp ? true : false;
  }

  // Field name: is_safety_muted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_safety_muted = tmp ? true : false;
  }

  // Field name: max_lin_speed
  {
    cdr >> ros_message->max_lin_speed;
  }

  // Field name: max_rot_speed
  {
    cdr >> ros_message->max_rot_speed;
  }

  // Field name: mute_mask
  {
    cdr >> ros_message->mute_mask;
  }

  // Field name: partial_mute_mask
  {
    cdr >> ros_message->partial_mute_mask;
  }

  // Field name: is_limited_speed_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_limited_speed_active = tmp ? true : false;
  }

  // Field name: is_lifter_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_lifter_down = tmp ? true : false;
  }

  // Field name: in_sleep_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->in_sleep_mode = tmp ? true : false;
  }

  // Field name: in_manual_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->in_manual_mode = tmp ? true : false;
  }

  // Field name: is_manual_mode_restart_required
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_manual_mode_restart_required = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t get_serialized_size_mir_msgs__msg__SafetyStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SafetyStatus__ros_msg_type * ros_message = static_cast<const _SafetyStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name is_connected
  {
    size_t item_size = sizeof(ros_message->is_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_firmware_ok
  {
    size_t item_size = sizeof(ros_message->is_firmware_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name firmware_version
  {
    size_t item_size = sizeof(ros_message->firmware_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name in_protective_stop
  {
    size_t item_size = sizeof(ros_message->in_protective_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name in_emergency_stop
  {
    size_t item_size = sizeof(ros_message->in_emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sto_feedback
  {
    size_t item_size = sizeof(ros_message->sto_feedback);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_restart_required
  {
    size_t item_size = sizeof(ros_message->is_restart_required);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_safety_muted
  {
    size_t item_size = sizeof(ros_message->is_safety_muted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_lin_speed
  {
    size_t item_size = sizeof(ros_message->max_lin_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_rot_speed
  {
    size_t item_size = sizeof(ros_message->max_rot_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mute_mask
  {
    size_t item_size = sizeof(ros_message->mute_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name partial_mute_mask
  {
    size_t item_size = sizeof(ros_message->partial_mute_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_limited_speed_active
  {
    size_t item_size = sizeof(ros_message->is_limited_speed_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_lifter_down
  {
    size_t item_size = sizeof(ros_message->is_lifter_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name in_sleep_mode
  {
    size_t item_size = sizeof(ros_message->in_sleep_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name in_manual_mode
  {
    size_t item_size = sizeof(ros_message->in_manual_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_manual_mode_restart_required
  {
    size_t item_size = sizeof(ros_message->is_manual_mode_restart_required);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SafetyStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mir_msgs__msg__SafetyStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t max_serialized_size_mir_msgs__msg__SafetyStatus(
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

  // member: is_connected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_firmware_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: firmware_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: in_protective_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: in_emergency_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sto_feedback
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_restart_required
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_safety_muted
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: max_lin_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_rot_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: mute_mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: partial_mute_mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_limited_speed_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_lifter_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: in_sleep_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: in_manual_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_manual_mode_restart_required
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mir_msgs__msg__SafetyStatus;
    is_plain =
      (
      offsetof(DataType, is_manual_mode_restart_required) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SafetyStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mir_msgs__msg__SafetyStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SafetyStatus = {
  "mir_msgs::msg",
  "SafetyStatus",
  _SafetyStatus__cdr_serialize,
  _SafetyStatus__cdr_deserialize,
  _SafetyStatus__get_serialized_size,
  _SafetyStatus__max_serialized_size
};

static rosidl_message_type_support_t _SafetyStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SafetyStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, SafetyStatus)() {
  return &_SafetyStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
