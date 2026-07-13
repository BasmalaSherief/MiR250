// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'errors'
#include "mir_msgs/msg/detail/error__struct.hpp"
// Member 'hook_status'
#include "mir_msgs/msg/detail/hook_status__struct.hpp"
// Member 'position'
#include "mir_msgs/msg/detail/pose2_d__struct.hpp"
// Member 'velocity'
#include "mir_msgs/msg/detail/twist2_d__struct.hpp"
// Member 'user_prompt'
#include "mir_msgs/msg/detail/user_prompt__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__RobotStatus __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__RobotStatus __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotStatus_
{
  using Type = RobotStatus_<ContainerAllocator>;

  explicit RobotStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : hook_status(_init),
    position(_init),
    velocity(_init),
    user_prompt(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_percentage = 0.0f;
      this->battery_time_remaining = 0l;
      this->battery_voltage = 0.0f;
      this->distance_to_next_target = 0.0f;
      this->footprint = "";
      this->map_id = "";
      this->unloaded_map_changes = false;
      this->mission_queue_id = 0l;
      this->mission_text = "";
      this->mode_id = 0l;
      this->mode_text = "";
      this->moved = 0.0;
      this->robot_name = "";
      this->session_id = "";
      this->software_version = "";
      this->state_id = 0;
      this->state_text = "";
      this->uptime = 0l;
      this->safety_system_muted = false;
      this->joystick_low_speed_mode_enabled = false;
      this->joystick_web_session_id = "";
      this->mode_key_state = "";
    }
  }

  explicit RobotStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : footprint(_alloc),
    hook_status(_alloc, _init),
    map_id(_alloc),
    mission_text(_alloc),
    mode_text(_alloc),
    position(_alloc, _init),
    robot_name(_alloc),
    session_id(_alloc),
    software_version(_alloc),
    state_text(_alloc),
    velocity(_alloc, _init),
    user_prompt(_alloc, _init),
    joystick_web_session_id(_alloc),
    mode_key_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_percentage = 0.0f;
      this->battery_time_remaining = 0l;
      this->battery_voltage = 0.0f;
      this->distance_to_next_target = 0.0f;
      this->footprint = "";
      this->map_id = "";
      this->unloaded_map_changes = false;
      this->mission_queue_id = 0l;
      this->mission_text = "";
      this->mode_id = 0l;
      this->mode_text = "";
      this->moved = 0.0;
      this->robot_name = "";
      this->session_id = "";
      this->software_version = "";
      this->state_id = 0;
      this->state_text = "";
      this->uptime = 0l;
      this->safety_system_muted = false;
      this->joystick_low_speed_mode_enabled = false;
      this->joystick_web_session_id = "";
      this->mode_key_state = "";
    }
  }

  // field types and members
  using _battery_percentage_type =
    float;
  _battery_percentage_type battery_percentage;
  using _battery_time_remaining_type =
    int32_t;
  _battery_time_remaining_type battery_time_remaining;
  using _battery_voltage_type =
    float;
  _battery_voltage_type battery_voltage;
  using _distance_to_next_target_type =
    float;
  _distance_to_next_target_type distance_to_next_target;
  using _errors_type =
    std::vector<mir_msgs::msg::Error_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mir_msgs::msg::Error_<ContainerAllocator>>>;
  _errors_type errors;
  using _footprint_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _footprint_type footprint;
  using _hook_status_type =
    mir_msgs::msg::HookStatus_<ContainerAllocator>;
  _hook_status_type hook_status;
  using _map_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_id_type map_id;
  using _unloaded_map_changes_type =
    bool;
  _unloaded_map_changes_type unloaded_map_changes;
  using _mission_queue_id_type =
    int32_t;
  _mission_queue_id_type mission_queue_id;
  using _mission_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_text_type mission_text;
  using _mode_id_type =
    int32_t;
  _mode_id_type mode_id;
  using _mode_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_text_type mode_text;
  using _moved_type =
    double;
  _moved_type moved;
  using _position_type =
    mir_msgs::msg::Pose2D_<ContainerAllocator>;
  _position_type position;
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;
  using _session_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _session_id_type session_id;
  using _software_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _software_version_type software_version;
  using _state_id_type =
    uint8_t;
  _state_id_type state_id;
  using _state_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_text_type state_text;
  using _uptime_type =
    int32_t;
  _uptime_type uptime;
  using _velocity_type =
    mir_msgs::msg::Twist2D_<ContainerAllocator>;
  _velocity_type velocity;
  using _user_prompt_type =
    mir_msgs::msg::UserPrompt_<ContainerAllocator>;
  _user_prompt_type user_prompt;
  using _safety_system_muted_type =
    bool;
  _safety_system_muted_type safety_system_muted;
  using _joystick_low_speed_mode_enabled_type =
    bool;
  _joystick_low_speed_mode_enabled_type joystick_low_speed_mode_enabled;
  using _joystick_web_session_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joystick_web_session_id_type joystick_web_session_id;
  using _mode_key_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_key_state_type mode_key_state;

  // setters for named parameter idiom
  Type & set__battery_percentage(
    const float & _arg)
  {
    this->battery_percentage = _arg;
    return *this;
  }
  Type & set__battery_time_remaining(
    const int32_t & _arg)
  {
    this->battery_time_remaining = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const float & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__distance_to_next_target(
    const float & _arg)
  {
    this->distance_to_next_target = _arg;
    return *this;
  }
  Type & set__errors(
    const std::vector<mir_msgs::msg::Error_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mir_msgs::msg::Error_<ContainerAllocator>>> & _arg)
  {
    this->errors = _arg;
    return *this;
  }
  Type & set__footprint(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->footprint = _arg;
    return *this;
  }
  Type & set__hook_status(
    const mir_msgs::msg::HookStatus_<ContainerAllocator> & _arg)
  {
    this->hook_status = _arg;
    return *this;
  }
  Type & set__map_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_id = _arg;
    return *this;
  }
  Type & set__unloaded_map_changes(
    const bool & _arg)
  {
    this->unloaded_map_changes = _arg;
    return *this;
  }
  Type & set__mission_queue_id(
    const int32_t & _arg)
  {
    this->mission_queue_id = _arg;
    return *this;
  }
  Type & set__mission_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_text = _arg;
    return *this;
  }
  Type & set__mode_id(
    const int32_t & _arg)
  {
    this->mode_id = _arg;
    return *this;
  }
  Type & set__mode_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode_text = _arg;
    return *this;
  }
  Type & set__moved(
    const double & _arg)
  {
    this->moved = _arg;
    return *this;
  }
  Type & set__position(
    const mir_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__robot_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_name = _arg;
    return *this;
  }
  Type & set__session_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->session_id = _arg;
    return *this;
  }
  Type & set__software_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->software_version = _arg;
    return *this;
  }
  Type & set__state_id(
    const uint8_t & _arg)
  {
    this->state_id = _arg;
    return *this;
  }
  Type & set__state_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state_text = _arg;
    return *this;
  }
  Type & set__uptime(
    const int32_t & _arg)
  {
    this->uptime = _arg;
    return *this;
  }
  Type & set__velocity(
    const mir_msgs::msg::Twist2D_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__user_prompt(
    const mir_msgs::msg::UserPrompt_<ContainerAllocator> & _arg)
  {
    this->user_prompt = _arg;
    return *this;
  }
  Type & set__safety_system_muted(
    const bool & _arg)
  {
    this->safety_system_muted = _arg;
    return *this;
  }
  Type & set__joystick_low_speed_mode_enabled(
    const bool & _arg)
  {
    this->joystick_low_speed_mode_enabled = _arg;
    return *this;
  }
  Type & set__joystick_web_session_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joystick_web_session_id = _arg;
    return *this;
  }
  Type & set__mode_key_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode_key_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::RobotStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::RobotStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::RobotStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::RobotStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::RobotStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::RobotStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::RobotStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::RobotStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::RobotStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::RobotStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__RobotStatus
    std::shared_ptr<mir_msgs::msg::RobotStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__RobotStatus
    std::shared_ptr<mir_msgs::msg::RobotStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotStatus_ & other) const
  {
    if (this->battery_percentage != other.battery_percentage) {
      return false;
    }
    if (this->battery_time_remaining != other.battery_time_remaining) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->distance_to_next_target != other.distance_to_next_target) {
      return false;
    }
    if (this->errors != other.errors) {
      return false;
    }
    if (this->footprint != other.footprint) {
      return false;
    }
    if (this->hook_status != other.hook_status) {
      return false;
    }
    if (this->map_id != other.map_id) {
      return false;
    }
    if (this->unloaded_map_changes != other.unloaded_map_changes) {
      return false;
    }
    if (this->mission_queue_id != other.mission_queue_id) {
      return false;
    }
    if (this->mission_text != other.mission_text) {
      return false;
    }
    if (this->mode_id != other.mode_id) {
      return false;
    }
    if (this->mode_text != other.mode_text) {
      return false;
    }
    if (this->moved != other.moved) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->robot_name != other.robot_name) {
      return false;
    }
    if (this->session_id != other.session_id) {
      return false;
    }
    if (this->software_version != other.software_version) {
      return false;
    }
    if (this->state_id != other.state_id) {
      return false;
    }
    if (this->state_text != other.state_text) {
      return false;
    }
    if (this->uptime != other.uptime) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->user_prompt != other.user_prompt) {
      return false;
    }
    if (this->safety_system_muted != other.safety_system_muted) {
      return false;
    }
    if (this->joystick_low_speed_mode_enabled != other.joystick_low_speed_mode_enabled) {
      return false;
    }
    if (this->joystick_web_session_id != other.joystick_web_session_id) {
      return false;
    }
    if (this->mode_key_state != other.mode_key_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotStatus_

// alias to use template instance with default allocator
using RobotStatus =
  mir_msgs::msg::RobotStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
