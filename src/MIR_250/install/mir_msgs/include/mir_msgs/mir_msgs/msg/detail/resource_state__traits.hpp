// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/ResourceState.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__RESOURCE_STATE__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__RESOURCE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/resource_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'collision_point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ResourceState & msg,
  std::ostream & out)
{
  out << "{";
  // member: assigned
  {
    if (msg.assigned.size() == 0) {
      out << "assigned: []";
    } else {
      out << "assigned: [";
      size_t pending_items = msg.assigned.size();
      for (auto item : msg.assigned) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: path_idx
  {
    out << "path_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.path_idx, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: collision_point
  {
    out << "collision_point: ";
    to_flow_style_yaml(msg.collision_point, out);
    out << ", ";
  }

  // member: queue
  {
    if (msg.queue.size() == 0) {
      out << "queue: []";
    } else {
      out << "queue: [";
      size_t pending_items = msg.queue.size();
      for (auto item : msg.queue) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: guid
  {
    out << "guid: ";
    rosidl_generator_traits::value_to_yaml(msg.guid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResourceState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: assigned
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.assigned.size() == 0) {
      out << "assigned: []\n";
    } else {
      out << "assigned:\n";
      for (auto item : msg.assigned) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: path_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.path_idx, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: collision_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_point:\n";
    to_block_style_yaml(msg.collision_point, out, indentation + 2);
  }

  // member: queue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.queue.size() == 0) {
      out << "queue: []\n";
    } else {
      out << "queue:\n";
      for (auto item : msg.queue) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: guid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "guid: ";
    rosidl_generator_traits::value_to_yaml(msg.guid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResourceState & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::ResourceState & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::ResourceState & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::ResourceState>()
{
  return "mir_msgs::msg::ResourceState";
}

template<>
inline const char * name<mir_msgs::msg::ResourceState>()
{
  return "mir_msgs/msg/ResourceState";
}

template<>
struct has_fixed_size<mir_msgs::msg::ResourceState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_msgs::msg::ResourceState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_msgs::msg::ResourceState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__RESOURCE_STATE__TRAITS_HPP_
