// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/SafetyStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__SAFETY_STATUS__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__SAFETY_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__SafetyStatus __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__SafetyStatus __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SafetyStatus_
{
  using Type = SafetyStatus_<ContainerAllocator>;

  explicit SafetyStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_connected = false;
      this->is_firmware_ok = false;
      this->firmware_version = 0l;
      this->in_protective_stop = false;
      this->in_emergency_stop = false;
      this->sto_feedback = false;
      this->is_restart_required = false;
      this->is_safety_muted = false;
      this->max_lin_speed = 0.0;
      this->max_rot_speed = 0.0;
      this->mute_mask = 0;
      this->partial_mute_mask = 0;
      this->is_limited_speed_active = false;
      this->is_lifter_down = false;
      this->in_sleep_mode = false;
      this->in_manual_mode = false;
      this->is_manual_mode_restart_required = false;
    }
  }

  explicit SafetyStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_connected = false;
      this->is_firmware_ok = false;
      this->firmware_version = 0l;
      this->in_protective_stop = false;
      this->in_emergency_stop = false;
      this->sto_feedback = false;
      this->is_restart_required = false;
      this->is_safety_muted = false;
      this->max_lin_speed = 0.0;
      this->max_rot_speed = 0.0;
      this->mute_mask = 0;
      this->partial_mute_mask = 0;
      this->is_limited_speed_active = false;
      this->is_lifter_down = false;
      this->in_sleep_mode = false;
      this->in_manual_mode = false;
      this->is_manual_mode_restart_required = false;
    }
  }

  // field types and members
  using _is_connected_type =
    bool;
  _is_connected_type is_connected;
  using _is_firmware_ok_type =
    bool;
  _is_firmware_ok_type is_firmware_ok;
  using _firmware_version_type =
    int32_t;
  _firmware_version_type firmware_version;
  using _in_protective_stop_type =
    bool;
  _in_protective_stop_type in_protective_stop;
  using _in_emergency_stop_type =
    bool;
  _in_emergency_stop_type in_emergency_stop;
  using _sto_feedback_type =
    bool;
  _sto_feedback_type sto_feedback;
  using _is_restart_required_type =
    bool;
  _is_restart_required_type is_restart_required;
  using _is_safety_muted_type =
    bool;
  _is_safety_muted_type is_safety_muted;
  using _max_lin_speed_type =
    double;
  _max_lin_speed_type max_lin_speed;
  using _max_rot_speed_type =
    double;
  _max_rot_speed_type max_rot_speed;
  using _mute_mask_type =
    uint8_t;
  _mute_mask_type mute_mask;
  using _partial_mute_mask_type =
    uint8_t;
  _partial_mute_mask_type partial_mute_mask;
  using _is_limited_speed_active_type =
    bool;
  _is_limited_speed_active_type is_limited_speed_active;
  using _is_lifter_down_type =
    bool;
  _is_lifter_down_type is_lifter_down;
  using _in_sleep_mode_type =
    bool;
  _in_sleep_mode_type in_sleep_mode;
  using _in_manual_mode_type =
    bool;
  _in_manual_mode_type in_manual_mode;
  using _is_manual_mode_restart_required_type =
    bool;
  _is_manual_mode_restart_required_type is_manual_mode_restart_required;

  // setters for named parameter idiom
  Type & set__is_connected(
    const bool & _arg)
  {
    this->is_connected = _arg;
    return *this;
  }
  Type & set__is_firmware_ok(
    const bool & _arg)
  {
    this->is_firmware_ok = _arg;
    return *this;
  }
  Type & set__firmware_version(
    const int32_t & _arg)
  {
    this->firmware_version = _arg;
    return *this;
  }
  Type & set__in_protective_stop(
    const bool & _arg)
  {
    this->in_protective_stop = _arg;
    return *this;
  }
  Type & set__in_emergency_stop(
    const bool & _arg)
  {
    this->in_emergency_stop = _arg;
    return *this;
  }
  Type & set__sto_feedback(
    const bool & _arg)
  {
    this->sto_feedback = _arg;
    return *this;
  }
  Type & set__is_restart_required(
    const bool & _arg)
  {
    this->is_restart_required = _arg;
    return *this;
  }
  Type & set__is_safety_muted(
    const bool & _arg)
  {
    this->is_safety_muted = _arg;
    return *this;
  }
  Type & set__max_lin_speed(
    const double & _arg)
  {
    this->max_lin_speed = _arg;
    return *this;
  }
  Type & set__max_rot_speed(
    const double & _arg)
  {
    this->max_rot_speed = _arg;
    return *this;
  }
  Type & set__mute_mask(
    const uint8_t & _arg)
  {
    this->mute_mask = _arg;
    return *this;
  }
  Type & set__partial_mute_mask(
    const uint8_t & _arg)
  {
    this->partial_mute_mask = _arg;
    return *this;
  }
  Type & set__is_limited_speed_active(
    const bool & _arg)
  {
    this->is_limited_speed_active = _arg;
    return *this;
  }
  Type & set__is_lifter_down(
    const bool & _arg)
  {
    this->is_lifter_down = _arg;
    return *this;
  }
  Type & set__in_sleep_mode(
    const bool & _arg)
  {
    this->in_sleep_mode = _arg;
    return *this;
  }
  Type & set__in_manual_mode(
    const bool & _arg)
  {
    this->in_manual_mode = _arg;
    return *this;
  }
  Type & set__is_manual_mode_restart_required(
    const bool & _arg)
  {
    this->is_manual_mode_restart_required = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MUTE_FRONT_RIGHT =
    1u;
  static constexpr uint8_t MUTE_FRONT_CENTER =
    2u;
  static constexpr uint8_t MUTE_FRONT_LEFT =
    4u;
  static constexpr uint8_t MUTE_LEFT_CENTER =
    8u;
  static constexpr uint8_t MUTE_REAR_LEFT =
    16u;
  static constexpr uint8_t MUTE_REAR_CENTER =
    32u;
  static constexpr uint8_t MUTE_REAR_RIGHT =
    64u;
  static constexpr uint8_t MUTE_RIGHT_CENTER =
    128u;
  static constexpr uint8_t MUTE_FRONT =
    7u;
  static constexpr uint8_t MUTE_LEFT =
    28u;
  static constexpr uint8_t MUTE_REAR =
    112u;
  static constexpr uint8_t MUTE_RIGHT =
    193u;
  static constexpr uint8_t MUTE_SIDES =
    221u;
  static constexpr uint8_t MUTE_ALL =
    255u;

  // pointer types
  using RawPtr =
    mir_msgs::msg::SafetyStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::SafetyStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::SafetyStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::SafetyStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::SafetyStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::SafetyStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::SafetyStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::SafetyStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::SafetyStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::SafetyStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__SafetyStatus
    std::shared_ptr<mir_msgs::msg::SafetyStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__SafetyStatus
    std::shared_ptr<mir_msgs::msg::SafetyStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafetyStatus_ & other) const
  {
    if (this->is_connected != other.is_connected) {
      return false;
    }
    if (this->is_firmware_ok != other.is_firmware_ok) {
      return false;
    }
    if (this->firmware_version != other.firmware_version) {
      return false;
    }
    if (this->in_protective_stop != other.in_protective_stop) {
      return false;
    }
    if (this->in_emergency_stop != other.in_emergency_stop) {
      return false;
    }
    if (this->sto_feedback != other.sto_feedback) {
      return false;
    }
    if (this->is_restart_required != other.is_restart_required) {
      return false;
    }
    if (this->is_safety_muted != other.is_safety_muted) {
      return false;
    }
    if (this->max_lin_speed != other.max_lin_speed) {
      return false;
    }
    if (this->max_rot_speed != other.max_rot_speed) {
      return false;
    }
    if (this->mute_mask != other.mute_mask) {
      return false;
    }
    if (this->partial_mute_mask != other.partial_mute_mask) {
      return false;
    }
    if (this->is_limited_speed_active != other.is_limited_speed_active) {
      return false;
    }
    if (this->is_lifter_down != other.is_lifter_down) {
      return false;
    }
    if (this->in_sleep_mode != other.in_sleep_mode) {
      return false;
    }
    if (this->in_manual_mode != other.in_manual_mode) {
      return false;
    }
    if (this->is_manual_mode_restart_required != other.is_manual_mode_restart_required) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafetyStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafetyStatus_

// alias to use template instance with default allocator
using SafetyStatus =
  mir_msgs::msg::SafetyStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::MUTE_FRONT_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::MUTE_FRONT_CENTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::MUTE_FRONT_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::MUTE_LEFT_CENTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::MUTE_REAR_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::MUTE_REAR_CENTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::MUTE_REAR_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::MUTE_RIGHT_CENTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::MUTE_FRONT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::MUTE_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::MUTE_REAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::MUTE_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::MUTE_SIDES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::MUTE_ALL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__SAFETY_STATUS__STRUCT_HPP_
