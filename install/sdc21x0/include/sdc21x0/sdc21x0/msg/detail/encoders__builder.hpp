// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdc21x0:msg/Encoders.idl
// generated code does not contain a copyright notice

#ifndef SDC21X0__MSG__DETAIL__ENCODERS__BUILDER_HPP_
#define SDC21X0__MSG__DETAIL__ENCODERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdc21x0/msg/detail/encoders__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdc21x0
{

namespace msg
{

namespace builder
{

class Init_Encoders_right_wheel
{
public:
  explicit Init_Encoders_right_wheel(::sdc21x0::msg::Encoders & msg)
  : msg_(msg)
  {}
  ::sdc21x0::msg::Encoders right_wheel(::sdc21x0::msg::Encoders::_right_wheel_type arg)
  {
    msg_.right_wheel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdc21x0::msg::Encoders msg_;
};

class Init_Encoders_left_wheel
{
public:
  explicit Init_Encoders_left_wheel(::sdc21x0::msg::Encoders & msg)
  : msg_(msg)
  {}
  Init_Encoders_right_wheel left_wheel(::sdc21x0::msg::Encoders::_left_wheel_type arg)
  {
    msg_.left_wheel = std::move(arg);
    return Init_Encoders_right_wheel(msg_);
  }

private:
  ::sdc21x0::msg::Encoders msg_;
};

class Init_Encoders_time_delta
{
public:
  Init_Encoders_time_delta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Encoders_left_wheel time_delta(::sdc21x0::msg::Encoders::_time_delta_type arg)
  {
    msg_.time_delta = std::move(arg);
    return Init_Encoders_left_wheel(msg_);
  }

private:
  ::sdc21x0::msg::Encoders msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdc21x0::msg::Encoders>()
{
  return sdc21x0::msg::builder::Init_Encoders_time_delta();
}

}  // namespace sdc21x0

#endif  // SDC21X0__MSG__DETAIL__ENCODERS__BUILDER_HPP_
