// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/LocalMapStat.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__LOCAL_MAP_STAT__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__LOCAL_MAP_STAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/local_map_stat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_LocalMapStat_y
{
public:
  explicit Init_LocalMapStat_y(::mir_msgs::msg::LocalMapStat & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::LocalMapStat y(::mir_msgs::msg::LocalMapStat::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::LocalMapStat msg_;
};

class Init_LocalMapStat_x
{
public:
  explicit Init_LocalMapStat_x(::mir_msgs::msg::LocalMapStat & msg)
  : msg_(msg)
  {}
  Init_LocalMapStat_y x(::mir_msgs::msg::LocalMapStat::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_LocalMapStat_y(msg_);
  }

private:
  ::mir_msgs::msg::LocalMapStat msg_;
};

class Init_LocalMapStat_idx
{
public:
  Init_LocalMapStat_idx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalMapStat_x idx(::mir_msgs::msg::LocalMapStat::_idx_type arg)
  {
    msg_.idx = std::move(arg);
    return Init_LocalMapStat_x(msg_);
  }

private:
  ::mir_msgs::msg::LocalMapStat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::LocalMapStat>()
{
  return mir_msgs::msg::builder::Init_LocalMapStat_idx();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__LOCAL_MAP_STAT__BUILDER_HPP_
