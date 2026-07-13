// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/ExternalRobots.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOTS__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOTS__STRUCT_HPP_

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
// Member 'robots'
#include "mir_msgs/msg/detail/external_robot__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__ExternalRobots __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__ExternalRobots __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExternalRobots_
{
  using Type = ExternalRobots_<ContainerAllocator>;

  explicit ExternalRobots_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ExternalRobots_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robots_type =
    std::vector<mir_msgs::msg::ExternalRobot_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mir_msgs::msg::ExternalRobot_<ContainerAllocator>>>;
  _robots_type robots;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__robots(
    const std::vector<mir_msgs::msg::ExternalRobot_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mir_msgs::msg::ExternalRobot_<ContainerAllocator>>> & _arg)
  {
    this->robots = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::ExternalRobots_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::ExternalRobots_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::ExternalRobots_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::ExternalRobots_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::ExternalRobots_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::ExternalRobots_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::ExternalRobots_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::ExternalRobots_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::ExternalRobots_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::ExternalRobots_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__ExternalRobots
    std::shared_ptr<mir_msgs::msg::ExternalRobots_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__ExternalRobots
    std::shared_ptr<mir_msgs::msg::ExternalRobots_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExternalRobots_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robots != other.robots) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExternalRobots_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExternalRobots_

// alias to use template instance with default allocator
using ExternalRobots =
  mir_msgs::msg::ExternalRobots_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOTS__STRUCT_HPP_
