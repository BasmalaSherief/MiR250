// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mir_msgs:msg/PowerBoardMotorStatus.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/power_board_motor_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mir_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mir_msgs/msg/detail/power_board_motor_status__struct.h"
#include "mir_msgs/msg/detail/power_board_motor_status__functions.h"
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


using _PowerBoardMotorStatus__ros_msg_type = mir_msgs__msg__PowerBoardMotorStatus;

static bool _PowerBoardMotorStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PowerBoardMotorStatus__ros_msg_type * ros_message = static_cast<const _PowerBoardMotorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: left_motor_ctrl_word
  {
    cdr << ros_message->left_motor_ctrl_word;
  }

  // Field name: left_motor_speed
  {
    cdr << ros_message->left_motor_speed;
  }

  // Field name: left_motor_encoder
  {
    cdr << ros_message->left_motor_encoder;
  }

  // Field name: left_motor_status
  {
    cdr << ros_message->left_motor_status;
  }

  // Field name: left_motor_error
  {
    cdr << ros_message->left_motor_error;
  }

  // Field name: left_motor_error_hist1
  {
    cdr << ros_message->left_motor_error_hist1;
  }

  // Field name: left_motor_error_hist2
  {
    cdr << ros_message->left_motor_error_hist2;
  }

  // Field name: left_motor_current
  {
    cdr << ros_message->left_motor_current;
  }

  // Field name: left_motor_i2t_motor
  {
    cdr << ros_message->left_motor_i2t_motor;
  }

  // Field name: left_motor_i2t_controller
  {
    cdr << ros_message->left_motor_i2t_controller;
  }

  // Field name: left_motor_temperature
  {
    cdr << ros_message->left_motor_temperature;
  }

  // Field name: right_motor_ctrl_word
  {
    cdr << ros_message->right_motor_ctrl_word;
  }

  // Field name: right_motor_speed
  {
    cdr << ros_message->right_motor_speed;
  }

  // Field name: right_motor_encoder
  {
    cdr << ros_message->right_motor_encoder;
  }

  // Field name: right_motor_status
  {
    cdr << ros_message->right_motor_status;
  }

  // Field name: right_motor_error
  {
    cdr << ros_message->right_motor_error;
  }

  // Field name: right_motor_error_hist1
  {
    cdr << ros_message->right_motor_error_hist1;
  }

  // Field name: right_motor_error_hist2
  {
    cdr << ros_message->right_motor_error_hist2;
  }

  // Field name: right_motor_current
  {
    cdr << ros_message->right_motor_current;
  }

  // Field name: right_motor_i2t_motor
  {
    cdr << ros_message->right_motor_i2t_motor;
  }

  // Field name: right_motor_i2t_controller
  {
    cdr << ros_message->right_motor_i2t_controller;
  }

  // Field name: right_motor_temperature
  {
    cdr << ros_message->right_motor_temperature;
  }

  // Field name: brake_left_status
  {
    cdr << ros_message->brake_left_status;
  }

  // Field name: brake_right_status
  {
    cdr << ros_message->brake_right_status;
  }

  return true;
}

static bool _PowerBoardMotorStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PowerBoardMotorStatus__ros_msg_type * ros_message = static_cast<_PowerBoardMotorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: left_motor_ctrl_word
  {
    cdr >> ros_message->left_motor_ctrl_word;
  }

  // Field name: left_motor_speed
  {
    cdr >> ros_message->left_motor_speed;
  }

  // Field name: left_motor_encoder
  {
    cdr >> ros_message->left_motor_encoder;
  }

  // Field name: left_motor_status
  {
    cdr >> ros_message->left_motor_status;
  }

  // Field name: left_motor_error
  {
    cdr >> ros_message->left_motor_error;
  }

  // Field name: left_motor_error_hist1
  {
    cdr >> ros_message->left_motor_error_hist1;
  }

  // Field name: left_motor_error_hist2
  {
    cdr >> ros_message->left_motor_error_hist2;
  }

  // Field name: left_motor_current
  {
    cdr >> ros_message->left_motor_current;
  }

  // Field name: left_motor_i2t_motor
  {
    cdr >> ros_message->left_motor_i2t_motor;
  }

  // Field name: left_motor_i2t_controller
  {
    cdr >> ros_message->left_motor_i2t_controller;
  }

  // Field name: left_motor_temperature
  {
    cdr >> ros_message->left_motor_temperature;
  }

  // Field name: right_motor_ctrl_word
  {
    cdr >> ros_message->right_motor_ctrl_word;
  }

  // Field name: right_motor_speed
  {
    cdr >> ros_message->right_motor_speed;
  }

  // Field name: right_motor_encoder
  {
    cdr >> ros_message->right_motor_encoder;
  }

  // Field name: right_motor_status
  {
    cdr >> ros_message->right_motor_status;
  }

  // Field name: right_motor_error
  {
    cdr >> ros_message->right_motor_error;
  }

  // Field name: right_motor_error_hist1
  {
    cdr >> ros_message->right_motor_error_hist1;
  }

  // Field name: right_motor_error_hist2
  {
    cdr >> ros_message->right_motor_error_hist2;
  }

  // Field name: right_motor_current
  {
    cdr >> ros_message->right_motor_current;
  }

  // Field name: right_motor_i2t_motor
  {
    cdr >> ros_message->right_motor_i2t_motor;
  }

  // Field name: right_motor_i2t_controller
  {
    cdr >> ros_message->right_motor_i2t_controller;
  }

  // Field name: right_motor_temperature
  {
    cdr >> ros_message->right_motor_temperature;
  }

  // Field name: brake_left_status
  {
    cdr >> ros_message->brake_left_status;
  }

  // Field name: brake_right_status
  {
    cdr >> ros_message->brake_right_status;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t get_serialized_size_mir_msgs__msg__PowerBoardMotorStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PowerBoardMotorStatus__ros_msg_type * ros_message = static_cast<const _PowerBoardMotorStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name left_motor_ctrl_word
  {
    size_t item_size = sizeof(ros_message->left_motor_ctrl_word);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_motor_speed
  {
    size_t item_size = sizeof(ros_message->left_motor_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_motor_encoder
  {
    size_t item_size = sizeof(ros_message->left_motor_encoder);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_motor_status
  {
    size_t item_size = sizeof(ros_message->left_motor_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_motor_error
  {
    size_t item_size = sizeof(ros_message->left_motor_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_motor_error_hist1
  {
    size_t item_size = sizeof(ros_message->left_motor_error_hist1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_motor_error_hist2
  {
    size_t item_size = sizeof(ros_message->left_motor_error_hist2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_motor_current
  {
    size_t item_size = sizeof(ros_message->left_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_motor_i2t_motor
  {
    size_t item_size = sizeof(ros_message->left_motor_i2t_motor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_motor_i2t_controller
  {
    size_t item_size = sizeof(ros_message->left_motor_i2t_controller);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_motor_temperature
  {
    size_t item_size = sizeof(ros_message->left_motor_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_motor_ctrl_word
  {
    size_t item_size = sizeof(ros_message->right_motor_ctrl_word);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_motor_speed
  {
    size_t item_size = sizeof(ros_message->right_motor_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_motor_encoder
  {
    size_t item_size = sizeof(ros_message->right_motor_encoder);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_motor_status
  {
    size_t item_size = sizeof(ros_message->right_motor_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_motor_error
  {
    size_t item_size = sizeof(ros_message->right_motor_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_motor_error_hist1
  {
    size_t item_size = sizeof(ros_message->right_motor_error_hist1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_motor_error_hist2
  {
    size_t item_size = sizeof(ros_message->right_motor_error_hist2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_motor_current
  {
    size_t item_size = sizeof(ros_message->right_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_motor_i2t_motor
  {
    size_t item_size = sizeof(ros_message->right_motor_i2t_motor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_motor_i2t_controller
  {
    size_t item_size = sizeof(ros_message->right_motor_i2t_controller);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_motor_temperature
  {
    size_t item_size = sizeof(ros_message->right_motor_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_left_status
  {
    size_t item_size = sizeof(ros_message->brake_left_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_right_status
  {
    size_t item_size = sizeof(ros_message->brake_right_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PowerBoardMotorStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mir_msgs__msg__PowerBoardMotorStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mir_msgs
size_t max_serialized_size_mir_msgs__msg__PowerBoardMotorStatus(
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

  // member: left_motor_ctrl_word
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: left_motor_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_motor_encoder
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_motor_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: left_motor_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_motor_error_hist1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_motor_error_hist2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_motor_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_motor_i2t_motor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: left_motor_i2t_controller
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: left_motor_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: right_motor_ctrl_word
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: right_motor_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_motor_encoder
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_motor_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: right_motor_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_motor_error_hist1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_motor_error_hist2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_motor_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_motor_i2t_motor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: right_motor_i2t_controller
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: right_motor_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: brake_left_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brake_right_status
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
    using DataType = mir_msgs__msg__PowerBoardMotorStatus;
    is_plain =
      (
      offsetof(DataType, brake_right_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PowerBoardMotorStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mir_msgs__msg__PowerBoardMotorStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PowerBoardMotorStatus = {
  "mir_msgs::msg",
  "PowerBoardMotorStatus",
  _PowerBoardMotorStatus__cdr_serialize,
  _PowerBoardMotorStatus__cdr_deserialize,
  _PowerBoardMotorStatus__get_serialized_size,
  _PowerBoardMotorStatus__max_serialized_size
};

static rosidl_message_type_support_t _PowerBoardMotorStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PowerBoardMotorStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mir_msgs, msg, PowerBoardMotorStatus)() {
  return &_PowerBoardMotorStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
