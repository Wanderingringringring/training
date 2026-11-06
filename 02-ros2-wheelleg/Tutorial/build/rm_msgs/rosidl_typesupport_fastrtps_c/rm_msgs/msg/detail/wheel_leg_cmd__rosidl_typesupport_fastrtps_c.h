// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from rm_msgs:msg/WheelLegCmd.idl
// generated code does not contain a copyright notice
#ifndef RM_MSGS__MSG__DETAIL__WHEEL_LEG_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define RM_MSGS__MSG__DETAIL__WHEEL_LEG_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_msgs/msg/detail/wheel_leg_cmd__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_msgs
bool cdr_serialize_rm_msgs__msg__WheelLegCmd(
  const rm_msgs__msg__WheelLegCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_msgs
bool cdr_deserialize_rm_msgs__msg__WheelLegCmd(
  eprosima::fastcdr::Cdr &,
  rm_msgs__msg__WheelLegCmd * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_msgs
size_t get_serialized_size_rm_msgs__msg__WheelLegCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_msgs
size_t max_serialized_size_rm_msgs__msg__WheelLegCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_msgs
bool cdr_serialize_key_rm_msgs__msg__WheelLegCmd(
  const rm_msgs__msg__WheelLegCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_msgs
size_t get_serialized_size_key_rm_msgs__msg__WheelLegCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_msgs
size_t max_serialized_size_key_rm_msgs__msg__WheelLegCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_msgs, msg, WheelLegCmd)();

#ifdef __cplusplus
}
#endif

#endif  // RM_MSGS__MSG__DETAIL__WHEEL_LEG_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
