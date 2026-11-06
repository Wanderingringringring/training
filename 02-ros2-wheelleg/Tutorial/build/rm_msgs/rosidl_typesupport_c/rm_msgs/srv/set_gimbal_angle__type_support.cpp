// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from rm_msgs:srv/SetGimbalAngle.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rm_msgs/srv/detail/set_gimbal_angle__struct.h"
#include "rm_msgs/srv/detail/set_gimbal_angle__type_support.h"
#include "rm_msgs/srv/detail/set_gimbal_angle__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rm_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetGimbalAngle_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetGimbalAngle_Request_type_support_ids_t;

static const _SetGimbalAngle_Request_type_support_ids_t _SetGimbalAngle_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetGimbalAngle_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetGimbalAngle_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetGimbalAngle_Request_type_support_symbol_names_t _SetGimbalAngle_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_msgs, srv, SetGimbalAngle_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rm_msgs, srv, SetGimbalAngle_Request)),
  }
};

typedef struct _SetGimbalAngle_Request_type_support_data_t
{
  void * data[2];
} _SetGimbalAngle_Request_type_support_data_t;

static _SetGimbalAngle_Request_type_support_data_t _SetGimbalAngle_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetGimbalAngle_Request_message_typesupport_map = {
  2,
  "rm_msgs",
  &_SetGimbalAngle_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetGimbalAngle_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetGimbalAngle_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetGimbalAngle_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetGimbalAngle_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rm_msgs__srv__SetGimbalAngle_Request__get_type_hash,
  &rm_msgs__srv__SetGimbalAngle_Request__get_type_description,
  &rm_msgs__srv__SetGimbalAngle_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rm_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rm_msgs, srv, SetGimbalAngle_Request)() {
  return &::rm_msgs::srv::rosidl_typesupport_c::SetGimbalAngle_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rm_msgs/srv/detail/set_gimbal_angle__struct.h"
// already included above
// #include "rm_msgs/srv/detail/set_gimbal_angle__type_support.h"
// already included above
// #include "rm_msgs/srv/detail/set_gimbal_angle__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rm_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetGimbalAngle_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetGimbalAngle_Response_type_support_ids_t;

static const _SetGimbalAngle_Response_type_support_ids_t _SetGimbalAngle_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetGimbalAngle_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetGimbalAngle_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetGimbalAngle_Response_type_support_symbol_names_t _SetGimbalAngle_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_msgs, srv, SetGimbalAngle_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rm_msgs, srv, SetGimbalAngle_Response)),
  }
};

typedef struct _SetGimbalAngle_Response_type_support_data_t
{
  void * data[2];
} _SetGimbalAngle_Response_type_support_data_t;

static _SetGimbalAngle_Response_type_support_data_t _SetGimbalAngle_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetGimbalAngle_Response_message_typesupport_map = {
  2,
  "rm_msgs",
  &_SetGimbalAngle_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetGimbalAngle_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetGimbalAngle_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetGimbalAngle_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetGimbalAngle_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rm_msgs__srv__SetGimbalAngle_Response__get_type_hash,
  &rm_msgs__srv__SetGimbalAngle_Response__get_type_description,
  &rm_msgs__srv__SetGimbalAngle_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rm_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rm_msgs, srv, SetGimbalAngle_Response)() {
  return &::rm_msgs::srv::rosidl_typesupport_c::SetGimbalAngle_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rm_msgs/srv/detail/set_gimbal_angle__struct.h"
// already included above
// #include "rm_msgs/srv/detail/set_gimbal_angle__type_support.h"
// already included above
// #include "rm_msgs/srv/detail/set_gimbal_angle__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rm_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetGimbalAngle_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetGimbalAngle_Event_type_support_ids_t;

static const _SetGimbalAngle_Event_type_support_ids_t _SetGimbalAngle_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetGimbalAngle_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetGimbalAngle_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetGimbalAngle_Event_type_support_symbol_names_t _SetGimbalAngle_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_msgs, srv, SetGimbalAngle_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rm_msgs, srv, SetGimbalAngle_Event)),
  }
};

typedef struct _SetGimbalAngle_Event_type_support_data_t
{
  void * data[2];
} _SetGimbalAngle_Event_type_support_data_t;

static _SetGimbalAngle_Event_type_support_data_t _SetGimbalAngle_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetGimbalAngle_Event_message_typesupport_map = {
  2,
  "rm_msgs",
  &_SetGimbalAngle_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetGimbalAngle_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetGimbalAngle_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetGimbalAngle_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetGimbalAngle_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rm_msgs__srv__SetGimbalAngle_Event__get_type_hash,
  &rm_msgs__srv__SetGimbalAngle_Event__get_type_description,
  &rm_msgs__srv__SetGimbalAngle_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rm_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rm_msgs, srv, SetGimbalAngle_Event)() {
  return &::rm_msgs::srv::rosidl_typesupport_c::SetGimbalAngle_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rm_msgs/srv/detail/set_gimbal_angle__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace rm_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetGimbalAngle_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetGimbalAngle_type_support_ids_t;

static const _SetGimbalAngle_type_support_ids_t _SetGimbalAngle_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetGimbalAngle_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetGimbalAngle_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetGimbalAngle_type_support_symbol_names_t _SetGimbalAngle_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_msgs, srv, SetGimbalAngle)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rm_msgs, srv, SetGimbalAngle)),
  }
};

typedef struct _SetGimbalAngle_type_support_data_t
{
  void * data[2];
} _SetGimbalAngle_type_support_data_t;

static _SetGimbalAngle_type_support_data_t _SetGimbalAngle_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetGimbalAngle_service_typesupport_map = {
  2,
  "rm_msgs",
  &_SetGimbalAngle_service_typesupport_ids.typesupport_identifier[0],
  &_SetGimbalAngle_service_typesupport_symbol_names.symbol_name[0],
  &_SetGimbalAngle_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetGimbalAngle_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetGimbalAngle_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetGimbalAngle_Request_message_type_support_handle,
  &SetGimbalAngle_Response_message_type_support_handle,
  &SetGimbalAngle_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rm_msgs,
    srv,
    SetGimbalAngle
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rm_msgs,
    srv,
    SetGimbalAngle
  ),
  &rm_msgs__srv__SetGimbalAngle__get_type_hash,
  &rm_msgs__srv__SetGimbalAngle__get_type_description,
  &rm_msgs__srv__SetGimbalAngle__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rm_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, rm_msgs, srv, SetGimbalAngle)() {
  return &::rm_msgs::srv::rosidl_typesupport_c::SetGimbalAngle_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
