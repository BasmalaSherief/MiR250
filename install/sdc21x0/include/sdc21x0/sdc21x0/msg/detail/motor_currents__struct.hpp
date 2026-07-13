// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdc21x0:msg/MotorCurrents.idl
// generated code does not contain a copyright notice

#ifndef SDC21X0__MSG__DETAIL__MOTOR_CURRENTS__STRUCT_HPP_
#define SDC21X0__MSG__DETAIL__MOTOR_CURRENTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sdc21x0__msg__MotorCurrents __attribute__((deprecated))
#else
# define DEPRECATED__sdc21x0__msg__MotorCurrents __declspec(deprecated)
#endif

namespace sdc21x0
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCurrents_
{
  using Type = MotorCurrents_<ContainerAllocator>;

  explicit MotorCurrents_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_motor = 0.0f;
      this->right_motor = 0.0f;
    }
  }

  explicit MotorCurrents_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_motor = 0.0f;
      this->right_motor = 0.0f;
    }
  }

  // field types and members
  using _left_motor_type =
    float;
  _left_motor_type left_motor;
  using _right_motor_type =
    float;
  _right_motor_type right_motor;

  // setters for named parameter idiom
  Type & set__left_motor(
    const float & _arg)
  {
    this->left_motor = _arg;
    return *this;
  }
  Type & set__right_motor(
    const float & _arg)
  {
    this->right_motor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdc21x0::msg::MotorCurrents_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdc21x0::msg::MotorCurrents_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdc21x0::msg::MotorCurrents_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdc21x0::msg::MotorCurrents_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdc21x0::msg::MotorCurrents_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdc21x0::msg::MotorCurrents_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdc21x0::msg::MotorCurrents_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdc21x0::msg::MotorCurrents_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdc21x0::msg::MotorCurrents_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdc21x0::msg::MotorCurrents_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdc21x0__msg__MotorCurrents
    std::shared_ptr<sdc21x0::msg::MotorCurrents_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdc21x0__msg__MotorCurrents
    std::shared_ptr<sdc21x0::msg::MotorCurrents_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCurrents_ & other) const
  {
    if (this->left_motor != other.left_motor) {
      return false;
    }
    if (this->right_motor != other.right_motor) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCurrents_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCurrents_

// alias to use template instance with default allocator
using MotorCurrents =
  sdc21x0::msg::MotorCurrents_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdc21x0

#endif  // SDC21X0__MSG__DETAIL__MOTOR_CURRENTS__STRUCT_HPP_
