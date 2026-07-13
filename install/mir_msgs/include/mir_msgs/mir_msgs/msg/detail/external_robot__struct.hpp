// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/ExternalRobot.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOT__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOT__STRUCT_HPP_

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
// Member 'pose'
// Member 'extrapolated_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__ExternalRobot __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__ExternalRobot __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExternalRobot_
{
  using Type = ExternalRobot_<ContainerAllocator>;

  explicit ExternalRobot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    extrapolated_pose(_init),
    twist(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->type_id = 0ul;
      this->name = "";
      this->robot_length = 0.0;
      this->robot_width = 0.0;
      this->footprint = "";
      this->ip = "";
      this->map_id = 0ul;
      this->priority = 0l;
    }
  }

  explicit ExternalRobot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    name(_alloc),
    footprint(_alloc),
    ip(_alloc),
    pose(_alloc, _init),
    extrapolated_pose(_alloc, _init),
    twist(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->type_id = 0ul;
      this->name = "";
      this->robot_length = 0.0;
      this->robot_width = 0.0;
      this->footprint = "";
      this->ip = "";
      this->map_id = 0ul;
      this->priority = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    uint32_t;
  _id_type id;
  using _type_id_type =
    uint32_t;
  _type_id_type type_id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _robot_length_type =
    double;
  _robot_length_type robot_length;
  using _robot_width_type =
    double;
  _robot_width_type robot_width;
  using _footprint_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _footprint_type footprint;
  using _ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ip_type ip;
  using _map_id_type =
    uint32_t;
  _map_id_type map_id;
  using _priority_type =
    int32_t;
  _priority_type priority;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _extrapolated_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _extrapolated_pose_type extrapolated_pose;
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__type_id(
    const uint32_t & _arg)
  {
    this->type_id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__robot_length(
    const double & _arg)
  {
    this->robot_length = _arg;
    return *this;
  }
  Type & set__robot_width(
    const double & _arg)
  {
    this->robot_width = _arg;
    return *this;
  }
  Type & set__footprint(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->footprint = _arg;
    return *this;
  }
  Type & set__ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ip = _arg;
    return *this;
  }
  Type & set__map_id(
    const uint32_t & _arg)
  {
    this->map_id = _arg;
    return *this;
  }
  Type & set__priority(
    const int32_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__extrapolated_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->extrapolated_pose = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MIR100 =
    1u;
  static constexpr uint32_t MIR500 =
    3u;

  // pointer types
  using RawPtr =
    mir_msgs::msg::ExternalRobot_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::ExternalRobot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::ExternalRobot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::ExternalRobot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::ExternalRobot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::ExternalRobot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::ExternalRobot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::ExternalRobot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::ExternalRobot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::ExternalRobot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__ExternalRobot
    std::shared_ptr<mir_msgs::msg::ExternalRobot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__ExternalRobot
    std::shared_ptr<mir_msgs::msg::ExternalRobot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExternalRobot_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->type_id != other.type_id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->robot_length != other.robot_length) {
      return false;
    }
    if (this->robot_width != other.robot_width) {
      return false;
    }
    if (this->footprint != other.footprint) {
      return false;
    }
    if (this->ip != other.ip) {
      return false;
    }
    if (this->map_id != other.map_id) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->extrapolated_pose != other.extrapolated_pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExternalRobot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExternalRobot_

// alias to use template instance with default allocator
using ExternalRobot =
  mir_msgs::msg::ExternalRobot_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ExternalRobot_<ContainerAllocator>::MIR100;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ExternalRobot_<ContainerAllocator>::MIR500;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__EXTERNAL_ROBOT__STRUCT_HPP_
