// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdc21x0:msg/StampedEncoders.idl
// generated code does not contain a copyright notice

#ifndef SDC21X0__MSG__DETAIL__STAMPED_ENCODERS__BUILDER_HPP_
#define SDC21X0__MSG__DETAIL__STAMPED_ENCODERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdc21x0/msg/detail/stamped_encoders__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdc21x0
{

namespace msg
{

namespace builder
{

class Init_StampedEncoders_encoders
{
public:
  explicit Init_StampedEncoders_encoders(::sdc21x0::msg::StampedEncoders & msg)
  : msg_(msg)
  {}
  ::sdc21x0::msg::StampedEncoders encoders(::sdc21x0::msg::StampedEncoders::_encoders_type arg)
  {
    msg_.encoders = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdc21x0::msg::StampedEncoders msg_;
};

class Init_StampedEncoders_header
{
public:
  Init_StampedEncoders_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StampedEncoders_encoders header(::sdc21x0::msg::StampedEncoders::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StampedEncoders_encoders(msg_);
  }

private:
  ::sdc21x0::msg::StampedEncoders msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdc21x0::msg::StampedEncoders>()
{
  return sdc21x0::msg::builder::Init_StampedEncoders_header();
}

}  // namespace sdc21x0

#endif  // SDC21X0__MSG__DETAIL__STAMPED_ENCODERS__BUILDER_HPP_
