// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/WorldModel.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__WORLD_MODEL__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__WORLD_MODEL__STRUCT_HPP_

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
// Member 'world_map'
#include "mir_msgs/msg/detail/world_map__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__WorldModel __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__WorldModel __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WorldModel_
{
  using Type = WorldModel_<ContainerAllocator>;

  explicit WorldModel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit WorldModel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _world_map_type =
    std::vector<mir_msgs::msg::WorldMap_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mir_msgs::msg::WorldMap_<ContainerAllocator>>>;
  _world_map_type world_map;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__world_map(
    const std::vector<mir_msgs::msg::WorldMap_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mir_msgs::msg::WorldMap_<ContainerAllocator>>> & _arg)
  {
    this->world_map = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::WorldModel_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::WorldModel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::WorldModel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::WorldModel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::WorldModel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::WorldModel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::WorldModel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::WorldModel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::WorldModel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::WorldModel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__WorldModel
    std::shared_ptr<mir_msgs::msg::WorldModel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__WorldModel
    std::shared_ptr<mir_msgs::msg::WorldModel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WorldModel_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->world_map != other.world_map) {
      return false;
    }
    return true;
  }
  bool operator!=(const WorldModel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WorldModel_

// alias to use template instance with default allocator
using WorldModel =
  mir_msgs::msg::WorldModel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__WORLD_MODEL__STRUCT_HPP_
