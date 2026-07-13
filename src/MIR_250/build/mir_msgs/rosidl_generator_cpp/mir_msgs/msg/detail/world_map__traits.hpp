// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/WorldMap.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__WORLD_MAP__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__WORLD_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/world_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'positions'
// Member 'areas'
#include "mir_msgs/msg/detail/resources_state__traits.hpp"
// Member 'robots'
#include "mir_msgs/msg/detail/external_robots__traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WorldMap & msg,
  std::ostream & out)
{
  out << "{";
  // member: positions
  {
    out << "positions: ";
    to_flow_style_yaml(msg.positions, out);
    out << ", ";
  }

  // member: areas
  {
    out << "areas: ";
    to_flow_style_yaml(msg.areas, out);
    out << ", ";
  }

  // member: robots
  {
    out << "robots: ";
    to_flow_style_yaml(msg.robots, out);
    out << ", ";
  }

  // member: map_id
  {
    out << "map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WorldMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "positions:\n";
    to_block_style_yaml(msg.positions, out, indentation + 2);
  }

  // member: areas
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "areas:\n";
    to_block_style_yaml(msg.areas, out, indentation + 2);
  }

  // member: robots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robots:\n";
    to_block_style_yaml(msg.robots, out, indentation + 2);
  }

  // member: map_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WorldMap & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mir_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mir_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mir_msgs::msg::WorldMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::WorldMap & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::WorldMap>()
{
  return "mir_msgs::msg::WorldMap";
}

template<>
inline const char * name<mir_msgs::msg::WorldMap>()
{
  return "mir_msgs/msg/WorldMap";
}

template<>
struct has_fixed_size<mir_msgs::msg::WorldMap>
  : std::integral_constant<bool, has_fixed_size<mir_msgs::msg::ExternalRobots>::value && has_fixed_size<mir_msgs::msg::ResourcesState>::value> {};

template<>
struct has_bounded_size<mir_msgs::msg::WorldMap>
  : std::integral_constant<bool, has_bounded_size<mir_msgs::msg::ExternalRobots>::value && has_bounded_size<mir_msgs::msg::ResourcesState>::value> {};

template<>
struct is_message<mir_msgs::msg::WorldMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__WORLD_MAP__TRAITS_HPP_
