// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/PalletLifterStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PALLET_LIFTER_STATUS__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__PALLET_LIFTER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__PalletLifterStatus __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__PalletLifterStatus __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PalletLifterStatus_
{
  using Type = PalletLifterStatus_<ContainerAllocator>;

  explicit PalletLifterStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_enabled = false;
      this->state = 0;
    }
  }

  explicit PalletLifterStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_enabled = false;
      this->state = 0;
    }
  }

  // field types and members
  using _is_enabled_type =
    bool;
  _is_enabled_type is_enabled;
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__is_enabled(
    const bool & _arg)
  {
    this->is_enabled = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PALLET_LIFT_STATE_DISABLED =
    0u;
  static constexpr uint8_t PALLET_LIFT_STATE_MOVING =
    1u;
  static constexpr uint8_t PALLET_LIFT_STATE_DOWN =
    2u;
  static constexpr uint8_t PALLET_LIFT_STATE_UP =
    3u;

  // pointer types
  using RawPtr =
    mir_msgs::msg::PalletLifterStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::PalletLifterStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::PalletLifterStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::PalletLifterStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::PalletLifterStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::PalletLifterStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::PalletLifterStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::PalletLifterStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::PalletLifterStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::PalletLifterStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__PalletLifterStatus
    std::shared_ptr<mir_msgs::msg::PalletLifterStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__PalletLifterStatus
    std::shared_ptr<mir_msgs::msg::PalletLifterStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PalletLifterStatus_ & other) const
  {
    if (this->is_enabled != other.is_enabled) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const PalletLifterStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PalletLifterStatus_

// alias to use template instance with default allocator
using PalletLifterStatus =
  mir_msgs::msg::PalletLifterStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PalletLifterStatus_<ContainerAllocator>::PALLET_LIFT_STATE_DISABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PalletLifterStatus_<ContainerAllocator>::PALLET_LIFT_STATE_MOVING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PalletLifterStatus_<ContainerAllocator>::PALLET_LIFT_STATE_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PalletLifterStatus_<ContainerAllocator>::PALLET_LIFT_STATE_UP;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__PALLET_LIFTER_STATUS__STRUCT_HPP_
