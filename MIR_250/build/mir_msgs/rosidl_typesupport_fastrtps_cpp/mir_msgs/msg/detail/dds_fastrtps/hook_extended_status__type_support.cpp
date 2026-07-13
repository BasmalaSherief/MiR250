// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mir_msgs:msg/HookExtendedStatus.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/hook_extended_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mir_msgs/msg/detail/hook_extended_status__struct.hpp"

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
bool cdr_serialize(
  const mir_msgs::msg::BrakeState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mir_msgs::msg::BrakeState &);
size_t get_serialized_size(
  const mir_msgs::msg::BrakeState &,
  size_t current_alignment);
size_t
max_serialized_size_BrakeState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mir_msgs

namespace mir_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const mir_msgs::msg::GripperState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mir_msgs::msg::GripperState &);
size_t get_serialized_size(
  const mir_msgs::msg::GripperState &,
  size_t current_alignment);
size_t
max_serialized_size_GripperState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mir_msgs

namespace mir_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const mir_msgs::msg::HeightState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mir_msgs::msg::HeightState &);
size_t get_serialized_size(
  const mir_msgs::msg::HeightState &,
  size_t current_alignment);
size_t
max_serialized_size_HeightState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mir_msgs


namespace mir_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
cdr_serialize(
  const mir_msgs::msg::HookExtendedStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: available
  cdr << (ros_message.available ? true : false);
  // Member: brake
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.brake,
    cdr);
  // Member: gripper
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.gripper,
    cdr);
  // Member: height
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.height,
    cdr);
  // Member: angle
  cdr << ros_message.angle;
  // Member: qr_marker_name
  cdr << ros_message.qr_marker_name;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs::msg::HookExtendedStatus & ros_message)
{
  // Member: available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.available = tmp ? true : false;
  }

  // Member: brake
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.brake);

  // Member: gripper
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.gripper);

  // Member: height
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.height);

  // Member: angle
  cdr >> ros_message.angle;

  // Member: qr_marker_name
  cdr >> ros_message.qr_marker_name;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
get_serialized_size(
  const mir_msgs::msg::HookExtendedStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: available
  {
    size_t item_size = sizeof(ros_message.available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake

  current_alignment +=
    mir_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.brake, current_alignment);
  // Member: gripper

  current_alignment +=
    mir_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.gripper, current_alignment);
  // Member: height

  current_alignment +=
    mir_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.height, current_alignment);
  // Member: angle
  {
    size_t item_size = sizeof(ros_message.angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: qr_marker_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.qr_marker_name.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
max_serialized_size_HookExtendedStatus(
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


  // Member: available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brake
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mir_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BrakeState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: gripper
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mir_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GripperState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: height
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mir_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_HeightState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: qr_marker_name
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
    using DataType = mir_msgs::msg::HookExtendedStatus;
    is_plain =
      (
      offsetof(DataType, qr_marker_name) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _HookExtendedStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mir_msgs::msg::HookExtendedStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HookExtendedStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mir_msgs::msg::HookExtendedStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HookExtendedStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mir_msgs::msg::HookExtendedStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HookExtendedStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HookExtendedStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HookExtendedStatus__callbacks = {
  "mir_msgs::msg",
  "HookExtendedStatus",
  _HookExtendedStatus__cdr_serialize,
  _HookExtendedStatus__cdr_deserialize,
  _HookExtendedStatus__get_serialized_size,
  _HookExtendedStatus__max_serialized_size
};

static rosidl_message_type_support_t _HookExtendedStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HookExtendedStatus__callbacks,
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
get_message_type_support_handle<mir_msgs::msg::HookExtendedStatus>()
{
  return &mir_msgs::msg::typesupport_fastrtps_cpp::_HookExtendedStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mir_msgs, msg, HookExtendedStatus)() {
  return &mir_msgs::msg::typesupport_fastrtps_cpp::_HookExtendedStatus__handle;
}

#ifdef __cplusplus
}
#endif
