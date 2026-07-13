// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/Device.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__DEVICE__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__DEVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__Device __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__Device __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Device_
{
  using Type = Device_<ContainerAllocator>;

  explicit Device_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->serial = "";
    }
  }

  explicit Device_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    serial(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->serial = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _serial_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _serial_type serial;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__serial(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->serial = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::Device_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::Device_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::Device_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::Device_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::Device_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::Device_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::Device_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::Device_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::Device_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::Device_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__Device
    std::shared_ptr<mir_msgs::msg::Device_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__Device
    std::shared_ptr<mir_msgs::msg::Device_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Device_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->serial != other.serial) {
      return false;
    }
    return true;
  }
  bool operator!=(const Device_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Device_

// alias to use template instance with default allocator
using Device =
  mir_msgs::msg::Device_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__DEVICE__STRUCT_HPP_
