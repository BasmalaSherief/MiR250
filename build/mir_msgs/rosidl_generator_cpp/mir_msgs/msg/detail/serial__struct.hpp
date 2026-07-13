// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/Serial.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__SERIAL__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__SERIAL__STRUCT_HPP_

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
# define DEPRECATED__mir_msgs__msg__Serial __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__Serial __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Serial_
{
  using Type = Serial_<ContainerAllocator>;

  explicit Serial_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
    }
  }

  explicit Serial_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::Serial_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::Serial_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::Serial_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::Serial_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::Serial_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::Serial_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::Serial_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::Serial_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::Serial_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::Serial_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__Serial
    std::shared_ptr<mir_msgs::msg::Serial_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__Serial
    std::shared_ptr<mir_msgs::msg::Serial_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Serial_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Serial_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Serial_

// alias to use template instance with default allocator
using Serial =
  mir_msgs::msg::Serial_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__SERIAL__STRUCT_HPP_
