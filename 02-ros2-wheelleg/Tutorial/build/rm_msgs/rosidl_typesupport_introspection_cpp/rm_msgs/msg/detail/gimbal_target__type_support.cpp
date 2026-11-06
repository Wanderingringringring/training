// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rm_msgs:msg/GimbalTarget.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rm_msgs/msg/detail/gimbal_target__functions.h"
#include "rm_msgs/msg/detail/gimbal_target__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rm_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GimbalTarget_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rm_msgs::msg::GimbalTarget(_init);
}

void GimbalTarget_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rm_msgs::msg::GimbalTarget *>(message_memory);
  typed_message->~GimbalTarget();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GimbalTarget_message_member_array[2] = {
  {
    "yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_msgs::msg::GimbalTarget, yaw),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pitch",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_msgs::msg::GimbalTarget, pitch),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GimbalTarget_message_members = {
  "rm_msgs::msg",  // message namespace
  "GimbalTarget",  // message name
  2,  // number of fields
  sizeof(rm_msgs::msg::GimbalTarget),
  false,  // has_any_key_member_
  GimbalTarget_message_member_array,  // message members
  GimbalTarget_init_function,  // function to initialize message memory (memory has to be allocated)
  GimbalTarget_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GimbalTarget_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GimbalTarget_message_members,
  get_message_typesupport_handle_function,
  &rm_msgs__msg__GimbalTarget__get_type_hash,
  &rm_msgs__msg__GimbalTarget__get_type_description,
  &rm_msgs__msg__GimbalTarget__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rm_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rm_msgs::msg::GimbalTarget>()
{
  return &::rm_msgs::msg::rosidl_typesupport_introspection_cpp::GimbalTarget_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rm_msgs, msg, GimbalTarget)() {
  return &::rm_msgs::msg::rosidl_typesupport_introspection_cpp::GimbalTarget_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
