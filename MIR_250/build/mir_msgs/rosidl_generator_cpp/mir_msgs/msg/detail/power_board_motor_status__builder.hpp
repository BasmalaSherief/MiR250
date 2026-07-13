// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/PowerBoardMotorStatus.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__POWER_BOARD_MOTOR_STATUS__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__POWER_BOARD_MOTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/power_board_motor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_PowerBoardMotorStatus_brake_right_status
{
public:
  explicit Init_PowerBoardMotorStatus_brake_right_status(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::PowerBoardMotorStatus brake_right_status(::mir_msgs::msg::PowerBoardMotorStatus::_brake_right_status_type arg)
  {
    msg_.brake_right_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_brake_left_status
{
public:
  explicit Init_PowerBoardMotorStatus_brake_left_status(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_brake_right_status brake_left_status(::mir_msgs::msg::PowerBoardMotorStatus::_brake_left_status_type arg)
  {
    msg_.brake_left_status = std::move(arg);
    return Init_PowerBoardMotorStatus_brake_right_status(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_right_motor_temperature
{
public:
  explicit Init_PowerBoardMotorStatus_right_motor_temperature(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_brake_left_status right_motor_temperature(::mir_msgs::msg::PowerBoardMotorStatus::_right_motor_temperature_type arg)
  {
    msg_.right_motor_temperature = std::move(arg);
    return Init_PowerBoardMotorStatus_brake_left_status(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_right_motor_i2t_controller
{
public:
  explicit Init_PowerBoardMotorStatus_right_motor_i2t_controller(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_right_motor_temperature right_motor_i2t_controller(::mir_msgs::msg::PowerBoardMotorStatus::_right_motor_i2t_controller_type arg)
  {
    msg_.right_motor_i2t_controller = std::move(arg);
    return Init_PowerBoardMotorStatus_right_motor_temperature(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_right_motor_i2t_motor
{
public:
  explicit Init_PowerBoardMotorStatus_right_motor_i2t_motor(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_right_motor_i2t_controller right_motor_i2t_motor(::mir_msgs::msg::PowerBoardMotorStatus::_right_motor_i2t_motor_type arg)
  {
    msg_.right_motor_i2t_motor = std::move(arg);
    return Init_PowerBoardMotorStatus_right_motor_i2t_controller(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_right_motor_current
{
public:
  explicit Init_PowerBoardMotorStatus_right_motor_current(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_right_motor_i2t_motor right_motor_current(::mir_msgs::msg::PowerBoardMotorStatus::_right_motor_current_type arg)
  {
    msg_.right_motor_current = std::move(arg);
    return Init_PowerBoardMotorStatus_right_motor_i2t_motor(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_right_motor_error_hist2
{
public:
  explicit Init_PowerBoardMotorStatus_right_motor_error_hist2(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_right_motor_current right_motor_error_hist2(::mir_msgs::msg::PowerBoardMotorStatus::_right_motor_error_hist2_type arg)
  {
    msg_.right_motor_error_hist2 = std::move(arg);
    return Init_PowerBoardMotorStatus_right_motor_current(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_right_motor_error_hist1
{
public:
  explicit Init_PowerBoardMotorStatus_right_motor_error_hist1(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_right_motor_error_hist2 right_motor_error_hist1(::mir_msgs::msg::PowerBoardMotorStatus::_right_motor_error_hist1_type arg)
  {
    msg_.right_motor_error_hist1 = std::move(arg);
    return Init_PowerBoardMotorStatus_right_motor_error_hist2(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_right_motor_error
{
public:
  explicit Init_PowerBoardMotorStatus_right_motor_error(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_right_motor_error_hist1 right_motor_error(::mir_msgs::msg::PowerBoardMotorStatus::_right_motor_error_type arg)
  {
    msg_.right_motor_error = std::move(arg);
    return Init_PowerBoardMotorStatus_right_motor_error_hist1(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_right_motor_status
{
public:
  explicit Init_PowerBoardMotorStatus_right_motor_status(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_right_motor_error right_motor_status(::mir_msgs::msg::PowerBoardMotorStatus::_right_motor_status_type arg)
  {
    msg_.right_motor_status = std::move(arg);
    return Init_PowerBoardMotorStatus_right_motor_error(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_right_motor_encoder
{
public:
  explicit Init_PowerBoardMotorStatus_right_motor_encoder(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_right_motor_status right_motor_encoder(::mir_msgs::msg::PowerBoardMotorStatus::_right_motor_encoder_type arg)
  {
    msg_.right_motor_encoder = std::move(arg);
    return Init_PowerBoardMotorStatus_right_motor_status(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_right_motor_speed
{
public:
  explicit Init_PowerBoardMotorStatus_right_motor_speed(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_right_motor_encoder right_motor_speed(::mir_msgs::msg::PowerBoardMotorStatus::_right_motor_speed_type arg)
  {
    msg_.right_motor_speed = std::move(arg);
    return Init_PowerBoardMotorStatus_right_motor_encoder(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_right_motor_ctrl_word
{
public:
  explicit Init_PowerBoardMotorStatus_right_motor_ctrl_word(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_right_motor_speed right_motor_ctrl_word(::mir_msgs::msg::PowerBoardMotorStatus::_right_motor_ctrl_word_type arg)
  {
    msg_.right_motor_ctrl_word = std::move(arg);
    return Init_PowerBoardMotorStatus_right_motor_speed(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_left_motor_temperature
{
public:
  explicit Init_PowerBoardMotorStatus_left_motor_temperature(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_right_motor_ctrl_word left_motor_temperature(::mir_msgs::msg::PowerBoardMotorStatus::_left_motor_temperature_type arg)
  {
    msg_.left_motor_temperature = std::move(arg);
    return Init_PowerBoardMotorStatus_right_motor_ctrl_word(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_left_motor_i2t_controller
{
public:
  explicit Init_PowerBoardMotorStatus_left_motor_i2t_controller(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_left_motor_temperature left_motor_i2t_controller(::mir_msgs::msg::PowerBoardMotorStatus::_left_motor_i2t_controller_type arg)
  {
    msg_.left_motor_i2t_controller = std::move(arg);
    return Init_PowerBoardMotorStatus_left_motor_temperature(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_left_motor_i2t_motor
{
public:
  explicit Init_PowerBoardMotorStatus_left_motor_i2t_motor(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_left_motor_i2t_controller left_motor_i2t_motor(::mir_msgs::msg::PowerBoardMotorStatus::_left_motor_i2t_motor_type arg)
  {
    msg_.left_motor_i2t_motor = std::move(arg);
    return Init_PowerBoardMotorStatus_left_motor_i2t_controller(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_left_motor_current
{
public:
  explicit Init_PowerBoardMotorStatus_left_motor_current(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_left_motor_i2t_motor left_motor_current(::mir_msgs::msg::PowerBoardMotorStatus::_left_motor_current_type arg)
  {
    msg_.left_motor_current = std::move(arg);
    return Init_PowerBoardMotorStatus_left_motor_i2t_motor(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_left_motor_error_hist2
{
public:
  explicit Init_PowerBoardMotorStatus_left_motor_error_hist2(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_left_motor_current left_motor_error_hist2(::mir_msgs::msg::PowerBoardMotorStatus::_left_motor_error_hist2_type arg)
  {
    msg_.left_motor_error_hist2 = std::move(arg);
    return Init_PowerBoardMotorStatus_left_motor_current(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_left_motor_error_hist1
{
public:
  explicit Init_PowerBoardMotorStatus_left_motor_error_hist1(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_left_motor_error_hist2 left_motor_error_hist1(::mir_msgs::msg::PowerBoardMotorStatus::_left_motor_error_hist1_type arg)
  {
    msg_.left_motor_error_hist1 = std::move(arg);
    return Init_PowerBoardMotorStatus_left_motor_error_hist2(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_left_motor_error
{
public:
  explicit Init_PowerBoardMotorStatus_left_motor_error(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_left_motor_error_hist1 left_motor_error(::mir_msgs::msg::PowerBoardMotorStatus::_left_motor_error_type arg)
  {
    msg_.left_motor_error = std::move(arg);
    return Init_PowerBoardMotorStatus_left_motor_error_hist1(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_left_motor_status
{
public:
  explicit Init_PowerBoardMotorStatus_left_motor_status(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_left_motor_error left_motor_status(::mir_msgs::msg::PowerBoardMotorStatus::_left_motor_status_type arg)
  {
    msg_.left_motor_status = std::move(arg);
    return Init_PowerBoardMotorStatus_left_motor_error(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_left_motor_encoder
{
public:
  explicit Init_PowerBoardMotorStatus_left_motor_encoder(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_left_motor_status left_motor_encoder(::mir_msgs::msg::PowerBoardMotorStatus::_left_motor_encoder_type arg)
  {
    msg_.left_motor_encoder = std::move(arg);
    return Init_PowerBoardMotorStatus_left_motor_status(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_left_motor_speed
{
public:
  explicit Init_PowerBoardMotorStatus_left_motor_speed(::mir_msgs::msg::PowerBoardMotorStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardMotorStatus_left_motor_encoder left_motor_speed(::mir_msgs::msg::PowerBoardMotorStatus::_left_motor_speed_type arg)
  {
    msg_.left_motor_speed = std::move(arg);
    return Init_PowerBoardMotorStatus_left_motor_encoder(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

class Init_PowerBoardMotorStatus_left_motor_ctrl_word
{
public:
  Init_PowerBoardMotorStatus_left_motor_ctrl_word()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerBoardMotorStatus_left_motor_speed left_motor_ctrl_word(::mir_msgs::msg::PowerBoardMotorStatus::_left_motor_ctrl_word_type arg)
  {
    msg_.left_motor_ctrl_word = std::move(arg);
    return Init_PowerBoardMotorStatus_left_motor_speed(msg_);
  }

private:
  ::mir_msgs::msg::PowerBoardMotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::PowerBoardMotorStatus>()
{
  return mir_msgs::msg::builder::Init_PowerBoardMotorStatus_left_motor_ctrl_word();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__POWER_BOARD_MOTOR_STATUS__BUILDER_HPP_
