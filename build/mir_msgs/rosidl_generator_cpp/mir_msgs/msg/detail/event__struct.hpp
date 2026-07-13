// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/Event.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__EVENT__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'polygon'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__Event __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__Event __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Event_
{
  using Type = Event_<ContainerAllocator>;

  explicit Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_type = 0ul;
      this->area_guid = "";
      this->area_name = "";
    }
  }

  explicit Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : area_guid(_alloc),
    area_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_type = 0ul;
      this->area_guid = "";
      this->area_name = "";
    }
  }

  // field types and members
  using _event_type_type =
    uint32_t;
  _event_type_type event_type;
  using _area_guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _area_guid_type area_guid;
  using _area_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _area_name_type area_name;
  using _polygon_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _polygon_type polygon;

  // setters for named parameter idiom
  Type & set__event_type(
    const uint32_t & _arg)
  {
    this->event_type = _arg;
    return *this;
  }
  Type & set__area_guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->area_guid = _arg;
    return *this;
  }
  Type & set__area_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->area_name = _arg;
    return *this;
  }
  Type & set__polygon(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->polygon = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t EV_SPEED =
    1u;
  static constexpr uint32_t EV_BLINK =
    2u;
  static constexpr uint32_t EV_SOUND =
    3u;
  static constexpr uint32_t EV_DOOR =
    4u;
  static constexpr uint32_t EV_AMCLOFF =
    5u;
  static constexpr uint32_t EV_FWDDIST =
    6u;
  static constexpr uint32_t EV_IO =
    7u;
  static constexpr uint32_t EV_FLEETLCK =
    8u;
  static constexpr uint32_t EV_EMERGENCY =
    9u;

  // pointer types
  using RawPtr =
    mir_msgs::msg::Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__Event
    std::shared_ptr<mir_msgs::msg::Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__Event
    std::shared_ptr<mir_msgs::msg::Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Event_ & other) const
  {
    if (this->event_type != other.event_type) {
      return false;
    }
    if (this->area_guid != other.area_guid) {
      return false;
    }
    if (this->area_name != other.area_name) {
      return false;
    }
    if (this->polygon != other.polygon) {
      return false;
    }
    return true;
  }
  bool operator!=(const Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Event_

// alias to use template instance with default allocator
using Event =
  mir_msgs::msg::Event_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Event_<ContainerAllocator>::EV_SPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Event_<ContainerAllocator>::EV_BLINK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Event_<ContainerAllocator>::EV_SOUND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Event_<ContainerAllocator>::EV_DOOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Event_<ContainerAllocator>::EV_AMCLOFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Event_<ContainerAllocator>::EV_FWDDIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Event_<ContainerAllocator>::EV_IO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Event_<ContainerAllocator>::EV_FLEETLCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Event_<ContainerAllocator>::EV_EMERGENCY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__EVENT__STRUCT_HPP_
