// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/UserPrompt.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__USER_PROMPT__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__USER_PROMPT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/user_prompt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_UserPrompt_timeout
{
public:
  explicit Init_UserPrompt_timeout(::mir_msgs::msg::UserPrompt & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::UserPrompt timeout(::mir_msgs::msg::UserPrompt::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::UserPrompt msg_;
};

class Init_UserPrompt_options
{
public:
  explicit Init_UserPrompt_options(::mir_msgs::msg::UserPrompt & msg)
  : msg_(msg)
  {}
  Init_UserPrompt_timeout options(::mir_msgs::msg::UserPrompt::_options_type arg)
  {
    msg_.options = std::move(arg);
    return Init_UserPrompt_timeout(msg_);
  }

private:
  ::mir_msgs::msg::UserPrompt msg_;
};

class Init_UserPrompt_question
{
public:
  explicit Init_UserPrompt_question(::mir_msgs::msg::UserPrompt & msg)
  : msg_(msg)
  {}
  Init_UserPrompt_options question(::mir_msgs::msg::UserPrompt::_question_type arg)
  {
    msg_.question = std::move(arg);
    return Init_UserPrompt_options(msg_);
  }

private:
  ::mir_msgs::msg::UserPrompt msg_;
};

class Init_UserPrompt_user_group
{
public:
  explicit Init_UserPrompt_user_group(::mir_msgs::msg::UserPrompt & msg)
  : msg_(msg)
  {}
  Init_UserPrompt_question user_group(::mir_msgs::msg::UserPrompt::_user_group_type arg)
  {
    msg_.user_group = std::move(arg);
    return Init_UserPrompt_question(msg_);
  }

private:
  ::mir_msgs::msg::UserPrompt msg_;
};

class Init_UserPrompt_guid
{
public:
  explicit Init_UserPrompt_guid(::mir_msgs::msg::UserPrompt & msg)
  : msg_(msg)
  {}
  Init_UserPrompt_user_group guid(::mir_msgs::msg::UserPrompt::_guid_type arg)
  {
    msg_.guid = std::move(arg);
    return Init_UserPrompt_user_group(msg_);
  }

private:
  ::mir_msgs::msg::UserPrompt msg_;
};

class Init_UserPrompt_has_request
{
public:
  Init_UserPrompt_has_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserPrompt_guid has_request(::mir_msgs::msg::UserPrompt::_has_request_type arg)
  {
    msg_.has_request = std::move(arg);
    return Init_UserPrompt_guid(msg_);
  }

private:
  ::mir_msgs::msg::UserPrompt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::UserPrompt>()
{
  return mir_msgs::msg::builder::Init_UserPrompt_has_request();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__USER_PROMPT__BUILDER_HPP_
