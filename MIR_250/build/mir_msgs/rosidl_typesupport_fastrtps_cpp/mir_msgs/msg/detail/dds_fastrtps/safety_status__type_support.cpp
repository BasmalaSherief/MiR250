// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mir_msgs:msg/SafetyStatus.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/safety_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mir_msgs/msg/detail/safety_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mir_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
cdr_serialize(
  const mir_msgs::msg::SafetyStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_connected
  cdr << (ros_message.is_connected ? true : false);
  // Member: is_firmware_ok
  cdr << (ros_message.is_firmware_ok ? true : false);
  // Member: firmware_version
  cdr << ros_message.firmware_version;
  // Member: in_protective_stop
  cdr << (ros_message.in_protective_stop ? true : false);
  // Member: in_emergency_stop
  cdr << (ros_message.in_emergency_stop ? true : false);
  // Member: sto_feedback
  cdr << (ros_message.sto_feedback ? true : false);
  // Member: is_restart_required
  cdr << (ros_message.is_restart_required ? true : false);
  // Member: is_safety_muted
  cdr << (ros_message.is_safety_muted ? true : false);
  // Member: max_lin_speed
  cdr << ros_message.max_lin_speed;
  // Member: max_rot_speed
  cdr << ros_message.max_rot_speed;
  // Member: mute_mask
  cdr << ros_message.mute_mask;
  // Member: partial_mute_mask
  cdr << ros_message.partial_mute_mask;
  // Member: is_limited_speed_active
  cdr << (ros_message.is_limited_speed_active ? true : false);
  // Member: is_lifter_down
  cdr << (ros_message.is_lifter_down ? true : false);
  // Member: in_sleep_mode
  cdr << (ros_message.in_sleep_mode ? true : false);
  // Member: in_manual_mode
  cdr << (ros_message.in_manual_mode ? true : false);
  // Member: is_manual_mode_restart_required
  cdr << (ros_message.is_manual_mode_restart_required ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs::msg::SafetyStatus & ros_message)
{
  // Member: is_connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_connected = tmp ? true : false;
  }

  // Member: is_firmware_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_firmware_ok = tmp ? true : false;
  }

  // Member: firmware_version
  cdr >> ros_message.firmware_version;

  // Member: in_protective_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.in_protective_stop = tmp ? true : false;
  }

  // Member: in_emergency_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.in_emergency_stop = tmp ? true : false;
  }

  // Member: sto_feedback
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sto_feedback = tmp ? true : false;
  }

  // Member: is_restart_required
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_restart_required = tmp ? true : false;
  }

  // Member: is_safety_muted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_safety_muted = tmp ? true : false;
  }

  // Member: max_lin_speed
  cdr >> ros_message.max_lin_speed;

  // Member: max_rot_speed
  cdr >> ros_message.max_rot_speed;

  // Member: mute_mask
  cdr >> ros_message.mute_mask;

  // Member: partial_mute_mask
  cdr >> ros_message.partial_mute_mask;

  // Member: is_limited_speed_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_limited_speed_active = tmp ? true : false;
  }

  // Member: is_lifter_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_lifter_down = tmp ? true : false;
  }

  // Member: in_sleep_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.in_sleep_mode = tmp ? true : false;
  }

  // Member: in_manual_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.in_manual_mode = tmp ? true : false;
  }

  // Member: is_manual_mode_restart_required
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_manual_mode_restart_required = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
get_serialized_size(
  const mir_msgs::msg::SafetyStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_connected
  {
    size_t item_size = sizeof(ros_message.is_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_firmware_ok
  {
    size_t item_size = sizeof(ros_message.is_firmware_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: firmware_version
  {
    size_t item_size = sizeof(ros_message.firmware_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: in_protective_stop
  {
    size_t item_size = sizeof(ros_message.in_protective_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: in_emergency_stop
  {
    size_t item_size = sizeof(ros_message.in_emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sto_feedback
  {
    size_t item_size = sizeof(ros_message.sto_feedback);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_restart_required
  {
    size_t item_size = sizeof(ros_message.is_restart_required);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_safety_muted
  {
    size_t item_size = sizeof(ros_message.is_safety_muted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_lin_speed
  {
    size_t item_size = sizeof(ros_message.max_lin_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_rot_speed
  {
    size_t item_size = sizeof(ros_message.max_rot_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mute_mask
  {
    size_t item_size = sizeof(ros_message.mute_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: partial_mute_mask
  {
    size_t item_size = sizeof(ros_message.partial_mute_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_limited_speed_active
  {
    size_t item_size = sizeof(ros_message.is_limited_speed_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_lifter_down
  {
    size_t item_size = sizeof(ros_message.is_lifter_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: in_sleep_mode
  {
    size_t item_size = sizeof(ros_message.in_sleep_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: in_manual_mode
  {
    size_t item_size = sizeof(ros_message.in_manual_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_manual_mode_restart_required
  {
    size_t item_size = sizeof(ros_message.is_manual_mode_restart_required);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
max_serialized_size_SafetyStatus(
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


  // Member: is_connected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_firmware_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: firmware_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: in_protective_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: in_emergency_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sto_feedback
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_restart_required
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_safety_muted
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_lin_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_rot_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: mute_mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: partial_mute_mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_limited_speed_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_lifter_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: in_sleep_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: in_manual_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_manual_mode_restart_required
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
    using DataType = mir_msgs::msg::SafetyStatus;
    is_plain =
      (
      offsetof(DataType, is_manual_mode_restart_required) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SafetyStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mir_msgs::msg::SafetyStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SafetyStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mir_msgs::msg::SafetyStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SafetyStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mir_msgs::msg::SafetyStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SafetyStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SafetyStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SafetyStatus__callbacks = {
  "mir_msgs::msg",
  "SafetyStatus",
  _SafetyStatus__cdr_serialize,
  _SafetyStatus__cdr_deserialize,
  _SafetyStatus__get_serialized_size,
  _SafetyStatus__max_serialized_size
};

static rosidl_message_type_support_t _SafetyStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SafetyStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mir_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mir_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mir_msgs::msg::SafetyStatus>()
{
  return &mir_msgs::msg::typesupport_fastrtps_cpp::_SafetyStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mir_msgs, msg, SafetyStatus)() {
  return &mir_msgs::msg::typesupport_fastrtps_cpp::_SafetyStatus__handle;
}

#ifdef __cplusplus
}
#endif
