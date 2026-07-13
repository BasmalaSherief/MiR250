// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/WorldMap.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__WORLD_MAP__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__WORLD_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/world_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_WorldMap_map_id
{
public:
  explicit Init_WorldMap_map_id(::mir_msgs::msg::WorldMap & msg)
  : msg_(msg)
  {}
  ::mir_msgs::msg::WorldMap map_id(::mir_msgs::msg::WorldMap::_map_id_type arg)
  {
    msg_.map_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::WorldMap msg_;
};

class Init_WorldMap_robots
{
public:
  explicit Init_WorldMap_robots(::mir_msgs::msg::WorldMap & msg)
  : msg_(msg)
  {}
  Init_WorldMap_map_id robots(::mir_msgs::msg::WorldMap::_robots_type arg)
  {
    msg_.robots = std::move(arg);
    return Init_WorldMap_map_id(msg_);
  }

private:
  ::mir_msgs::msg::WorldMap msg_;
};

class Init_WorldMap_areas
{
public:
  explicit Init_WorldMap_areas(::mir_msgs::msg::WorldMap & msg)
  : msg_(msg)
  {}
  Init_WorldMap_robots areas(::mir_msgs::msg::WorldMap::_areas_type arg)
  {
    msg_.areas = std::move(arg);
    return Init_WorldMap_robots(msg_);
  }

private:
  ::mir_msgs::msg::WorldMap msg_;
};

class Init_WorldMap_positions
{
public:
  Init_WorldMap_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorldMap_areas positions(::mir_msgs::msg::WorldMap::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_WorldMap_areas(msg_);
  }

private:
  ::mir_msgs::msg::WorldMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::WorldMap>()
{
  return mir_msgs::msg::builder::Init_WorldMap_positions();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__WORLD_MAP__BUILDER_HPP_
