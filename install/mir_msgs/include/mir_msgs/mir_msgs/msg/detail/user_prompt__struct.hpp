// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/UserPrompt.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__USER_PROMPT__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__USER_PROMPT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__UserPrompt __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__UserPrompt __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UserPrompt_
{
  using Type = UserPrompt_<ContainerAllocator>;

  explicit UserPrompt_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timeout(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_request = false;
      this->guid = "";
      this->user_group = "";
      this->question = "";
    }
  }

  explicit UserPrompt_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : guid(_alloc),
    user_group(_alloc),
    question(_alloc),
    timeout(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_request = false;
      this->guid = "";
      this->user_group = "";
      this->question = "";
    }
  }

  // field types and members
  using _has_request_type =
    bool;
  _has_request_type has_request;
  using _guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _guid_type guid;
  using _user_group_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _user_group_type user_group;
  using _question_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _question_type question;
  using _options_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _options_type options;
  using _timeout_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _timeout_type timeout;

  // setters for named parameter idiom
  Type & set__has_request(
    const bool & _arg)
  {
    this->has_request = _arg;
    return *this;
  }
  Type & set__guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->guid = _arg;
    return *this;
  }
  Type & set__user_group(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->user_group = _arg;
    return *this;
  }
  Type & set__question(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->question = _arg;
    return *this;
  }
  Type & set__options(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->options = _arg;
    return *this;
  }
  Type & set__timeout(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->timeout = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::UserPrompt_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::UserPrompt_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::UserPrompt_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::UserPrompt_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::UserPrompt_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::UserPrompt_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::UserPrompt_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::UserPrompt_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::UserPrompt_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::UserPrompt_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__UserPrompt
    std::shared_ptr<mir_msgs::msg::UserPrompt_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__UserPrompt
    std::shared_ptr<mir_msgs::msg::UserPrompt_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserPrompt_ & other) const
  {
    if (this->has_request != other.has_request) {
      return false;
    }
    if (this->guid != other.guid) {
      return false;
    }
    if (this->user_group != other.user_group) {
      return false;
    }
    if (this->question != other.question) {
      return false;
    }
    if (this->options != other.options) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserPrompt_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserPrompt_

// alias to use template instance with default allocator
using UserPrompt =
  mir_msgs::msg::UserPrompt_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__USER_PROMPT__STRUCT_HPP_
