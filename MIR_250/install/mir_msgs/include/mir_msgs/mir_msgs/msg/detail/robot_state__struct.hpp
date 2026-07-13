// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__RobotState __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__RobotState __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotState_
{
  using Type = RobotState_<ContainerAllocator>;

  explicit RobotState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_state = 0;
      this->robot_state_string = "";
    }
  }

  explicit RobotState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_state_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_state = 0;
      this->robot_state_string = "";
    }
  }

  // field types and members
  using _robot_state_type =
    uint8_t;
  _robot_state_type robot_state;
  using _robot_state_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_state_string_type robot_state_string;

  // setters for named parameter idiom
  Type & set__robot_state(
    const uint8_t & _arg)
  {
    this->robot_state = _arg;
    return *this;
  }
  Type & set__robot_state_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_state_string = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ROBOT_STATE_NONE =
    0u;
  static constexpr uint8_t ROBOT_STATE_STARTING =
    1u;
  static constexpr uint8_t ROBOT_STATE_SHUTTINGDOWN =
    2u;
  static constexpr uint8_t ROBOT_STATE_READY =
    3u;
  static constexpr uint8_t ROBOT_STATE_PAUSE =
    4u;
  static constexpr uint8_t ROBOT_STATE_EXECUTING =
    5u;
  static constexpr uint8_t ROBOT_STATE_ABORTED =
    6u;
  static constexpr uint8_t ROBOT_STATE_COMPLETED =
    7u;
  static constexpr uint8_t ROBOT_STATE_DOCKED =
    8u;
  static constexpr uint8_t ROBOT_STATE_DOCKING =
    9u;
  static constexpr uint8_t ROBOT_STATE_EMERGENCYSTOP =
    10u;
  static constexpr uint8_t ROBOT_STATE_MANUALCONTROL =
    11u;
  static constexpr uint8_t ROBOT_STATE_ERROR =
    12u;

  // pointer types
  using RawPtr =
    mir_msgs::msg::RobotState_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::RobotState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::RobotState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::RobotState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::RobotState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::RobotState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::RobotState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::RobotState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::RobotState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::RobotState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__RobotState
    std::shared_ptr<mir_msgs::msg::RobotState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__RobotState
    std::shared_ptr<mir_msgs::msg::RobotState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotState_ & other) const
  {
    if (this->robot_state != other.robot_state) {
      return false;
    }
    if (this->robot_state_string != other.robot_state_string) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotState_

// alias to use template instance with default allocator
using RobotState =
  mir_msgs::msg::RobotState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotState_<ContainerAllocator>::ROBOT_STATE_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotState_<ContainerAllocator>::ROBOT_STATE_STARTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotState_<ContainerAllocator>::ROBOT_STATE_SHUTTINGDOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotState_<ContainerAllocator>::ROBOT_STATE_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotState_<ContainerAllocator>::ROBOT_STATE_PAUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotState_<ContainerAllocator>::ROBOT_STATE_EXECUTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotState_<ContainerAllocator>::ROBOT_STATE_ABORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotState_<ContainerAllocator>::ROBOT_STATE_COMPLETED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotState_<ContainerAllocator>::ROBOT_STATE_DOCKED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotState_<ContainerAllocator>::ROBOT_STATE_DOCKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotState_<ContainerAllocator>::ROBOT_STATE_EMERGENCYSTOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotState_<ContainerAllocator>::ROBOT_STATE_MANUALCONTROL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotState_<ContainerAllocator>::ROBOT_STATE_ERROR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
