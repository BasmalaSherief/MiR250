// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/MissionCtrlCommand.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__MISSION_CTRL_COMMAND__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__MISSION_CTRL_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__MissionCtrlCommand __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__MissionCtrlCommand __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionCtrlCommand_
{
  using Type = MissionCtrlCommand_<ContainerAllocator>;

  explicit MissionCtrlCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->description = "";
      this->cmd = 0l;
      this->mission_id = 0l;
    }
  }

  explicit MissionCtrlCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->description = "";
      this->cmd = 0l;
      this->mission_id = 0l;
    }
  }

  // field types and members
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _cmd_type =
    int32_t;
  _cmd_type cmd;
  using _mission_id_type =
    int32_t;
  _mission_id_type mission_id;

  // setters for named parameter idiom
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__cmd(
    const int32_t & _arg)
  {
    this->cmd = _arg;
    return *this;
  }
  Type & set__mission_id(
    const int32_t & _arg)
  {
    this->mission_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CMD_GET_STATUS =
    0u;
  static constexpr uint8_t CMD_WAIT_POS_LOCK =
    1u;
  static constexpr uint8_t CMD_WAIT_AREA_LOCK =
    2u;
  static constexpr uint8_t CMD_CONTINUE =
    3u;
  static constexpr uint8_t CMD_LOAD_MISSION =
    4u;

  // pointer types
  using RawPtr =
    mir_msgs::msg::MissionCtrlCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::MissionCtrlCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::MissionCtrlCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::MissionCtrlCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::MissionCtrlCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::MissionCtrlCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::MissionCtrlCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::MissionCtrlCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::MissionCtrlCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::MissionCtrlCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__MissionCtrlCommand
    std::shared_ptr<mir_msgs::msg::MissionCtrlCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__MissionCtrlCommand
    std::shared_ptr<mir_msgs::msg::MissionCtrlCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionCtrlCommand_ & other) const
  {
    if (this->description != other.description) {
      return false;
    }
    if (this->cmd != other.cmd) {
      return false;
    }
    if (this->mission_id != other.mission_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionCtrlCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionCtrlCommand_

// alias to use template instance with default allocator
using MissionCtrlCommand =
  mir_msgs::msg::MissionCtrlCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionCtrlCommand_<ContainerAllocator>::CMD_GET_STATUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionCtrlCommand_<ContainerAllocator>::CMD_WAIT_POS_LOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionCtrlCommand_<ContainerAllocator>::CMD_WAIT_AREA_LOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionCtrlCommand_<ContainerAllocator>::CMD_CONTINUE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionCtrlCommand_<ContainerAllocator>::CMD_LOAD_MISSION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__MISSION_CTRL_COMMAND__STRUCT_HPP_
