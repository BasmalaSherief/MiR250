// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/WebPath.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__WEB_PATH__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__WEB_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/web_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_WebPath_y
{
public:
  explicit Init_WebPath_y(::mir_msgs::msg::WebPath & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::WebPath y(::mir_msgs::msg::WebPath::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::WebPath msg_;
};

class Init_WebPath_x
{
public:
  explicit Init_WebPath_x(::mir_msgs::msg::WebPath & msg)
  : msg_(msg)
  {}
  Init_WebPath_y x(::mir_msgs::msg::WebPath::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_WebPath_y(msg_);
  }

private:
  ::mir_msgs::msg::WebPath msg_;
};

class Init_WebPath_seq
{
public:
  Init_WebPath_seq()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebPath_x seq(::mir_msgs::msg::WebPath::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_WebPath_x(msg_);
  }

private:
  ::mir_msgs::msg::WebPath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::WebPath>()
{
  return mir_msgs::msg::builder::Init_WebPath_seq();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__WEB_PATH__BUILDER_HPP_
