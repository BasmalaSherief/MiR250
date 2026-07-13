// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/WebPath.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__WEB_PATH__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__WEB_PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__WebPath __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__WebPath __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WebPath_
{
  using Type = WebPath_<ContainerAllocator>;

  explicit WebPath_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq = 0l;
    }
  }

  explicit WebPath_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq = 0l;
    }
  }

  // field types and members
  using _seq_type =
    int32_t;
  _seq_type seq;
  using _x_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _x_type x;
  using _y_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _y_type y;

  // setters for named parameter idiom
  Type & set__seq(
    const int32_t & _arg)
  {
    this->seq = _arg;
    return *this;
  }
  Type & set__x(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::WebPath_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::WebPath_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::WebPath_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::WebPath_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::WebPath_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::WebPath_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::WebPath_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::WebPath_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::WebPath_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::WebPath_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__WebPath
    std::shared_ptr<mir_msgs::msg::WebPath_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__WebPath
    std::shared_ptr<mir_msgs::msg::WebPath_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WebPath_ & other) const
  {
    if (this->seq != other.seq) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const WebPath_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WebPath_

// alias to use template instance with default allocator
using WebPath =
  mir_msgs::msg::WebPath_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__WEB_PATH__STRUCT_HPP_
