// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/MirExtra.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__MIR_EXTRA__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__MIR_EXTRA__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__MirExtra __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__MirExtra __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MirExtra_
{
  using Type = MirExtra_<ContainerAllocator>;

  explicit MirExtra_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_delta = 0.0f;
      this->r_rpm = 0.0f;
      this->l_rpm = 0.0f;
      this->vel = 0.0f;
      this->ang = 0.0f;
    }
  }

  explicit MirExtra_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_delta = 0.0f;
      this->r_rpm = 0.0f;
      this->l_rpm = 0.0f;
      this->vel = 0.0f;
      this->ang = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _time_delta_type =
    float;
  _time_delta_type time_delta;
  using _r_rpm_type =
    float;
  _r_rpm_type r_rpm;
  using _l_rpm_type =
    float;
  _l_rpm_type l_rpm;
  using _vel_type =
    float;
  _vel_type vel;
  using _ang_type =
    float;
  _ang_type ang;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__time_delta(
    const float & _arg)
  {
    this->time_delta = _arg;
    return *this;
  }
  Type & set__r_rpm(
    const float & _arg)
  {
    this->r_rpm = _arg;
    return *this;
  }
  Type & set__l_rpm(
    const float & _arg)
  {
    this->l_rpm = _arg;
    return *this;
  }
  Type & set__vel(
    const float & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__ang(
    const float & _arg)
  {
    this->ang = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::MirExtra_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::MirExtra_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::MirExtra_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::MirExtra_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::MirExtra_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::MirExtra_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::MirExtra_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::MirExtra_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::MirExtra_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::MirExtra_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__MirExtra
    std::shared_ptr<mir_msgs::msg::MirExtra_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__MirExtra
    std::shared_ptr<mir_msgs::msg::MirExtra_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MirExtra_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_delta != other.time_delta) {
      return false;
    }
    if (this->r_rpm != other.r_rpm) {
      return false;
    }
    if (this->l_rpm != other.l_rpm) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->ang != other.ang) {
      return false;
    }
    return true;
  }
  bool operator!=(const MirExtra_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MirExtra_

// alias to use template instance with default allocator
using MirExtra =
  mir_msgs::msg::MirExtra_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__MIR_EXTRA__STRUCT_HPP_
