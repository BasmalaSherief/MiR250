// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/UserPrompt.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__USER_PROMPT__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__USER_PROMPT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/user_prompt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UserPrompt & msg,
  std::ostream & out)
{
  out << "{";
  // member: has_request
  {
    out << "has_request: ";
    rosidl_generator_traits::value_to_yaml(msg.has_request, out);
    out << ", ";
  }

  // member: guid
  {
    out << "guid: ";
    rosidl_generator_traits::value_to_yaml(msg.guid, out);
    out << ", ";
  }

  // member: user_group
  {
    out << "user_group: ";
    rosidl_generator_traits::value_to_yaml(msg.user_group, out);
    out << ", ";
  }

  // member: question
  {
    out << "question: ";
    rosidl_generator_traits::value_to_yaml(msg.question, out);
    out << ", ";
  }

  // member: options
  {
    if (msg.options.size() == 0) {
      out << "options: []";
    } else {
      out << "options: [";
      size_t pending_items = msg.options.size();
      for (auto item : msg.options) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: timeout
  {
    out << "timeout: ";
    to_flow_style_yaml(msg.timeout, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UserPrompt & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: has_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_request: ";
    rosidl_generator_traits::value_to_yaml(msg.has_request, out);
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

  // member: user_group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_group: ";
    rosidl_generator_traits::value_to_yaml(msg.user_group, out);
    out << "\n";
  }

  // member: question
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "question: ";
    rosidl_generator_traits::value_to_yaml(msg.question, out);
    out << "\n";
  }

  // member: options
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.options.size() == 0) {
      out << "options: []\n";
    } else {
      out << "options:\n";
      for (auto item : msg.options) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout:\n";
    to_block_style_yaml(msg.timeout, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UserPrompt & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::UserPrompt & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::UserPrompt & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::UserPrompt>()
{
  return "mir_msgs::msg::UserPrompt";
}

template<>
inline const char * name<mir_msgs::msg::UserPrompt>()
{
  return "mir_msgs/msg/UserPrompt";
}

template<>
struct has_fixed_size<mir_msgs::msg::UserPrompt>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_msgs::msg::UserPrompt>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_msgs::msg::UserPrompt>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__USER_PROMPT__TRAITS_HPP_
