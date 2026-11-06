// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_msgs:msg/GimbalTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_msgs/msg/gimbal_target.hpp"


#ifndef RM_MSGS__MSG__DETAIL__GIMBAL_TARGET__BUILDER_HPP_
#define RM_MSGS__MSG__DETAIL__GIMBAL_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_msgs/msg/detail/gimbal_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_msgs
{

namespace msg
{

namespace builder
{

class Init_GimbalTarget_pitch
{
public:
  explicit Init_GimbalTarget_pitch(::rm_msgs::msg::GimbalTarget & msg)
  : msg_(msg)
  {}
  ::rm_msgs::msg::GimbalTarget pitch(::rm_msgs::msg::GimbalTarget::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_msgs::msg::GimbalTarget msg_;
};

class Init_GimbalTarget_yaw
{
public:
  Init_GimbalTarget_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GimbalTarget_pitch yaw(::rm_msgs::msg::GimbalTarget::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_GimbalTarget_pitch(msg_);
  }

private:
  ::rm_msgs::msg::GimbalTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_msgs::msg::GimbalTarget>()
{
  return rm_msgs::msg::builder::Init_GimbalTarget_yaw();
}

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__GIMBAL_TARGET__BUILDER_HPP_
