// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_msgs:msg/GimbalTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_msgs/msg/gimbal_target.hpp"


#ifndef RM_MSGS__MSG__DETAIL__GIMBAL_TARGET__TRAITS_HPP_
#define RM_MSGS__MSG__DETAIL__GIMBAL_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_msgs/msg/detail/gimbal_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GimbalTarget & msg,
  std::ostream & out)
{
  out << "{";
  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GimbalTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GimbalTarget & msg, bool use_flow_style = false)
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
  const rm_msgs::msg::GimbalTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_msgs::msg::GimbalTarget & msg)
{
  return rm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_msgs::msg::GimbalTarget>()
{
  return "rm_msgs::msg::GimbalTarget";
}

template<>
inline const char * name<rm_msgs::msg::GimbalTarget>()
{
  return "rm_msgs/msg/GimbalTarget";
}

template<>
struct has_fixed_size<rm_msgs::msg::GimbalTarget>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_msgs::msg::GimbalTarget>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_msgs::msg::GimbalTarget>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_MSGS__MSG__DETAIL__GIMBAL_TARGET__TRAITS_HPP_
