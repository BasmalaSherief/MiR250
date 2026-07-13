// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/LocalMapStat.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__LOCAL_MAP_STAT__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__LOCAL_MAP_STAT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__LocalMapStat __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__LocalMapStat __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalMapStat_
{
  using Type = LocalMapStat_<ContainerAllocator>;

  explicit LocalMapStat_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->idx = 0l;
      this->x = 0l;
      this->y = 0l;
    }
  }

  explicit LocalMapStat_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->idx = 0l;
      this->x = 0l;
      this->y = 0l;
    }
  }

  // field types and members
  using _idx_type =
    int32_t;
  _idx_type idx;
  using _x_type =
    int32_t;
  _x_type x;
  using _y_type =
    int32_t;
  _y_type y;

  // setters for named parameter idiom
  Type & set__idx(
    const int32_t & _arg)
  {
    this->idx = _arg;
    return *this;
  }
  Type & set__x(
    const int32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::LocalMapStat_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::LocalMapStat_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::LocalMapStat_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::LocalMapStat_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::LocalMapStat_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::LocalMapStat_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::LocalMapStat_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::LocalMapStat_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::LocalMapStat_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::LocalMapStat_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__LocalMapStat
    std::shared_ptr<mir_msgs::msg::LocalMapStat_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__LocalMapStat
    std::shared_ptr<mir_msgs::msg::LocalMapStat_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalMapStat_ & other) const
  {
    if (this->idx != other.idx) {
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
  bool operator!=(const LocalMapStat_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalMapStat_

// alias to use template instance with default allocator
using LocalMapStat =
  mir_msgs::msg::LocalMapStat_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__LOCAL_MAP_STAT__STRUCT_HPP_
