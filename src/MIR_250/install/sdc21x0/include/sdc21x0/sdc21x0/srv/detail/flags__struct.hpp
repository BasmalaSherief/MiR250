// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdc21x0:srv/Flags.idl
// generated code does not contain a copyright notice

#ifndef SDC21X0__SRV__DETAIL__FLAGS__STRUCT_HPP_
#define SDC21X0__SRV__DETAIL__FLAGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sdc21x0__srv__Flags_Request __attribute__((deprecated))
#else
# define DEPRECATED__sdc21x0__srv__Flags_Request __declspec(deprecated)
#endif

namespace sdc21x0
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Flags_Request_
{
  using Type = Flags_Request_<ContainerAllocator>;

  explicit Flags_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->digital_port = 0l;
    }
  }

  explicit Flags_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->digital_port = 0l;
    }
  }

  // field types and members
  using _digital_port_type =
    int32_t;
  _digital_port_type digital_port;

  // setters for named parameter idiom
  Type & set__digital_port(
    const int32_t & _arg)
  {
    this->digital_port = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdc21x0::srv::Flags_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdc21x0::srv::Flags_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdc21x0::srv::Flags_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdc21x0::srv::Flags_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdc21x0::srv::Flags_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdc21x0::srv::Flags_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdc21x0::srv::Flags_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdc21x0::srv::Flags_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdc21x0::srv::Flags_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdc21x0::srv::Flags_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdc21x0__srv__Flags_Request
    std::shared_ptr<sdc21x0::srv::Flags_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdc21x0__srv__Flags_Request
    std::shared_ptr<sdc21x0::srv::Flags_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Flags_Request_ & other) const
  {
    if (this->digital_port != other.digital_port) {
      return false;
    }
    return true;
  }
  bool operator!=(const Flags_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Flags_Request_

// alias to use template instance with default allocator
using Flags_Request =
  sdc21x0::srv::Flags_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sdc21x0


#ifndef _WIN32
# define DEPRECATED__sdc21x0__srv__Flags_Response __attribute__((deprecated))
#else
# define DEPRECATED__sdc21x0__srv__Flags_Response __declspec(deprecated)
#endif

namespace sdc21x0
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Flags_Response_
{
  using Type = Flags_Response_<ContainerAllocator>;

  explicit Flags_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = false;
    }
  }

  explicit Flags_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = false;
    }
  }

  // field types and members
  using _response_type =
    bool;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const bool & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdc21x0::srv::Flags_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdc21x0::srv::Flags_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdc21x0::srv::Flags_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdc21x0::srv::Flags_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdc21x0::srv::Flags_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdc21x0::srv::Flags_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdc21x0::srv::Flags_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdc21x0::srv::Flags_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdc21x0::srv::Flags_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdc21x0::srv::Flags_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdc21x0__srv__Flags_Response
    std::shared_ptr<sdc21x0::srv::Flags_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdc21x0__srv__Flags_Response
    std::shared_ptr<sdc21x0::srv::Flags_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Flags_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Flags_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Flags_Response_

// alias to use template instance with default allocator
using Flags_Response =
  sdc21x0::srv::Flags_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sdc21x0

namespace sdc21x0
{

namespace srv
{

struct Flags
{
  using Request = sdc21x0::srv::Flags_Request;
  using Response = sdc21x0::srv::Flags_Response;
};

}  // namespace srv

}  // namespace sdc21x0

#endif  // SDC21X0__SRV__DETAIL__FLAGS__STRUCT_HPP_
