// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_msgs:msg/ChassisCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_msgs/msg/chassis_cmd.hpp"


#ifndef RM_MSGS__MSG__DETAIL__CHASSIS_CMD__BUILDER_HPP_
#define RM_MSGS__MSG__DETAIL__CHASSIS_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_msgs/msg/detail/chassis_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_msgs
{

namespace msg
{

namespace builder
{

class Init_ChassisCmd_wz
{
public:
  explicit Init_ChassisCmd_wz(::rm_msgs::msg::ChassisCmd & msg)
  : msg_(msg)
  {}
  ::rm_msgs::msg::ChassisCmd wz(::rm_msgs::msg::ChassisCmd::_wz_type arg)
  {
    msg_.wz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_msgs::msg::ChassisCmd msg_;
};

class Init_ChassisCmd_vy
{
public:
  explicit Init_ChassisCmd_vy(::rm_msgs::msg::ChassisCmd & msg)
  : msg_(msg)
  {}
  Init_ChassisCmd_wz vy(::rm_msgs::msg::ChassisCmd::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_ChassisCmd_wz(msg_);
  }

private:
  ::rm_msgs::msg::ChassisCmd msg_;
};

class Init_ChassisCmd_vx
{
public:
  Init_ChassisCmd_vx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChassisCmd_vy vx(::rm_msgs::msg::ChassisCmd::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_ChassisCmd_vy(msg_);
  }

private:
  ::rm_msgs::msg::ChassisCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_msgs::msg::ChassisCmd>()
{
  return rm_msgs::msg::builder::Init_ChassisCmd_vx();
}

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__CHASSIS_CMD__BUILDER_HPP_
