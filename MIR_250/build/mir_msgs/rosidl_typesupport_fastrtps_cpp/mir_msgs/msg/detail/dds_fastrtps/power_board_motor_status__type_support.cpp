// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mir_msgs:msg/PowerBoardMotorStatus.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/power_board_motor_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mir_msgs/msg/detail/power_board_motor_status__struct.hpp"

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
  const mir_msgs::msg::PowerBoardMotorStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: left_motor_ctrl_word
  cdr << ros_message.left_motor_ctrl_word;
  // Member: left_motor_speed
  cdr << ros_message.left_motor_speed;
  // Member: left_motor_encoder
  cdr << ros_message.left_motor_encoder;
  // Member: left_motor_status
  cdr << ros_message.left_motor_status;
  // Member: left_motor_error
  cdr << ros_message.left_motor_error;
  // Member: left_motor_error_hist1
  cdr << ros_message.left_motor_error_hist1;
  // Member: left_motor_error_hist2
  cdr << ros_message.left_motor_error_hist2;
  // Member: left_motor_current
  cdr << ros_message.left_motor_current;
  // Member: left_motor_i2t_motor
  cdr << ros_message.left_motor_i2t_motor;
  // Member: left_motor_i2t_controller
  cdr << ros_message.left_motor_i2t_controller;
  // Member: left_motor_temperature
  cdr << ros_message.left_motor_temperature;
  // Member: right_motor_ctrl_word
  cdr << ros_message.right_motor_ctrl_word;
  // Member: right_motor_speed
  cdr << ros_message.right_motor_speed;
  // Member: right_motor_encoder
  cdr << ros_message.right_motor_encoder;
  // Member: right_motor_status
  cdr << ros_message.right_motor_status;
  // Member: right_motor_error
  cdr << ros_message.right_motor_error;
  // Member: right_motor_error_hist1
  cdr << ros_message.right_motor_error_hist1;
  // Member: right_motor_error_hist2
  cdr << ros_message.right_motor_error_hist2;
  // Member: right_motor_current
  cdr << ros_message.right_motor_current;
  // Member: right_motor_i2t_motor
  cdr << ros_message.right_motor_i2t_motor;
  // Member: right_motor_i2t_controller
  cdr << ros_message.right_motor_i2t_controller;
  // Member: right_motor_temperature
  cdr << ros_message.right_motor_temperature;
  // Member: brake_left_status
  cdr << ros_message.brake_left_status;
  // Member: brake_right_status
  cdr << ros_message.brake_right_status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs::msg::PowerBoardMotorStatus & ros_message)
{
  // Member: left_motor_ctrl_word
  cdr >> ros_message.left_motor_ctrl_word;

  // Member: left_motor_speed
  cdr >> ros_message.left_motor_speed;

  // Member: left_motor_encoder
  cdr >> ros_message.left_motor_encoder;

  // Member: left_motor_status
  cdr >> ros_message.left_motor_status;

  // Member: left_motor_error
  cdr >> ros_message.left_motor_error;

  // Member: left_motor_error_hist1
  cdr >> ros_message.left_motor_error_hist1;

  // Member: left_motor_error_hist2
  cdr >> ros_message.left_motor_error_hist2;

  // Member: left_motor_current
  cdr >> ros_message.left_motor_current;

  // Member: left_motor_i2t_motor
  cdr >> ros_message.left_motor_i2t_motor;

  // Member: left_motor_i2t_controller
  cdr >> ros_message.left_motor_i2t_controller;

  // Member: left_motor_temperature
  cdr >> ros_message.left_motor_temperature;

  // Member: right_motor_ctrl_word
  cdr >> ros_message.right_motor_ctrl_word;

  // Member: right_motor_speed
  cdr >> ros_message.right_motor_speed;

  // Member: right_motor_encoder
  cdr >> ros_message.right_motor_encoder;

  // Member: right_motor_status
  cdr >> ros_message.right_motor_status;

  // Member: right_motor_error
  cdr >> ros_message.right_motor_error;

  // Member: right_motor_error_hist1
  cdr >> ros_message.right_motor_error_hist1;

  // Member: right_motor_error_hist2
  cdr >> ros_message.right_motor_error_hist2;

  // Member: right_motor_current
  cdr >> ros_message.right_motor_current;

  // Member: right_motor_i2t_motor
  cdr >> ros_message.right_motor_i2t_motor;

  // Member: right_motor_i2t_controller
  cdr >> ros_message.right_motor_i2t_controller;

  // Member: right_motor_temperature
  cdr >> ros_message.right_motor_temperature;

  // Member: brake_left_status
  cdr >> ros_message.brake_left_status;

  // Member: brake_right_status
  cdr >> ros_message.brake_right_status;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
get_serialized_size(
  const mir_msgs::msg::PowerBoardMotorStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: left_motor_ctrl_word
  {
    size_t item_size = sizeof(ros_message.left_motor_ctrl_word);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_motor_speed
  {
    size_t item_size = sizeof(ros_message.left_motor_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_motor_encoder
  {
    size_t item_size = sizeof(ros_message.left_motor_encoder);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_motor_status
  {
    size_t item_size = sizeof(ros_message.left_motor_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_motor_error
  {
    size_t item_size = sizeof(ros_message.left_motor_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_motor_error_hist1
  {
    size_t item_size = sizeof(ros_message.left_motor_error_hist1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_motor_error_hist2
  {
    size_t item_size = sizeof(ros_message.left_motor_error_hist2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_motor_current
  {
    size_t item_size = sizeof(ros_message.left_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_motor_i2t_motor
  {
    size_t item_size = sizeof(ros_message.left_motor_i2t_motor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_motor_i2t_controller
  {
    size_t item_size = sizeof(ros_message.left_motor_i2t_controller);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_motor_temperature
  {
    size_t item_size = sizeof(ros_message.left_motor_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_motor_ctrl_word
  {
    size_t item_size = sizeof(ros_message.right_motor_ctrl_word);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_motor_speed
  {
    size_t item_size = sizeof(ros_message.right_motor_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_motor_encoder
  {
    size_t item_size = sizeof(ros_message.right_motor_encoder);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_motor_status
  {
    size_t item_size = sizeof(ros_message.right_motor_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_motor_error
  {
    size_t item_size = sizeof(ros_message.right_motor_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_motor_error_hist1
  {
    size_t item_size = sizeof(ros_message.right_motor_error_hist1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_motor_error_hist2
  {
    size_t item_size = sizeof(ros_message.right_motor_error_hist2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_motor_current
  {
    size_t item_size = sizeof(ros_message.right_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_motor_i2t_motor
  {
    size_t item_size = sizeof(ros_message.right_motor_i2t_motor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_motor_i2t_controller
  {
    size_t item_size = sizeof(ros_message.right_motor_i2t_controller);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_motor_temperature
  {
    size_t item_size = sizeof(ros_message.right_motor_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_left_status
  {
    size_t item_size = sizeof(ros_message.brake_left_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_right_status
  {
    size_t item_size = sizeof(ros_message.brake_right_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
max_serialized_size_PowerBoardMotorStatus(
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


  // Member: left_motor_ctrl_word
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: left_motor_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_motor_encoder
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_motor_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: left_motor_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_motor_error_hist1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_motor_error_hist2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_motor_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_motor_i2t_motor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: left_motor_i2t_controller
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: left_motor_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: right_motor_ctrl_word
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: right_motor_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_motor_encoder
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_motor_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: right_motor_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_motor_error_hist1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_motor_error_hist2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_motor_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_motor_i2t_motor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: right_motor_i2t_controller
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: right_motor_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: brake_left_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brake_right_status
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
    using DataType = mir_msgs::msg::PowerBoardMotorStatus;
    is_plain =
      (
      offsetof(DataType, brake_right_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PowerBoardMotorStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mir_msgs::msg::PowerBoardMotorStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PowerBoardMotorStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mir_msgs::msg::PowerBoardMotorStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PowerBoardMotorStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mir_msgs::msg::PowerBoardMotorStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PowerBoardMotorStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PowerBoardMotorStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PowerBoardMotorStatus__callbacks = {
  "mir_msgs::msg",
  "PowerBoardMotorStatus",
  _PowerBoardMotorStatus__cdr_serialize,
  _PowerBoardMotorStatus__cdr_deserialize,
  _PowerBoardMotorStatus__get_serialized_size,
  _PowerBoardMotorStatus__max_serialized_size
};

static rosidl_message_type_support_t _PowerBoardMotorStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PowerBoardMotorStatus__callbacks,
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
get_message_type_support_handle<mir_msgs::msg::PowerBoardMotorStatus>()
{
  return &mir_msgs::msg::typesupport_fastrtps_cpp::_PowerBoardMotorStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mir_msgs, msg, PowerBoardMotorStatus)() {
  return &mir_msgs::msg::typesupport_fastrtps_cpp::_PowerBoardMotorStatus__handle;
}

#ifdef __cplusplus
}
#endif
