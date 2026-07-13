// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/GripperState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__GRIPPER_STATE__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__GRIPPER_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__GripperState __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__GripperState __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripperState_
{
  using Type = GripperState_<ContainerAllocator>;

  explicit GripperState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_string = "";
      this->state = 0;
      this->closed = false;
    }
  }

  explicit GripperState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_string = "";
      this->state = 0;
      this->closed = false;
    }
  }

  // field types and members
  using _state_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_string_type state_string;
  using _state_type =
    uint8_t;
  _state_type state;
  using _closed_type =
    bool;
  _closed_type closed;

  // setters for named parameter idiom
  Type & set__state_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state_string = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__closed(
    const bool & _arg)
  {
    this->closed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::GripperState_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::GripperState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::GripperState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::GripperState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::GripperState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::GripperState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::GripperState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::GripperState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::GripperState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::GripperState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__GripperState
    std::shared_ptr<mir_msgs::msg::GripperState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__GripperState
    std::shared_ptr<mir_msgs::msg::GripperState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperState_ & other) const
  {
    if (this->state_string != other.state_string) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->closed != other.closed) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperState_

// alias to use template instance with default allocator
using GripperState =
  mir_msgs::msg::GripperState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__GRIPPER_STATE__STRUCT_HPP_
