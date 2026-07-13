// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdc21x0:msg/StampedEncoders.idl
// generated code does not contain a copyright notice

#ifndef SDC21X0__MSG__DETAIL__STAMPED_ENCODERS__STRUCT_HPP_
#define SDC21X0__MSG__DETAIL__STAMPED_ENCODERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'encoders'
#include "sdc21x0/msg/detail/encoders__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sdc21x0__msg__StampedEncoders __attribute__((deprecated))
#else
# define DEPRECATED__sdc21x0__msg__StampedEncoders __declspec(deprecated)
#endif

namespace sdc21x0
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StampedEncoders_
{
  using Type = StampedEncoders_<ContainerAllocator>;

  explicit StampedEncoders_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    encoders(_init)
  {
    (void)_init;
  }

  explicit StampedEncoders_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    encoders(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _encoders_type =
    sdc21x0::msg::Encoders_<ContainerAllocator>;
  _encoders_type encoders;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__encoders(
    const sdc21x0::msg::Encoders_<ContainerAllocator> & _arg)
  {
    this->encoders = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdc21x0::msg::StampedEncoders_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdc21x0::msg::StampedEncoders_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdc21x0::msg::StampedEncoders_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdc21x0::msg::StampedEncoders_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdc21x0::msg::StampedEncoders_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdc21x0::msg::StampedEncoders_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdc21x0::msg::StampedEncoders_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdc21x0::msg::StampedEncoders_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdc21x0::msg::StampedEncoders_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdc21x0::msg::StampedEncoders_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdc21x0__msg__StampedEncoders
    std::shared_ptr<sdc21x0::msg::StampedEncoders_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdc21x0__msg__StampedEncoders
    std::shared_ptr<sdc21x0::msg::StampedEncoders_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StampedEncoders_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->encoders != other.encoders) {
      return false;
    }
    return true;
  }
  bool operator!=(const StampedEncoders_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StampedEncoders_

// alias to use template instance with default allocator
using StampedEncoders =
  sdc21x0::msg::StampedEncoders_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdc21x0

#endif  // SDC21X0__MSG__DETAIL__STAMPED_ENCODERS__STRUCT_HPP_
