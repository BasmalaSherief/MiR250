// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mir_msgs:msg/IOs.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/i_os__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mir_msgs/msg/detail/i_os__struct.hpp"

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
  const mir_msgs::msg::IOs & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: module_guid
  cdr << ros_message.module_guid;
  // Member: connected
  cdr << (ros_message.connected ? true : false);
  // Member: status
  cdr << ros_message.status;
  // Member: num_inputs
  cdr << ros_message.num_inputs;
  // Member: input_state
  {
    cdr << ros_message.input_state;
  }
  // Member: num_outputs
  cdr << ros_message.num_outputs;
  // Member: output_state
  {
    cdr << ros_message.output_state;
  }
  // Member: ip
  cdr << ros_message.ip;
  // Member: error
  cdr << ros_message.error;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs::msg::IOs & ros_message)
{
  // Member: module_guid
  cdr >> ros_message.module_guid;

  // Member: connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.connected = tmp ? true : false;
  }

  // Member: status
  cdr >> ros_message.status;

  // Member: num_inputs
  cdr >> ros_message.num_inputs;

  // Member: input_state
  {
    cdr >> ros_message.input_state;
  }

  // Member: num_outputs
  cdr >> ros_message.num_outputs;

  // Member: output_state
  {
    cdr >> ros_message.output_state;
  }

  // Member: ip
  cdr >> ros_message.ip;

  // Member: error
  cdr >> ros_message.error;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
get_serialized_size(
  const mir_msgs::msg::IOs & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: module_guid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.module_guid.size() + 1);
  // Member: connected
  {
    size_t item_size = sizeof(ros_message.connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_inputs
  {
    size_t item_size = sizeof(ros_message.num_inputs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: input_state
  {
    size_t array_size = ros_message.input_state.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.input_state[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_outputs
  {
    size_t item_size = sizeof(ros_message.num_outputs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: output_state
  {
    size_t array_size = ros_message.output_state.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.output_state[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ip
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.ip.size() + 1);
  // Member: error
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.error.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
max_serialized_size_IOs(
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


  // Member: module_guid
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

  // Member: connected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: num_inputs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: input_state
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: num_outputs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: output_state
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ip
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

  // Member: error
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
    using DataType = mir_msgs::msg::IOs;
    is_plain =
      (
      offsetof(DataType, error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _IOs__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mir_msgs::msg::IOs *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IOs__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mir_msgs::msg::IOs *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IOs__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mir_msgs::msg::IOs *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IOs__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IOs(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IOs__callbacks = {
  "mir_msgs::msg",
  "IOs",
  _IOs__cdr_serialize,
  _IOs__cdr_deserialize,
  _IOs__get_serialized_size,
  _IOs__max_serialized_size
};

static rosidl_message_type_support_t _IOs__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IOs__callbacks,
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
get_message_type_support_handle<mir_msgs::msg::IOs>()
{
  return &mir_msgs::msg::typesupport_fastrtps_cpp::_IOs__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mir_msgs, msg, IOs)() {
  return &mir_msgs::msg::typesupport_fastrtps_cpp::_IOs__handle;
}

#ifdef __cplusplus
}
#endif
