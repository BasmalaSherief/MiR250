// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/Gpio.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__GPIO__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__GPIO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__Gpio __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__Gpio __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gpio_
{
  using Type = Gpio_<ContainerAllocator>;

  explicit Gpio_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ioport = 0;
      this->dat = 0;
    }
  }

  explicit Gpio_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ioport = 0;
      this->dat = 0;
    }
  }

  // field types and members
  using _ioport_type =
    uint8_t;
  _ioport_type ioport;
  using _dat_type =
    uint8_t;
  _dat_type dat;

  // setters for named parameter idiom
  Type & set__ioport(
    const uint8_t & _arg)
  {
    this->ioport = _arg;
    return *this;
  }
  Type & set__dat(
    const uint8_t & _arg)
  {
    this->dat = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t POWERBOARD_GPIO =
    0u;
  static constexpr uint8_t POWERBOARD_RESET_SWITCH_LED =
    1u;
  static constexpr uint8_t PENDANT_INPUT =
    5u;
  static constexpr uint8_t AUTO_MODE_SWITCH =
    10u;
  static constexpr uint8_t MANUAL_MODE_SWITCH =
    11u;

  // pointer types
  using RawPtr =
    mir_msgs::msg::Gpio_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::Gpio_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::Gpio_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::Gpio_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::Gpio_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::Gpio_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::Gpio_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::Gpio_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::Gpio_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::Gpio_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__Gpio
    std::shared_ptr<mir_msgs::msg::Gpio_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__Gpio
    std::shared_ptr<mir_msgs::msg::Gpio_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gpio_ & other) const
  {
    if (this->ioport != other.ioport) {
      return false;
    }
    if (this->dat != other.dat) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gpio_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gpio_

// alias to use template instance with default allocator
using Gpio =
  mir_msgs::msg::Gpio_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Gpio_<ContainerAllocator>::POWERBOARD_GPIO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Gpio_<ContainerAllocator>::POWERBOARD_RESET_SWITCH_LED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Gpio_<ContainerAllocator>::PENDANT_INPUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Gpio_<ContainerAllocator>::AUTO_MODE_SWITCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Gpio_<ContainerAllocator>::MANUAL_MODE_SWITCH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__GPIO__STRUCT_HPP_
