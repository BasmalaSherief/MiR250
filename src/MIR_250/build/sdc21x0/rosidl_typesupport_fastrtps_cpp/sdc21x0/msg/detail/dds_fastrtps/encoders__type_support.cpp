// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sdc21x0:msg/Encoders.idl
// generated code does not contain a copyright notice
#include "sdc21x0/msg/detail/encoders__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sdc21x0/msg/detail/encoders__struct.hpp"

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

namespace sdc21x0
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdc21x0
cdr_serialize(
  const sdc21x0::msg::Encoders & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: time_delta
  cdr << ros_message.time_delta;
  // Member: left_wheel
  cdr << ros_message.left_wheel;
  // Member: right_wheel
  cdr << ros_message.right_wheel;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdc21x0
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sdc21x0::msg::Encoders & ros_message)
{
  // Member: time_delta
  cdr >> ros_message.time_delta;

  // Member: left_wheel
  cdr >> ros_message.left_wheel;

  // Member: right_wheel
  cdr >> ros_message.right_wheel;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdc21x0
get_serialized_size(
  const sdc21x0::msg::Encoders & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: time_delta
  {
    size_t item_size = sizeof(ros_message.time_delta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_wheel
  {
    size_t item_size = sizeof(ros_message.left_wheel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_wheel
  {
    size_t item_size = sizeof(ros_message.right_wheel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdc21x0
max_serialized_size_Encoders(
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


  // Member: time_delta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_wheel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_wheel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sdc21x0::msg::Encoders;
    is_plain =
      (
      offsetof(DataType, right_wheel) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Encoders__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sdc21x0::msg::Encoders *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Encoders__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sdc21x0::msg::Encoders *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Encoders__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sdc21x0::msg::Encoders *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Encoders__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Encoders(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Encoders__callbacks = {
  "sdc21x0::msg",
  "Encoders",
  _Encoders__cdr_serialize,
  _Encoders__cdr_deserialize,
  _Encoders__get_serialized_size,
  _Encoders__max_serialized_size
};

static rosidl_message_type_support_t _Encoders__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Encoders__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sdc21x0

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sdc21x0
const rosidl_message_type_support_t *
get_message_type_support_handle<sdc21x0::msg::Encoders>()
{
  return &sdc21x0::msg::typesupport_fastrtps_cpp::_Encoders__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sdc21x0, msg, Encoders)() {
  return &sdc21x0::msg::typesupport_fastrtps_cpp::_Encoders__handle;
}

#ifdef __cplusplus
}
#endif
