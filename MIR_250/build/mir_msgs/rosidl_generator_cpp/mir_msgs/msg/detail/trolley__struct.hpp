// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/Trolley.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__TROLLEY__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__TROLLEY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__Trolley __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__Trolley __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Trolley_
{
  using Type = Trolley_<ContainerAllocator>;

  explicit Trolley_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->length = 0.0f;
      this->width = 0.0f;
      this->height = 0.0f;
      this->offset_locked_wheels = 0.0f;
    }
  }

  explicit Trolley_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->length = 0.0f;
      this->width = 0.0f;
      this->height = 0.0f;
      this->offset_locked_wheels = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _length_type =
    float;
  _length_type length;
  using _width_type =
    float;
  _width_type width;
  using _height_type =
    float;
  _height_type height;
  using _offset_locked_wheels_type =
    float;
  _offset_locked_wheels_type offset_locked_wheels;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__length(
    const float & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__offset_locked_wheels(
    const float & _arg)
  {
    this->offset_locked_wheels = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::Trolley_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::Trolley_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::Trolley_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::Trolley_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::Trolley_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::Trolley_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::Trolley_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::Trolley_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::Trolley_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::Trolley_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__Trolley
    std::shared_ptr<mir_msgs::msg::Trolley_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__Trolley
    std::shared_ptr<mir_msgs::msg::Trolley_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trolley_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->offset_locked_wheels != other.offset_locked_wheels) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trolley_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trolley_

// alias to use template instance with default allocator
using Trolley =
  mir_msgs::msg::Trolley_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__TROLLEY__STRUCT_HPP_
