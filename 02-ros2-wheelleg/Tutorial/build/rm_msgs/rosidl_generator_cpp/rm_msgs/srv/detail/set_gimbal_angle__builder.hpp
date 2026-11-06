// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_msgs:srv/SetGimbalAngle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_msgs/srv/set_gimbal_angle.hpp"


#ifndef RM_MSGS__SRV__DETAIL__SET_GIMBAL_ANGLE__BUILDER_HPP_
#define RM_MSGS__SRV__DETAIL__SET_GIMBAL_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_msgs/srv/detail/set_gimbal_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_msgs
{

namespace srv
{

namespace builder
{

class Init_SetGimbalAngle_Request_pitch
{
public:
  explicit Init_SetGimbalAngle_Request_pitch(::rm_msgs::srv::SetGimbalAngle_Request & msg)
  : msg_(msg)
  {}
  ::rm_msgs::srv::SetGimbalAngle_Request pitch(::rm_msgs::srv::SetGimbalAngle_Request::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_msgs::srv::SetGimbalAngle_Request msg_;
};

class Init_SetGimbalAngle_Request_yaw
{
public:
  Init_SetGimbalAngle_Request_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGimbalAngle_Request_pitch yaw(::rm_msgs::srv::SetGimbalAngle_Request::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_SetGimbalAngle_Request_pitch(msg_);
  }

private:
  ::rm_msgs::srv::SetGimbalAngle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_msgs::srv::SetGimbalAngle_Request>()
{
  return rm_msgs::srv::builder::Init_SetGimbalAngle_Request_yaw();
}

}  // namespace rm_msgs


namespace rm_msgs
{

namespace srv
{

namespace builder
{

class Init_SetGimbalAngle_Response_message
{
public:
  explicit Init_SetGimbalAngle_Response_message(::rm_msgs::srv::SetGimbalAngle_Response & msg)
  : msg_(msg)
  {}
  ::rm_msgs::srv::SetGimbalAngle_Response message(::rm_msgs::srv::SetGimbalAngle_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_msgs::srv::SetGimbalAngle_Response msg_;
};

class Init_SetGimbalAngle_Response_success
{
public:
  Init_SetGimbalAngle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGimbalAngle_Response_message success(::rm_msgs::srv::SetGimbalAngle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetGimbalAngle_Response_message(msg_);
  }

private:
  ::rm_msgs::srv::SetGimbalAngle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_msgs::srv::SetGimbalAngle_Response>()
{
  return rm_msgs::srv::builder::Init_SetGimbalAngle_Response_success();
}

}  // namespace rm_msgs


namespace rm_msgs
{

namespace srv
{

namespace builder
{

class Init_SetGimbalAngle_Event_response
{
public:
  explicit Init_SetGimbalAngle_Event_response(::rm_msgs::srv::SetGimbalAngle_Event & msg)
  : msg_(msg)
  {}
  ::rm_msgs::srv::SetGimbalAngle_Event response(::rm_msgs::srv::SetGimbalAngle_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_msgs::srv::SetGimbalAngle_Event msg_;
};

class Init_SetGimbalAngle_Event_request
{
public:
  explicit Init_SetGimbalAngle_Event_request(::rm_msgs::srv::SetGimbalAngle_Event & msg)
  : msg_(msg)
  {}
  Init_SetGimbalAngle_Event_response request(::rm_msgs::srv::SetGimbalAngle_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetGimbalAngle_Event_response(msg_);
  }

private:
  ::rm_msgs::srv::SetGimbalAngle_Event msg_;
};

class Init_SetGimbalAngle_Event_info
{
public:
  Init_SetGimbalAngle_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGimbalAngle_Event_request info(::rm_msgs::srv::SetGimbalAngle_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetGimbalAngle_Event_request(msg_);
  }

private:
  ::rm_msgs::srv::SetGimbalAngle_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_msgs::srv::SetGimbalAngle_Event>()
{
  return rm_msgs::srv::builder::Init_SetGimbalAngle_Event_info();
}

}  // namespace rm_msgs

#endif  // RM_MSGS__SRV__DETAIL__SET_GIMBAL_ANGLE__BUILDER_HPP_
