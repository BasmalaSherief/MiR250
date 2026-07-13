// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/Pendant.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PENDANT__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__PENDANT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__Pendant __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__Pendant __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pendant_
{
  using Type = Pendant_<ContainerAllocator>;

  explicit Pendant_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->gpio_bits = 0;
    }
  }

  explicit Pendant_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->gpio_bits = 0;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _gpio_bits_type =
    uint8_t;
  _gpio_bits_type gpio_bits;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__gpio_bits(
    const uint8_t & _arg)
  {
    this->gpio_bits = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::Pendant_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::Pendant_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::Pendant_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::Pendant_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::Pendant_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::Pendant_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::Pendant_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::Pendant_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::Pendant_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::Pendant_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__Pendant
    std::shared_ptr<mir_msgs::msg::Pendant_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__Pendant
    std::shared_ptr<mir_msgs::msg::Pendant_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pendant_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->gpio_bits != other.gpio_bits) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pendant_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pendant_

// alias to use template instance with default allocator
using Pendant =
  mir_msgs::msg::Pendant_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__PENDANT__STRUCT_HPP_
