// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mir_msgs:msg/WorldMap.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/world_map__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mir_msgs/msg/detail/world_map__struct.hpp"

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
  const mir_msgs::msg::ResourcesState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mir_msgs::msg::ResourcesState &);
size_t get_serialized_size(
  const mir_msgs::msg::ResourcesState &,
  size_t current_alignment);
size_t
max_serialized_size_ResourcesState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mir_msgs

// functions for mir_msgs::msg::ResourcesState already declared above

namespace mir_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const mir_msgs::msg::ExternalRobots &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mir_msgs::msg::ExternalRobots &);
size_t get_serialized_size(
  const mir_msgs::msg::ExternalRobots &,
  size_t current_alignment);
size_t
max_serialized_size_ExternalRobots(
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
  const mir_msgs::msg::WorldMap & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: positions
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.positions,
    cdr);
  // Member: areas
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.areas,
    cdr);
  // Member: robots
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.robots,
    cdr);
  // Member: map_id
  cdr << ros_message.map_id;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs::msg::WorldMap & ros_message)
{
  // Member: positions
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.positions);

  // Member: areas
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.areas);

  // Member: robots
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.robots);

  // Member: map_id
  cdr >> ros_message.map_id;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
get_serialized_size(
  const mir_msgs::msg::WorldMap & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: positions

  current_alignment +=
    mir_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.positions, current_alignment);
  // Member: areas

  current_alignment +=
    mir_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.areas, current_alignment);
  // Member: robots

  current_alignment +=
    mir_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.robots, current_alignment);
  // Member: map_id
  {
    size_t item_size = sizeof(ros_message.map_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
max_serialized_size_WorldMap(
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


  // Member: positions
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mir_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ResourcesState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: areas
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mir_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ResourcesState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: robots
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mir_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ExternalRobots(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: map_id
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
    using DataType = mir_msgs::msg::WorldMap;
    is_plain =
      (
      offsetof(DataType, map_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _WorldMap__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mir_msgs::msg::WorldMap *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WorldMap__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mir_msgs::msg::WorldMap *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WorldMap__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mir_msgs::msg::WorldMap *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WorldMap__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_WorldMap(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _WorldMap__callbacks = {
  "mir_msgs::msg",
  "WorldMap",
  _WorldMap__cdr_serialize,
  _WorldMap__cdr_deserialize,
  _WorldMap__get_serialized_size,
  _WorldMap__max_serialized_size
};

static rosidl_message_type_support_t _WorldMap__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WorldMap__callbacks,
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
get_message_type_support_handle<mir_msgs::msg::WorldMap>()
{
  return &mir_msgs::msg::typesupport_fastrtps_cpp::_WorldMap__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mir_msgs, msg, WorldMap)() {
  return &mir_msgs::msg::typesupport_fastrtps_cpp::_WorldMap__handle;
}

#ifdef __cplusplus
}
#endif
