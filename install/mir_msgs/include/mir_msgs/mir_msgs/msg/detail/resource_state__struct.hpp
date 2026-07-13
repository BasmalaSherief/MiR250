// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/ResourceState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__RESOURCE_STATE__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__RESOURCE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'collision_point'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__ResourceState __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__ResourceState __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ResourceState_
{
  using Type = ResourceState_<ContainerAllocator>;

  explicit ResourceState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : collision_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0ul;
      this->path_idx = 0ul;
      this->distance = 0.0f;
      this->name = "";
      this->guid = "";
    }
  }

  explicit ResourceState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : collision_point(_alloc, _init),
    name(_alloc),
    guid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0ul;
      this->path_idx = 0ul;
      this->distance = 0.0f;
      this->name = "";
      this->guid = "";
    }
  }

  // field types and members
  using _assigned_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _assigned_type assigned;
  using _type_type =
    uint32_t;
  _type_type type;
  using _path_idx_type =
    uint32_t;
  _path_idx_type path_idx;
  using _distance_type =
    float;
  _distance_type distance;
  using _collision_point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _collision_point_type collision_point;
  using _queue_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _queue_type queue;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _guid_type guid;

  // setters for named parameter idiom
  Type & set__assigned(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->assigned = _arg;
    return *this;
  }
  Type & set__type(
    const uint32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__path_idx(
    const uint32_t & _arg)
  {
    this->path_idx = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__collision_point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->collision_point = _arg;
    return *this;
  }
  Type & set__queue(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->queue = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->guid = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t ROBOT_POSITION =
    0u;
  static constexpr uint32_t STAGING_POSITION =
    1u;
  static constexpr uint32_t CHARGING_STATION =
    2u;
  static constexpr uint32_t AREA =
    3u;

  // pointer types
  using RawPtr =
    mir_msgs::msg::ResourceState_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::ResourceState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::ResourceState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::ResourceState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::ResourceState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::ResourceState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::ResourceState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::ResourceState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::ResourceState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::ResourceState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__ResourceState
    std::shared_ptr<mir_msgs::msg::ResourceState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__ResourceState
    std::shared_ptr<mir_msgs::msg::ResourceState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResourceState_ & other) const
  {
    if (this->assigned != other.assigned) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->path_idx != other.path_idx) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->collision_point != other.collision_point) {
      return false;
    }
    if (this->queue != other.queue) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->guid != other.guid) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResourceState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResourceState_

// alias to use template instance with default allocator
using ResourceState =
  mir_msgs::msg::ResourceState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ResourceState_<ContainerAllocator>::ROBOT_POSITION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ResourceState_<ContainerAllocator>::STAGING_POSITION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ResourceState_<ContainerAllocator>::CHARGING_STATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ResourceState_<ContainerAllocator>::AREA;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__RESOURCE_STATE__STRUCT_HPP_
