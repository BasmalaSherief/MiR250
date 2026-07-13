// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/PowerBoardMotorStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__POWER_BOARD_MOTOR_STATUS__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__POWER_BOARD_MOTOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__PowerBoardMotorStatus __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__PowerBoardMotorStatus __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PowerBoardMotorStatus_
{
  using Type = PowerBoardMotorStatus_<ContainerAllocator>;

  explicit PowerBoardMotorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_motor_ctrl_word = 0;
      this->left_motor_speed = 0l;
      this->left_motor_encoder = 0l;
      this->left_motor_status = 0;
      this->left_motor_error = 0;
      this->left_motor_error_hist1 = 0ul;
      this->left_motor_error_hist2 = 0ul;
      this->left_motor_current = 0l;
      this->left_motor_i2t_motor = 0;
      this->left_motor_i2t_controller = 0;
      this->left_motor_temperature = 0;
      this->right_motor_ctrl_word = 0;
      this->right_motor_speed = 0l;
      this->right_motor_encoder = 0l;
      this->right_motor_status = 0;
      this->right_motor_error = 0;
      this->right_motor_error_hist1 = 0ul;
      this->right_motor_error_hist2 = 0ul;
      this->right_motor_current = 0l;
      this->right_motor_i2t_motor = 0;
      this->right_motor_i2t_controller = 0;
      this->right_motor_temperature = 0;
      this->brake_left_status = 0;
      this->brake_right_status = 0;
    }
  }

  explicit PowerBoardMotorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_motor_ctrl_word = 0;
      this->left_motor_speed = 0l;
      this->left_motor_encoder = 0l;
      this->left_motor_status = 0;
      this->left_motor_error = 0;
      this->left_motor_error_hist1 = 0ul;
      this->left_motor_error_hist2 = 0ul;
      this->left_motor_current = 0l;
      this->left_motor_i2t_motor = 0;
      this->left_motor_i2t_controller = 0;
      this->left_motor_temperature = 0;
      this->right_motor_ctrl_word = 0;
      this->right_motor_speed = 0l;
      this->right_motor_encoder = 0l;
      this->right_motor_status = 0;
      this->right_motor_error = 0;
      this->right_motor_error_hist1 = 0ul;
      this->right_motor_error_hist2 = 0ul;
      this->right_motor_current = 0l;
      this->right_motor_i2t_motor = 0;
      this->right_motor_i2t_controller = 0;
      this->right_motor_temperature = 0;
      this->brake_left_status = 0;
      this->brake_right_status = 0;
    }
  }

  // field types and members
  using _left_motor_ctrl_word_type =
    uint16_t;
  _left_motor_ctrl_word_type left_motor_ctrl_word;
  using _left_motor_speed_type =
    int32_t;
  _left_motor_speed_type left_motor_speed;
  using _left_motor_encoder_type =
    int32_t;
  _left_motor_encoder_type left_motor_encoder;
  using _left_motor_status_type =
    uint16_t;
  _left_motor_status_type left_motor_status;
  using _left_motor_error_type =
    uint8_t;
  _left_motor_error_type left_motor_error;
  using _left_motor_error_hist1_type =
    uint32_t;
  _left_motor_error_hist1_type left_motor_error_hist1;
  using _left_motor_error_hist2_type =
    uint32_t;
  _left_motor_error_hist2_type left_motor_error_hist2;
  using _left_motor_current_type =
    int32_t;
  _left_motor_current_type left_motor_current;
  using _left_motor_i2t_motor_type =
    uint16_t;
  _left_motor_i2t_motor_type left_motor_i2t_motor;
  using _left_motor_i2t_controller_type =
    uint16_t;
  _left_motor_i2t_controller_type left_motor_i2t_controller;
  using _left_motor_temperature_type =
    int16_t;
  _left_motor_temperature_type left_motor_temperature;
  using _right_motor_ctrl_word_type =
    uint16_t;
  _right_motor_ctrl_word_type right_motor_ctrl_word;
  using _right_motor_speed_type =
    int32_t;
  _right_motor_speed_type right_motor_speed;
  using _right_motor_encoder_type =
    int32_t;
  _right_motor_encoder_type right_motor_encoder;
  using _right_motor_status_type =
    uint16_t;
  _right_motor_status_type right_motor_status;
  using _right_motor_error_type =
    uint8_t;
  _right_motor_error_type right_motor_error;
  using _right_motor_error_hist1_type =
    uint32_t;
  _right_motor_error_hist1_type right_motor_error_hist1;
  using _right_motor_error_hist2_type =
    uint32_t;
  _right_motor_error_hist2_type right_motor_error_hist2;
  using _right_motor_current_type =
    int32_t;
  _right_motor_current_type right_motor_current;
  using _right_motor_i2t_motor_type =
    uint16_t;
  _right_motor_i2t_motor_type right_motor_i2t_motor;
  using _right_motor_i2t_controller_type =
    uint16_t;
  _right_motor_i2t_controller_type right_motor_i2t_controller;
  using _right_motor_temperature_type =
    int16_t;
  _right_motor_temperature_type right_motor_temperature;
  using _brake_left_status_type =
    uint8_t;
  _brake_left_status_type brake_left_status;
  using _brake_right_status_type =
    uint8_t;
  _brake_right_status_type brake_right_status;

  // setters for named parameter idiom
  Type & set__left_motor_ctrl_word(
    const uint16_t & _arg)
  {
    this->left_motor_ctrl_word = _arg;
    return *this;
  }
  Type & set__left_motor_speed(
    const int32_t & _arg)
  {
    this->left_motor_speed = _arg;
    return *this;
  }
  Type & set__left_motor_encoder(
    const int32_t & _arg)
  {
    this->left_motor_encoder = _arg;
    return *this;
  }
  Type & set__left_motor_status(
    const uint16_t & _arg)
  {
    this->left_motor_status = _arg;
    return *this;
  }
  Type & set__left_motor_error(
    const uint8_t & _arg)
  {
    this->left_motor_error = _arg;
    return *this;
  }
  Type & set__left_motor_error_hist1(
    const uint32_t & _arg)
  {
    this->left_motor_error_hist1 = _arg;
    return *this;
  }
  Type & set__left_motor_error_hist2(
    const uint32_t & _arg)
  {
    this->left_motor_error_hist2 = _arg;
    return *this;
  }
  Type & set__left_motor_current(
    const int32_t & _arg)
  {
    this->left_motor_current = _arg;
    return *this;
  }
  Type & set__left_motor_i2t_motor(
    const uint16_t & _arg)
  {
    this->left_motor_i2t_motor = _arg;
    return *this;
  }
  Type & set__left_motor_i2t_controller(
    const uint16_t & _arg)
  {
    this->left_motor_i2t_controller = _arg;
    return *this;
  }
  Type & set__left_motor_temperature(
    const int16_t & _arg)
  {
    this->left_motor_temperature = _arg;
    return *this;
  }
  Type & set__right_motor_ctrl_word(
    const uint16_t & _arg)
  {
    this->right_motor_ctrl_word = _arg;
    return *this;
  }
  Type & set__right_motor_speed(
    const int32_t & _arg)
  {
    this->right_motor_speed = _arg;
    return *this;
  }
  Type & set__right_motor_encoder(
    const int32_t & _arg)
  {
    this->right_motor_encoder = _arg;
    return *this;
  }
  Type & set__right_motor_status(
    const uint16_t & _arg)
  {
    this->right_motor_status = _arg;
    return *this;
  }
  Type & set__right_motor_error(
    const uint8_t & _arg)
  {
    this->right_motor_error = _arg;
    return *this;
  }
  Type & set__right_motor_error_hist1(
    const uint32_t & _arg)
  {
    this->right_motor_error_hist1 = _arg;
    return *this;
  }
  Type & set__right_motor_error_hist2(
    const uint32_t & _arg)
  {
    this->right_motor_error_hist2 = _arg;
    return *this;
  }
  Type & set__right_motor_current(
    const int32_t & _arg)
  {
    this->right_motor_current = _arg;
    return *this;
  }
  Type & set__right_motor_i2t_motor(
    const uint16_t & _arg)
  {
    this->right_motor_i2t_motor = _arg;
    return *this;
  }
  Type & set__right_motor_i2t_controller(
    const uint16_t & _arg)
  {
    this->right_motor_i2t_controller = _arg;
    return *this;
  }
  Type & set__right_motor_temperature(
    const int16_t & _arg)
  {
    this->right_motor_temperature = _arg;
    return *this;
  }
  Type & set__brake_left_status(
    const uint8_t & _arg)
  {
    this->brake_left_status = _arg;
    return *this;
  }
  Type & set__brake_right_status(
    const uint8_t & _arg)
  {
    this->brake_right_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::PowerBoardMotorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::PowerBoardMotorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::PowerBoardMotorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::PowerBoardMotorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::PowerBoardMotorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::PowerBoardMotorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::PowerBoardMotorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::PowerBoardMotorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::PowerBoardMotorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::PowerBoardMotorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__PowerBoardMotorStatus
    std::shared_ptr<mir_msgs::msg::PowerBoardMotorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__PowerBoardMotorStatus
    std::shared_ptr<mir_msgs::msg::PowerBoardMotorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PowerBoardMotorStatus_ & other) const
  {
    if (this->left_motor_ctrl_word != other.left_motor_ctrl_word) {
      return false;
    }
    if (this->left_motor_speed != other.left_motor_speed) {
      return false;
    }
    if (this->left_motor_encoder != other.left_motor_encoder) {
      return false;
    }
    if (this->left_motor_status != other.left_motor_status) {
      return false;
    }
    if (this->left_motor_error != other.left_motor_error) {
      return false;
    }
    if (this->left_motor_error_hist1 != other.left_motor_error_hist1) {
      return false;
    }
    if (this->left_motor_error_hist2 != other.left_motor_error_hist2) {
      return false;
    }
    if (this->left_motor_current != other.left_motor_current) {
      return false;
    }
    if (this->left_motor_i2t_motor != other.left_motor_i2t_motor) {
      return false;
    }
    if (this->left_motor_i2t_controller != other.left_motor_i2t_controller) {
      return false;
    }
    if (this->left_motor_temperature != other.left_motor_temperature) {
      return false;
    }
    if (this->right_motor_ctrl_word != other.right_motor_ctrl_word) {
      return false;
    }
    if (this->right_motor_speed != other.right_motor_speed) {
      return false;
    }
    if (this->right_motor_encoder != other.right_motor_encoder) {
      return false;
    }
    if (this->right_motor_status != other.right_motor_status) {
      return false;
    }
    if (this->right_motor_error != other.right_motor_error) {
      return false;
    }
    if (this->right_motor_error_hist1 != other.right_motor_error_hist1) {
      return false;
    }
    if (this->right_motor_error_hist2 != other.right_motor_error_hist2) {
      return false;
    }
    if (this->right_motor_current != other.right_motor_current) {
      return false;
    }
    if (this->right_motor_i2t_motor != other.right_motor_i2t_motor) {
      return false;
    }
    if (this->right_motor_i2t_controller != other.right_motor_i2t_controller) {
      return false;
    }
    if (this->right_motor_temperature != other.right_motor_temperature) {
      return false;
    }
    if (this->brake_left_status != other.brake_left_status) {
      return false;
    }
    if (this->brake_right_status != other.brake_right_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const PowerBoardMotorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PowerBoardMotorStatus_

// alias to use template instance with default allocator
using PowerBoardMotorStatus =
  mir_msgs::msg::PowerBoardMotorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__POWER_BOARD_MOTOR_STATUS__STRUCT_HPP_
