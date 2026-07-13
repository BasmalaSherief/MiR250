// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/Encoders.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__ENCODERS__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__ENCODERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__Encoders __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__Encoders __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Encoders_
{
  using Type = Encoders_<ContainerAllocator>;

  explicit Encoders_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_delta = 0.0f;
      this->left_wheel = 0l;
      this->right_wheel = 0l;
    }
  }

  explicit Encoders_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_delta = 0.0f;
      this->left_wheel = 0l;
      this->right_wheel = 0l;
    }
  }

  // field types and members
  using _time_delta_type =
    float;
  _time_delta_type time_delta;
  using _left_wheel_type =
    int32_t;
  _left_wheel_type left_wheel;
  using _right_wheel_type =
    int32_t;
  _right_wheel_type right_wheel;

  // setters for named parameter idiom
  Type & set__time_delta(
    const float & _arg)
  {
    this->time_delta = _arg;
    return *this;
  }
  Type & set__left_wheel(
    const int32_t & _arg)
  {
    this->left_wheel = _arg;
    return *this;
  }
  Type & set__right_wheel(
    const int32_t & _arg)
  {
    this->right_wheel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::Encoders_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::Encoders_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::Encoders_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::Encoders_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::Encoders_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::Encoders_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::Encoders_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::Encoders_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::Encoders_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::Encoders_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__Encoders
    std::shared_ptr<mir_msgs::msg::Encoders_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__Encoders
    std::shared_ptr<mir_msgs::msg::Encoders_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Encoders_ & other) const
  {
    if (this->time_delta != other.time_delta) {
      return false;
    }
    if (this->left_wheel != other.left_wheel) {
      return false;
    }
    if (this->right_wheel != other.right_wheel) {
      return false;
    }
    return true;
  }
  bool operator!=(const Encoders_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Encoders_

// alias to use template instance with default allocator
using Encoders =
  mir_msgs::msg::Encoders_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__ENCODERS__STRUCT_HPP_
