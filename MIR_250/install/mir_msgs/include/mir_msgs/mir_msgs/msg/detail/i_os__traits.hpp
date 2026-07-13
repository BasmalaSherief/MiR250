// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_msgs:msg/IOs.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__I_OS__TRAITS_HPP_
#define MIR_MSGS__MSG__DETAIL__I_OS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_msgs/msg/detail/i_os__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mir_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IOs & msg,
  std::ostream & out)
{
  out << "{";
  // member: module_guid
  {
    out << "module_guid: ";
    rosidl_generator_traits::value_to_yaml(msg.module_guid, out);
    out << ", ";
  }

  // member: connected
  {
    out << "connected: ";
    rosidl_generator_traits::value_to_yaml(msg.connected, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: num_inputs
  {
    out << "num_inputs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_inputs, out);
    out << ", ";
  }

  // member: input_state
  {
    if (msg.input_state.size() == 0) {
      out << "input_state: []";
    } else {
      out << "input_state: [";
      size_t pending_items = msg.input_state.size();
      for (auto item : msg.input_state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: num_outputs
  {
    out << "num_outputs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_outputs, out);
    out << ", ";
  }

  // member: output_state
  {
    if (msg.output_state.size() == 0) {
      out << "output_state: []";
    } else {
      out << "output_state: [";
      size_t pending_items = msg.output_state.size();
      for (auto item : msg.output_state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ip
  {
    out << "ip: ";
    rosidl_generator_traits::value_to_yaml(msg.ip, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IOs & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: module_guid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "module_guid: ";
    rosidl_generator_traits::value_to_yaml(msg.module_guid, out);
    out << "\n";
  }

  // member: connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connected: ";
    rosidl_generator_traits::value_to_yaml(msg.connected, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: num_inputs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_inputs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_inputs, out);
    out << "\n";
  }

  // member: input_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.input_state.size() == 0) {
      out << "input_state: []\n";
    } else {
      out << "input_state:\n";
      for (auto item : msg.input_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: num_outputs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_outputs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_outputs, out);
    out << "\n";
  }

  // member: output_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.output_state.size() == 0) {
      out << "output_state: []\n";
    } else {
      out << "output_state:\n";
      for (auto item : msg.output_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ip: ";
    rosidl_generator_traits::value_to_yaml(msg.ip, out);
    out << "\n";
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IOs & msg, bool use_flow_style = false)
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
  const mir_msgs::msg::IOs & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_msgs::msg::IOs & msg)
{
  return mir_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_msgs::msg::IOs>()
{
  return "mir_msgs::msg::IOs";
}

template<>
inline const char * name<mir_msgs::msg::IOs>()
{
  return "mir_msgs/msg/IOs";
}

template<>
struct has_fixed_size<mir_msgs::msg::IOs>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_msgs::msg::IOs>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_msgs::msg::IOs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_MSGS__MSG__DETAIL__I_OS__TRAITS_HPP_
