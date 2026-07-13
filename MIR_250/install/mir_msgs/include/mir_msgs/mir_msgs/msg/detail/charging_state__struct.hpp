// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/ChargingState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__CHARGING_STATE__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__CHARGING_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__ChargingState __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__ChargingState __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChargingState_
{
  using Type = ChargingState_<ContainerAllocator>;

  explicit ChargingState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->charging_relay = false;
      this->charging_current = 0.0;
      this->charging_current_raw = 0ul;
      this->last_time_current = 0.0;
      this->charging_voltage = 0.0;
      this->charging_voltage_raw = 0ul;
      this->is_voltage_low = false;
      this->last_time_voltage = 0.0;
    }
  }

  explicit ChargingState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->charging_relay = false;
      this->charging_current = 0.0;
      this->charging_current_raw = 0ul;
      this->last_time_current = 0.0;
      this->charging_voltage = 0.0;
      this->charging_voltage_raw = 0ul;
      this->is_voltage_low = false;
      this->last_time_voltage = 0.0;
    }
  }

  // field types and members
  using _charging_relay_type =
    bool;
  _charging_relay_type charging_relay;
  using _charging_current_type =
    double;
  _charging_current_type charging_current;
  using _charging_current_raw_type =
    uint32_t;
  _charging_current_raw_type charging_current_raw;
  using _last_time_current_type =
    double;
  _last_time_current_type last_time_current;
  using _charging_voltage_type =
    double;
  _charging_voltage_type charging_voltage;
  using _charging_voltage_raw_type =
    uint32_t;
  _charging_voltage_raw_type charging_voltage_raw;
  using _is_voltage_low_type =
    bool;
  _is_voltage_low_type is_voltage_low;
  using _last_time_voltage_type =
    double;
  _last_time_voltage_type last_time_voltage;

  // setters for named parameter idiom
  Type & set__charging_relay(
    const bool & _arg)
  {
    this->charging_relay = _arg;
    return *this;
  }
  Type & set__charging_current(
    const double & _arg)
  {
    this->charging_current = _arg;
    return *this;
  }
  Type & set__charging_current_raw(
    const uint32_t & _arg)
  {
    this->charging_current_raw = _arg;
    return *this;
  }
  Type & set__last_time_current(
    const double & _arg)
  {
    this->last_time_current = _arg;
    return *this;
  }
  Type & set__charging_voltage(
    const double & _arg)
  {
    this->charging_voltage = _arg;
    return *this;
  }
  Type & set__charging_voltage_raw(
    const uint32_t & _arg)
  {
    this->charging_voltage_raw = _arg;
    return *this;
  }
  Type & set__is_voltage_low(
    const bool & _arg)
  {
    this->is_voltage_low = _arg;
    return *this;
  }
  Type & set__last_time_voltage(
    const double & _arg)
  {
    this->last_time_voltage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::ChargingState_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::ChargingState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::ChargingState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::ChargingState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::ChargingState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::ChargingState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::ChargingState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::ChargingState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::ChargingState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::ChargingState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__ChargingState
    std::shared_ptr<mir_msgs::msg::ChargingState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__ChargingState
    std::shared_ptr<mir_msgs::msg::ChargingState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargingState_ & other) const
  {
    if (this->charging_relay != other.charging_relay) {
      return false;
    }
    if (this->charging_current != other.charging_current) {
      return false;
    }
    if (this->charging_current_raw != other.charging_current_raw) {
      return false;
    }
    if (this->last_time_current != other.last_time_current) {
      return false;
    }
    if (this->charging_voltage != other.charging_voltage) {
      return false;
    }
    if (this->charging_voltage_raw != other.charging_voltage_raw) {
      return false;
    }
    if (this->is_voltage_low != other.is_voltage_low) {
      return false;
    }
    if (this->last_time_voltage != other.last_time_voltage) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargingState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargingState_

// alias to use template instance with default allocator
using ChargingState =
  mir_msgs::msg::ChargingState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__CHARGING_STATE__STRUCT_HPP_
