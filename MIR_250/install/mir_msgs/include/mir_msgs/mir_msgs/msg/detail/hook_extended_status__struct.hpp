// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/HookExtendedStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__HOOK_EXTENDED_STATUS__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__HOOK_EXTENDED_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'brake'
#include "mir_msgs/msg/detail/brake_state__struct.hpp"
// Member 'gripper'
#include "mir_msgs/msg/detail/gripper_state__struct.hpp"
// Member 'height'
#include "mir_msgs/msg/detail/height_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__HookExtendedStatus __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__HookExtendedStatus __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HookExtendedStatus_
{
  using Type = HookExtendedStatus_<ContainerAllocator>;

  explicit HookExtendedStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : brake(_init),
    gripper(_init),
    height(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->available = false;
      this->angle = 0.0f;
      this->qr_marker_name = "";
    }
  }

  explicit HookExtendedStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : brake(_alloc, _init),
    gripper(_alloc, _init),
    height(_alloc, _init),
    qr_marker_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->available = false;
      this->angle = 0.0f;
      this->qr_marker_name = "";
    }
  }

  // field types and members
  using _available_type =
    bool;
  _available_type available;
  using _brake_type =
    mir_msgs::msg::BrakeState_<ContainerAllocator>;
  _brake_type brake;
  using _gripper_type =
    mir_msgs::msg::GripperState_<ContainerAllocator>;
  _gripper_type gripper;
  using _height_type =
    mir_msgs::msg::HeightState_<ContainerAllocator>;
  _height_type height;
  using _angle_type =
    float;
  _angle_type angle;
  using _qr_marker_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _qr_marker_name_type qr_marker_name;

  // setters for named parameter idiom
  Type & set__available(
    const bool & _arg)
  {
    this->available = _arg;
    return *this;
  }
  Type & set__brake(
    const mir_msgs::msg::BrakeState_<ContainerAllocator> & _arg)
  {
    this->brake = _arg;
    return *this;
  }
  Type & set__gripper(
    const mir_msgs::msg::GripperState_<ContainerAllocator> & _arg)
  {
    this->gripper = _arg;
    return *this;
  }
  Type & set__height(
    const mir_msgs::msg::HeightState_<ContainerAllocator> & _arg)
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
  Type & set__qr_marker_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->qr_marker_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::HookExtendedStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::HookExtendedStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::HookExtendedStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::HookExtendedStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::HookExtendedStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::HookExtendedStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::HookExtendedStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::HookExtendedStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::HookExtendedStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::HookExtendedStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__HookExtendedStatus
    std::shared_ptr<mir_msgs::msg::HookExtendedStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__HookExtendedStatus
    std::shared_ptr<mir_msgs::msg::HookExtendedStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HookExtendedStatus_ & other) const
  {
    if (this->available != other.available) {
      return false;
    }
    if (this->brake != other.brake) {
      return false;
    }
    if (this->gripper != other.gripper) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->qr_marker_name != other.qr_marker_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const HookExtendedStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HookExtendedStatus_

// alias to use template instance with default allocator
using HookExtendedStatus =
  mir_msgs::msg::HookExtendedStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__HOOK_EXTENDED_STATUS__STRUCT_HPP_
