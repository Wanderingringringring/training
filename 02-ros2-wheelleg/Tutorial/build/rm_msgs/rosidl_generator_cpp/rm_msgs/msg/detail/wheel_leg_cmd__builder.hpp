// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_msgs:msg/WheelLegCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_msgs/msg/wheel_leg_cmd.hpp"


#ifndef RM_MSGS__MSG__DETAIL__WHEEL_LEG_CMD__BUILDER_HPP_
#define RM_MSGS__MSG__DETAIL__WHEEL_LEG_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_msgs/msg/detail/wheel_leg_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelLegCmd_left_wheel
{
public:
  explicit Init_WheelLegCmd_left_wheel(::rm_msgs::msg::WheelLegCmd & msg)
  : msg_(msg)
  {}
  ::rm_msgs::msg::WheelLegCmd left_wheel(::rm_msgs::msg::WheelLegCmd::_left_wheel_type arg)
  {
    msg_.left_wheel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_msgs::msg::WheelLegCmd msg_;
};

class Init_WheelLegCmd_right_wheel
{
public:
  explicit Init_WheelLegCmd_right_wheel(::rm_msgs::msg::WheelLegCmd & msg)
  : msg_(msg)
  {}
  Init_WheelLegCmd_left_wheel right_wheel(::rm_msgs::msg::WheelLegCmd::_right_wheel_type arg)
  {
    msg_.right_wheel = std::move(arg);
    return Init_WheelLegCmd_left_wheel(msg_);
  }

private:
  ::rm_msgs::msg::WheelLegCmd msg_;
};

class Init_WheelLegCmd_left_phi4
{
public:
  explicit Init_WheelLegCmd_left_phi4(::rm_msgs::msg::WheelLegCmd & msg)
  : msg_(msg)
  {}
  Init_WheelLegCmd_right_wheel left_phi4(::rm_msgs::msg::WheelLegCmd::_left_phi4_type arg)
  {
    msg_.left_phi4 = std::move(arg);
    return Init_WheelLegCmd_right_wheel(msg_);
  }

private:
  ::rm_msgs::msg::WheelLegCmd msg_;
};

class Init_WheelLegCmd_left_phi1
{
public:
  explicit Init_WheelLegCmd_left_phi1(::rm_msgs::msg::WheelLegCmd & msg)
  : msg_(msg)
  {}
  Init_WheelLegCmd_left_phi4 left_phi1(::rm_msgs::msg::WheelLegCmd::_left_phi1_type arg)
  {
    msg_.left_phi1 = std::move(arg);
    return Init_WheelLegCmd_left_phi4(msg_);
  }

private:
  ::rm_msgs::msg::WheelLegCmd msg_;
};

class Init_WheelLegCmd_right_phi4
{
public:
  explicit Init_WheelLegCmd_right_phi4(::rm_msgs::msg::WheelLegCmd & msg)
  : msg_(msg)
  {}
  Init_WheelLegCmd_left_phi1 right_phi4(::rm_msgs::msg::WheelLegCmd::_right_phi4_type arg)
  {
    msg_.right_phi4 = std::move(arg);
    return Init_WheelLegCmd_left_phi1(msg_);
  }

private:
  ::rm_msgs::msg::WheelLegCmd msg_;
};

class Init_WheelLegCmd_right_phi1
{
public:
  Init_WheelLegCmd_right_phi1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelLegCmd_right_phi4 right_phi1(::rm_msgs::msg::WheelLegCmd::_right_phi1_type arg)
  {
    msg_.right_phi1 = std::move(arg);
    return Init_WheelLegCmd_right_phi4(msg_);
  }

private:
  ::rm_msgs::msg::WheelLegCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_msgs::msg::WheelLegCmd>()
{
  return rm_msgs::msg::builder::Init_WheelLegCmd_right_phi1();
}

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__WHEEL_LEG_CMD__BUILDER_HPP_
