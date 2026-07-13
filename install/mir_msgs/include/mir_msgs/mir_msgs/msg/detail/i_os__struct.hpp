// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/IOs.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__I_OS__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__I_OS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__IOs __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__IOs __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IOs_
{
  using Type = IOs_<ContainerAllocator>;

  explicit IOs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->module_guid = "";
      this->connected = false;
      this->status = 0;
      this->num_inputs = 0;
      this->num_outputs = 0;
      this->ip = "";
      this->error = "";
    }
  }

  explicit IOs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : module_guid(_alloc),
    ip(_alloc),
    error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->module_guid = "";
      this->connected = false;
      this->status = 0;
      this->num_inputs = 0;
      this->num_outputs = 0;
      this->ip = "";
      this->error = "";
    }
  }

  // field types and members
  using _module_guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _module_guid_type module_guid;
  using _connected_type =
    bool;
  _connected_type connected;
  using _status_type =
    uint8_t;
  _status_type status;
  using _num_inputs_type =
    int8_t;
  _num_inputs_type num_inputs;
  using _input_state_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _input_state_type input_state;
  using _num_outputs_type =
    int8_t;
  _num_outputs_type num_outputs;
  using _output_state_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _output_state_type output_state;
  using _ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ip_type ip;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__module_guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->module_guid = _arg;
    return *this;
  }
  Type & set__connected(
    const bool & _arg)
  {
    this->connected = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__num_inputs(
    const int8_t & _arg)
  {
    this->num_inputs = _arg;
    return *this;
  }
  Type & set__input_state(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->input_state = _arg;
    return *this;
  }
  Type & set__num_outputs(
    const int8_t & _arg)
  {
    this->num_outputs = _arg;
    return *this;
  }
  Type & set__output_state(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->output_state = _arg;
    return *this;
  }
  Type & set__ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ip = _arg;
    return *this;
  }
  Type & set__error(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DONE =
    0u;
  static constexpr uint8_t STARTED =
    1u;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr uint8_t ERROR =
    3u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

  // pointer types
  using RawPtr =
    mir_msgs::msg::IOs_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::IOs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::IOs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::IOs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::IOs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::IOs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::IOs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::IOs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::IOs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::IOs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__IOs
    std::shared_ptr<mir_msgs::msg::IOs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__IOs
    std::shared_ptr<mir_msgs::msg::IOs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IOs_ & other) const
  {
    if (this->module_guid != other.module_guid) {
      return false;
    }
    if (this->connected != other.connected) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->num_inputs != other.num_inputs) {
      return false;
    }
    if (this->input_state != other.input_state) {
      return false;
    }
    if (this->num_outputs != other.num_outputs) {
      return false;
    }
    if (this->output_state != other.output_state) {
      return false;
    }
    if (this->ip != other.ip) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const IOs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IOs_

// alias to use template instance with default allocator
using IOs =
  mir_msgs::msg::IOs_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t IOs_<ContainerAllocator>::DONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t IOs_<ContainerAllocator>::STARTED;
#endif  // __cplusplus < 201703L
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t IOs_<ContainerAllocator>::ERROR;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__I_OS__STRUCT_HPP_
