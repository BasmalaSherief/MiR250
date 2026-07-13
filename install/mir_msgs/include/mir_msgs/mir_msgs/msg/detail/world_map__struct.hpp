// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/WorldMap.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__WORLD_MAP__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__WORLD_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'positions'
// Member 'areas'
#include "mir_msgs/msg/detail/resources_state__struct.hpp"
// Member 'robots'
#include "mir_msgs/msg/detail/external_robots__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__WorldMap __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__WorldMap __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WorldMap_
{
  using Type = WorldMap_<ContainerAllocator>;

  explicit WorldMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : positions(_init),
    areas(_init),
    robots(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_id = 0l;
    }
  }

  explicit WorldMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : positions(_alloc, _init),
    areas(_alloc, _init),
    robots(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_id = 0l;
    }
  }

  // field types and members
  using _positions_type =
    mir_msgs::msg::ResourcesState_<ContainerAllocator>;
  _positions_type positions;
  using _areas_type =
    mir_msgs::msg::ResourcesState_<ContainerAllocator>;
  _areas_type areas;
  using _robots_type =
    mir_msgs::msg::ExternalRobots_<ContainerAllocator>;
  _robots_type robots;
  using _map_id_type =
    int32_t;
  _map_id_type map_id;

  // setters for named parameter idiom
  Type & set__positions(
    const mir_msgs::msg::ResourcesState_<ContainerAllocator> & _arg)
  {
    this->positions = _arg;
    return *this;
  }
  Type & set__areas(
    const mir_msgs::msg::ResourcesState_<ContainerAllocator> & _arg)
  {
    this->areas = _arg;
    return *this;
  }
  Type & set__robots(
    const mir_msgs::msg::ExternalRobots_<ContainerAllocator> & _arg)
  {
    this->robots = _arg;
    return *this;
  }
  Type & set__map_id(
    const int32_t & _arg)
  {
    this->map_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::WorldMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::WorldMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::WorldMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::WorldMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::WorldMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::WorldMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::WorldMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::WorldMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::WorldMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::WorldMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__WorldMap
    std::shared_ptr<mir_msgs::msg::WorldMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__WorldMap
    std::shared_ptr<mir_msgs::msg::WorldMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WorldMap_ & other) const
  {
    if (this->positions != other.positions) {
      return false;
    }
    if (this->areas != other.areas) {
      return false;
    }
    if (this->robots != other.robots) {
      return false;
    }
    if (this->map_id != other.map_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const WorldMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WorldMap_

// alias to use template instance with default allocator
using WorldMap =
  mir_msgs::msg::WorldMap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__WORLD_MAP__STRUCT_HPP_
