// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/RobotMode.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__ROBOT_MODE__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__ROBOT_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__RobotMode __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__RobotMode __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotMode_
{
  using Type = RobotMode_<ContainerAllocator>;

  explicit RobotMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_mode = 0;
      this->robot_mode_string = "";
    }
  }

  explicit RobotMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_mode_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_mode = 0;
      this->robot_mode_string = "";
    }
  }

  // field types and members
  using _robot_mode_type =
    uint8_t;
  _robot_mode_type robot_mode;
  using _robot_mode_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_mode_string_type robot_mode_string;

  // setters for named parameter idiom
  Type & set__robot_mode(
    const uint8_t & _arg)
  {
    this->robot_mode = _arg;
    return *this;
  }
  Type & set__robot_mode_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_mode_string = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ROBOT_MODE_NONE =
    0u;
  static constexpr uint8_t ROBOT_MODE_MAPPING =
    3u;
  static constexpr uint8_t ROBOT_MODE_MAPPING_FINALIZING =
    4u;
  static constexpr uint8_t ROBOT_MODE_MISSION =
    7u;
  static constexpr uint8_t ROBOT_MODE_CHANGING =
    255u;

  // pointer types
  using RawPtr =
    mir_msgs::msg::RobotMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::RobotMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::RobotMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::RobotMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::RobotMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::RobotMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::RobotMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::RobotMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::RobotMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::RobotMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__RobotMode
    std::shared_ptr<mir_msgs::msg::RobotMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__RobotMode
    std::shared_ptr<mir_msgs::msg::RobotMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMode_ & other) const
  {
    if (this->robot_mode != other.robot_mode) {
      return false;
    }
    if (this->robot_mode_string != other.robot_mode_string) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMode_

// alias to use template instance with default allocator
using RobotMode =
  mir_msgs::msg::RobotMode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotMode_<ContainerAllocator>::ROBOT_MODE_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotMode_<ContainerAllocator>::ROBOT_MODE_MAPPING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotMode_<ContainerAllocator>::ROBOT_MODE_MAPPING_FINALIZING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotMode_<ContainerAllocator>::ROBOT_MODE_MISSION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotMode_<ContainerAllocator>::ROBOT_MODE_CHANGING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__ROBOT_MODE__STRUCT_HPP_
