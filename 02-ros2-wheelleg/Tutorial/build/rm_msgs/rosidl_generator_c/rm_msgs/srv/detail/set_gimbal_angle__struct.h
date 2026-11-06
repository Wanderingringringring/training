// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_msgs:srv/SetGimbalAngle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_msgs/srv/set_gimbal_angle.h"


#ifndef RM_MSGS__SRV__DETAIL__SET_GIMBAL_ANGLE__STRUCT_H_
#define RM_MSGS__SRV__DETAIL__SET_GIMBAL_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetGimbalAngle in the package rm_msgs.
typedef struct rm_msgs__srv__SetGimbalAngle_Request
{
  double yaw;
  double pitch;
} rm_msgs__srv__SetGimbalAngle_Request;

// Struct for a sequence of rm_msgs__srv__SetGimbalAngle_Request.
typedef struct rm_msgs__srv__SetGimbalAngle_Request__Sequence
{
  rm_msgs__srv__SetGimbalAngle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_msgs__srv__SetGimbalAngle_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetGimbalAngle in the package rm_msgs.
typedef struct rm_msgs__srv__SetGimbalAngle_Response
{
  /// 是否成功
  bool success;
  /// 附加信息
  rosidl_runtime_c__String message;
} rm_msgs__srv__SetGimbalAngle_Response;

// Struct for a sequence of rm_msgs__srv__SetGimbalAngle_Response.
typedef struct rm_msgs__srv__SetGimbalAngle_Response__Sequence
{
  rm_msgs__srv__SetGimbalAngle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_msgs__srv__SetGimbalAngle_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rm_msgs__srv__SetGimbalAngle_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rm_msgs__srv__SetGimbalAngle_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetGimbalAngle in the package rm_msgs.
typedef struct rm_msgs__srv__SetGimbalAngle_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rm_msgs__srv__SetGimbalAngle_Request__Sequence request;
  rm_msgs__srv__SetGimbalAngle_Response__Sequence response;
} rm_msgs__srv__SetGimbalAngle_Event;

// Struct for a sequence of rm_msgs__srv__SetGimbalAngle_Event.
typedef struct rm_msgs__srv__SetGimbalAngle_Event__Sequence
{
  rm_msgs__srv__SetGimbalAngle_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_msgs__srv__SetGimbalAngle_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_MSGS__SRV__DETAIL__SET_GIMBAL_ANGLE__STRUCT_H_
