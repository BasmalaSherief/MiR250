// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mir_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#include "mir_msgs/msg/detail/robot_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mir_msgs/msg/detail/robot_status__struct.hpp"

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
  const mir_msgs::msg::Error &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mir_msgs::msg::Error &);
size_t get_serialized_size(
  const mir_msgs::msg::Error &,
  size_t current_alignment);
size_t
max_serialized_size_Error(
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
  const mir_msgs::msg::HookStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mir_msgs::msg::HookStatus &);
size_t get_serialized_size(
  const mir_msgs::msg::HookStatus &,
  size_t current_alignment);
size_t
max_serialized_size_HookStatus(
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
  const mir_msgs::msg::Pose2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mir_msgs::msg::Pose2D &);
size_t get_serialized_size(
  const mir_msgs::msg::Pose2D &,
  size_t current_alignment);
size_t
max_serialized_size_Pose2D(
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
  const mir_msgs::msg::Twist2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mir_msgs::msg::Twist2D &);
size_t get_serialized_size(
  const mir_msgs::msg::Twist2D &,
  size_t current_alignment);
size_t
max_serialized_size_Twist2D(
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
  const mir_msgs::msg::UserPrompt &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mir_msgs::msg::UserPrompt &);
size_t get_serialized_size(
  const mir_msgs::msg::UserPrompt &,
  size_t current_alignment);
size_t
max_serialized_size_UserPrompt(
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
  const mir_msgs::msg::RobotStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: battery_percentage
  cdr << ros_message.battery_percentage;
  // Member: battery_time_remaining
  cdr << ros_message.battery_time_remaining;
  // Member: battery_voltage
  cdr << ros_message.battery_voltage;
  // Member: distance_to_next_target
  cdr << ros_message.distance_to_next_target;
  // Member: errors
  {
    size_t size = ros_message.errors.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      mir_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.errors[i],
        cdr);
    }
  }
  // Member: footprint
  cdr << ros_message.footprint;
  // Member: hook_status
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.hook_status,
    cdr);
  // Member: map_id
  cdr << ros_message.map_id;
  // Member: unloaded_map_changes
  cdr << (ros_message.unloaded_map_changes ? true : false);
  // Member: mission_queue_id
  cdr << ros_message.mission_queue_id;
  // Member: mission_text
  cdr << ros_message.mission_text;
  // Member: mode_id
  cdr << ros_message.mode_id;
  // Member: mode_text
  cdr << ros_message.mode_text;
  // Member: moved
  cdr << ros_message.moved;
  // Member: position
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.position,
    cdr);
  // Member: robot_name
  cdr << ros_message.robot_name;
  // Member: session_id
  cdr << ros_message.session_id;
  // Member: software_version
  cdr << ros_message.software_version;
  // Member: state_id
  cdr << ros_message.state_id;
  // Member: state_text
  cdr << ros_message.state_text;
  // Member: uptime
  cdr << ros_message.uptime;
  // Member: velocity
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.velocity,
    cdr);
  // Member: user_prompt
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.user_prompt,
    cdr);
  // Member: safety_system_muted
  cdr << (ros_message.safety_system_muted ? true : false);
  // Member: joystick_low_speed_mode_enabled
  cdr << (ros_message.joystick_low_speed_mode_enabled ? true : false);
  // Member: joystick_web_session_id
  cdr << ros_message.joystick_web_session_id;
  // Member: mode_key_state
  cdr << ros_message.mode_key_state;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mir_msgs::msg::RobotStatus & ros_message)
{
  // Member: battery_percentage
  cdr >> ros_message.battery_percentage;

  // Member: battery_time_remaining
  cdr >> ros_message.battery_time_remaining;

  // Member: battery_voltage
  cdr >> ros_message.battery_voltage;

  // Member: distance_to_next_target
  cdr >> ros_message.distance_to_next_target;

  // Member: errors
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.errors.resize(size);
    for (size_t i = 0; i < size; i++) {
      mir_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.errors[i]);
    }
  }

  // Member: footprint
  cdr >> ros_message.footprint;

  // Member: hook_status
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.hook_status);

  // Member: map_id
  cdr >> ros_message.map_id;

  // Member: unloaded_map_changes
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.unloaded_map_changes = tmp ? true : false;
  }

  // Member: mission_queue_id
  cdr >> ros_message.mission_queue_id;

  // Member: mission_text
  cdr >> ros_message.mission_text;

  // Member: mode_id
  cdr >> ros_message.mode_id;

  // Member: mode_text
  cdr >> ros_message.mode_text;

  // Member: moved
  cdr >> ros_message.moved;

  // Member: position
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.position);

  // Member: robot_name
  cdr >> ros_message.robot_name;

  // Member: session_id
  cdr >> ros_message.session_id;

  // Member: software_version
  cdr >> ros_message.software_version;

  // Member: state_id
  cdr >> ros_message.state_id;

  // Member: state_text
  cdr >> ros_message.state_text;

  // Member: uptime
  cdr >> ros_message.uptime;

  // Member: velocity
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.velocity);

  // Member: user_prompt
  mir_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.user_prompt);

  // Member: safety_system_muted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.safety_system_muted = tmp ? true : false;
  }

  // Member: joystick_low_speed_mode_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.joystick_low_speed_mode_enabled = tmp ? true : false;
  }

  // Member: joystick_web_session_id
  cdr >> ros_message.joystick_web_session_id;

  // Member: mode_key_state
  cdr >> ros_message.mode_key_state;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
get_serialized_size(
  const mir_msgs::msg::RobotStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: battery_percentage
  {
    size_t item_size = sizeof(ros_message.battery_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_time_remaining
  {
    size_t item_size = sizeof(ros_message.battery_time_remaining);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_voltage
  {
    size_t item_size = sizeof(ros_message.battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distance_to_next_target
  {
    size_t item_size = sizeof(ros_message.distance_to_next_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: errors
  {
    size_t array_size = ros_message.errors.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mir_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.errors[index], current_alignment);
    }
  }
  // Member: footprint
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.footprint.size() + 1);
  // Member: hook_status

  current_alignment +=
    mir_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.hook_status, current_alignment);
  // Member: map_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.map_id.size() + 1);
  // Member: unloaded_map_changes
  {
    size_t item_size = sizeof(ros_message.unloaded_map_changes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mission_queue_id
  {
    size_t item_size = sizeof(ros_message.mission_queue_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mission_text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.mission_text.size() + 1);
  // Member: mode_id
  {
    size_t item_size = sizeof(ros_message.mode_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.mode_text.size() + 1);
  // Member: moved
  {
    size_t item_size = sizeof(ros_message.moved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position

  current_alignment +=
    mir_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.position, current_alignment);
  // Member: robot_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.robot_name.size() + 1);
  // Member: session_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.session_id.size() + 1);
  // Member: software_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.software_version.size() + 1);
  // Member: state_id
  {
    size_t item_size = sizeof(ros_message.state_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: state_text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.state_text.size() + 1);
  // Member: uptime
  {
    size_t item_size = sizeof(ros_message.uptime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity

  current_alignment +=
    mir_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.velocity, current_alignment);
  // Member: user_prompt

  current_alignment +=
    mir_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.user_prompt, current_alignment);
  // Member: safety_system_muted
  {
    size_t item_size = sizeof(ros_message.safety_system_muted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joystick_low_speed_mode_enabled
  {
    size_t item_size = sizeof(ros_message.joystick_low_speed_mode_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joystick_web_session_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.joystick_web_session_id.size() + 1);
  // Member: mode_key_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.mode_key_state.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mir_msgs
max_serialized_size_RobotStatus(
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


  // Member: battery_percentage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: battery_time_remaining
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: battery_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: distance_to_next_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: errors
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mir_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Error(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: footprint
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

  // Member: hook_status
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mir_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_HookStatus(
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

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: unloaded_map_changes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mission_queue_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mission_text
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

  // Member: mode_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_text
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

  // Member: moved
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: position
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mir_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: robot_name
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

  // Member: session_id
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

  // Member: software_version
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

  // Member: state_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: state_text
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

  // Member: uptime
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocity
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mir_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Twist2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: user_prompt
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mir_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UserPrompt(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: safety_system_muted
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: joystick_low_speed_mode_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: joystick_web_session_id
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

  // Member: mode_key_state
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
    using DataType = mir_msgs::msg::RobotStatus;
    is_plain =
      (
      offsetof(DataType, mode_key_state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RobotStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mir_msgs::msg::RobotStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mir_msgs::msg::RobotStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mir_msgs::msg::RobotStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RobotStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RobotStatus__callbacks = {
  "mir_msgs::msg",
  "RobotStatus",
  _RobotStatus__cdr_serialize,
  _RobotStatus__cdr_deserialize,
  _RobotStatus__get_serialized_size,
  _RobotStatus__max_serialized_size
};

static rosidl_message_type_support_t _RobotStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotStatus__callbacks,
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
get_message_type_support_handle<mir_msgs::msg::RobotStatus>()
{
  return &mir_msgs::msg::typesupport_fastrtps_cpp::_RobotStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mir_msgs, msg, RobotStatus)() {
  return &mir_msgs::msg::typesupport_fastrtps_cpp::_RobotStatus__handle;
}

#ifdef __cplusplus
}
#endif
