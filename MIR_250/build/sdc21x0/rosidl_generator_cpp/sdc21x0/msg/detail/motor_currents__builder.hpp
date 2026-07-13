// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdc21x0:msg/MotorCurrents.idl
// generated code does not contain a copyright notice

#ifndef SDC21X0__MSG__DETAIL__MOTOR_CURRENTS__BUILDER_HPP_
#define SDC21X0__MSG__DETAIL__MOTOR_CURRENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdc21x0/msg/detail/motor_currents__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdc21x0
{

namespace msg
{

namespace builder
{

class Init_MotorCurrents_right_motor
{
public:
  explicit Init_MotorCurrents_right_motor(::sdc21x0::msg::MotorCurrents & msg)
  : msg_(msg)
  {}
  ::sdc21x0::msg::MotorCurrents right_motor(::sdc21x0::msg::MotorCurrents::_right_motor_type arg)
  {
    msg_.right_motor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdc21x0::msg::MotorCurrents msg_;
};

class Init_MotorCurrents_left_motor
{
public:
  Init_MotorCurrents_left_motor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCurrents_right_motor left_motor(::sdc21x0::msg::MotorCurrents::_left_motor_type arg)
  {
    msg_.left_motor = std::move(arg);
    return Init_MotorCurrents_right_motor(msg_);
  }

private:
  ::sdc21x0::msg::MotorCurrents msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdc21x0::msg::MotorCurrents>()
{
  return sdc21x0::msg::builder::Init_MotorCurrents_left_motor();
}

}  // namespace sdc21x0

#endif  // SDC21X0__MSG__DETAIL__MOTOR_CURRENTS__BUILDER_HPP_
