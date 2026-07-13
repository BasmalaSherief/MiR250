// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/HookStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__HOOK_STATUS__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__HOOK_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trolley'
#include "mir_msgs/msg/detail/trolley__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__HookStatus __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__HookStatus __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HookStatus_
{
  using Type = HookStatus_<ContainerAllocator>;

  explicit HookStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trolley(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->available = false;
      this->length = 0.0f;
      this->height = 0.0f;
      this->angle = 0.0f;
      this->braked = false;
      this->trolley_attached = false;
    }
  }

  explicit HookStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trolley(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->available = false;
      this->length = 0.0f;
      this->height = 0.0f;
      this->angle = 0.0f;
      this->braked = false;
      this->trolley_attached = false;
    }
  }

  // field types and members
  using _available_type =
    bool;
  _available_type available;
  using _length_type =
    float;
  _length_type length;
  using _height_type =
    float;
  _height_type height;
  using _angle_type =
    float;
  _angle_type angle;
  using _braked_type =
    bool;
  _braked_type braked;
  using _trolley_attached_type =
    bool;
  _trolley_attached_type trolley_attached;
  using _trolley_type =
    mir_msgs::msg::Trolley_<ContainerAllocator>;
  _trolley_type trolley;

  // setters for named parameter idiom
  Type & set__available(
    const bool & _arg)
  {
    this->available = _arg;
    return *this;
  }
  Type & set__length(
    const float & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__braked(
    const bool & _arg)
  {
    this->braked = _arg;
    return *this;
  }
  Type & set__trolley_attached(
    const bool & _arg)
  {
    this->trolley_attached = _arg;
    return *this;
  }
  Type & set__trolley(
    const mir_msgs::msg::Trolley_<ContainerAllocator> & _arg)
  {
    this->trolley = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::HookStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::HookStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::HookStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::HookStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::HookStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::HookStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::HookStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::HookStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::HookStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::HookStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__HookStatus
    std::shared_ptr<mir_msgs::msg::HookStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__HookStatus
    std::shared_ptr<mir_msgs::msg::HookStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HookStatus_ & other) const
  {
    if (this->available != other.available) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->braked != other.braked) {
      return false;
    }
    if (this->trolley_attached != other.trolley_attached) {
      return false;
    }
    if (this->trolley != other.trolley) {
      return false;
    }
    return true;
  }
  bool operator!=(const HookStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HookStatus_

// alias to use template instance with default allocator
using HookStatus =
  mir_msgs::msg::HookStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__HOOK_STATUS__STRUCT_HPP_
