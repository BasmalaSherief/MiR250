// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/JoystickVel.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__JOYSTICK_VEL__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__JOYSTICK_VEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'speed_command'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__JoystickVel __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__JoystickVel __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JoystickVel_
{
  using Type = JoystickVel_<ContainerAllocator>;

  explicit JoystickVel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : speed_command(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joystick_token = "";
    }
  }

  explicit JoystickVel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joystick_token(_alloc),
    speed_command(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joystick_token = "";
    }
  }

  // field types and members
  using _joystick_token_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joystick_token_type joystick_token;
  using _speed_command_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _speed_command_type speed_command;

  // setters for named parameter idiom
  Type & set__joystick_token(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joystick_token = _arg;
    return *this;
  }
  Type & set__speed_command(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->speed_command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::JoystickVel_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::JoystickVel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::JoystickVel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::JoystickVel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::JoystickVel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::JoystickVel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::JoystickVel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::JoystickVel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::JoystickVel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::JoystickVel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__JoystickVel
    std::shared_ptr<mir_msgs::msg::JoystickVel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__JoystickVel
    std::shared_ptr<mir_msgs::msg::JoystickVel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JoystickVel_ & other) const
  {
    if (this->joystick_token != other.joystick_token) {
      return false;
    }
    if (this->speed_command != other.speed_command) {
      return false;
    }
    return true;
  }
  bool operator!=(const JoystickVel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JoystickVel_

// alias to use template instance with default allocator
using JoystickVel =
  mir_msgs::msg::JoystickVel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__JOYSTICK_VEL__STRUCT_HPP_
