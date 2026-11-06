// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_msgs:srv/SetGimbalAngle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_msgs/srv/set_gimbal_angle.hpp"


#ifndef RM_MSGS__SRV__DETAIL__SET_GIMBAL_ANGLE__TRAITS_HPP_
#define RM_MSGS__SRV__DETAIL__SET_GIMBAL_ANGLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_msgs/srv/detail/set_gimbal_angle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetGimbalAngle_Request & msg,
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
  const SetGimbalAngle_Request & msg,
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

inline std::string to_yaml(const SetGimbalAngle_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_msgs::srv::SetGimbalAngle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rm_msgs::srv::SetGimbalAngle_Request & msg)
{
  return rm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rm_msgs::srv::SetGimbalAngle_Request>()
{
  return "rm_msgs::srv::SetGimbalAngle_Request";
}

template<>
inline const char * name<rm_msgs::srv::SetGimbalAngle_Request>()
{
  return "rm_msgs/srv/SetGimbalAngle_Request";
}

template<>
struct has_fixed_size<rm_msgs::srv::SetGimbalAngle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_msgs::srv::SetGimbalAngle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_msgs::srv::SetGimbalAngle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetGimbalAngle_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetGimbalAngle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetGimbalAngle_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_msgs::srv::SetGimbalAngle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rm_msgs::srv::SetGimbalAngle_Response & msg)
{
  return rm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rm_msgs::srv::SetGimbalAngle_Response>()
{
  return "rm_msgs::srv::SetGimbalAngle_Response";
}

template<>
inline const char * name<rm_msgs::srv::SetGimbalAngle_Response>()
{
  return "rm_msgs/srv/SetGimbalAngle_Response";
}

template<>
struct has_fixed_size<rm_msgs::srv::SetGimbalAngle_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_msgs::srv::SetGimbalAngle_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_msgs::srv::SetGimbalAngle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace rm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetGimbalAngle_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetGimbalAngle_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetGimbalAngle_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_msgs::srv::SetGimbalAngle_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rm_msgs::srv::SetGimbalAngle_Event & msg)
{
  return rm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rm_msgs::srv::SetGimbalAngle_Event>()
{
  return "rm_msgs::srv::SetGimbalAngle_Event";
}

template<>
inline const char * name<rm_msgs::srv::SetGimbalAngle_Event>()
{
  return "rm_msgs/srv/SetGimbalAngle_Event";
}

template<>
struct has_fixed_size<rm_msgs::srv::SetGimbalAngle_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_msgs::srv::SetGimbalAngle_Event>
  : std::integral_constant<bool, has_bounded_size<rm_msgs::srv::SetGimbalAngle_Request>::value && has_bounded_size<rm_msgs::srv::SetGimbalAngle_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<rm_msgs::srv::SetGimbalAngle_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rm_msgs::srv::SetGimbalAngle>()
{
  return "rm_msgs::srv::SetGimbalAngle";
}

template<>
inline const char * name<rm_msgs::srv::SetGimbalAngle>()
{
  return "rm_msgs/srv/SetGimbalAngle";
}

template<>
struct has_fixed_size<rm_msgs::srv::SetGimbalAngle>
  : std::integral_constant<
    bool,
    has_fixed_size<rm_msgs::srv::SetGimbalAngle_Request>::value &&
    has_fixed_size<rm_msgs::srv::SetGimbalAngle_Response>::value
  >
{
};

template<>
struct has_bounded_size<rm_msgs::srv::SetGimbalAngle>
  : std::integral_constant<
    bool,
    has_bounded_size<rm_msgs::srv::SetGimbalAngle_Request>::value &&
    has_bounded_size<rm_msgs::srv::SetGimbalAngle_Response>::value
  >
{
};

template<>
struct is_service<rm_msgs::srv::SetGimbalAngle>
  : std::true_type
{
};

template<>
struct is_service_request<rm_msgs::srv::SetGimbalAngle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rm_msgs::srv::SetGimbalAngle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RM_MSGS__SRV__DETAIL__SET_GIMBAL_ANGLE__TRAITS_HPP_
