// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_msgs:msg/WheelLegCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_msgs/msg/wheel_leg_cmd.hpp"


#ifndef RM_MSGS__MSG__DETAIL__WHEEL_LEG_CMD__TRAITS_HPP_
#define RM_MSGS__MSG__DETAIL__WHEEL_LEG_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_msgs/msg/detail/wheel_leg_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelLegCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: right_phi1
  {
    out << "right_phi1: ";
    rosidl_generator_traits::value_to_yaml(msg.right_phi1, out);
    out << ", ";
  }

  // member: right_phi4
  {
    out << "right_phi4: ";
    rosidl_generator_traits::value_to_yaml(msg.right_phi4, out);
    out << ", ";
  }

  // member: left_phi1
  {
    out << "left_phi1: ";
    rosidl_generator_traits::value_to_yaml(msg.left_phi1, out);
    out << ", ";
  }

  // member: left_phi4
  {
    out << "left_phi4: ";
    rosidl_generator_traits::value_to_yaml(msg.left_phi4, out);
    out << ", ";
  }

  // member: right_wheel
  {
    out << "right_wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel, out);
    out << ", ";
  }

  // member: left_wheel
  {
    out << "left_wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelLegCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: right_phi1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_phi1: ";
    rosidl_generator_traits::value_to_yaml(msg.right_phi1, out);
    out << "\n";
  }

  // member: right_phi4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_phi4: ";
    rosidl_generator_traits::value_to_yaml(msg.right_phi4, out);
    out << "\n";
  }

  // member: left_phi1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_phi1: ";
    rosidl_generator_traits::value_to_yaml(msg.left_phi1, out);
    out << "\n";
  }

  // member: left_phi4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_phi4: ";
    rosidl_generator_traits::value_to_yaml(msg.left_phi4, out);
    out << "\n";
  }

  // member: right_wheel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel, out);
    out << "\n";
  }

  // member: left_wheel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelLegCmd & msg, bool use_flow_style = false)
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

}  // namespace rm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rm_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_msgs::msg::WheelLegCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_msgs::msg::WheelLegCmd & msg)
{
  return rm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_msgs::msg::WheelLegCmd>()
{
  return "rm_msgs::msg::WheelLegCmd";
}

template<>
inline const char * name<rm_msgs::msg::WheelLegCmd>()
{
  return "rm_msgs/msg/WheelLegCmd";
}

template<>
struct has_fixed_size<rm_msgs::msg::WheelLegCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_msgs::msg::WheelLegCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_msgs::msg::WheelLegCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_MSGS__MSG__DETAIL__WHEEL_LEG_CMD__TRAITS_HPP_
