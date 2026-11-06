// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_msgs:msg/GimbalTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_msgs/msg/gimbal_target.h"


#ifndef RM_MSGS__MSG__DETAIL__GIMBAL_TARGET__STRUCT_H_
#define RM_MSGS__MSG__DETAIL__GIMBAL_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/GimbalTarget in the package rm_msgs.
/**
  * 云台目标角度
 */
typedef struct rm_msgs__msg__GimbalTarget
{
  /// 目标 yaw 角 (rad)
  double yaw;
  /// 目标 pitch 角 (rad)
  double pitch;
} rm_msgs__msg__GimbalTarget;

// Struct for a sequence of rm_msgs__msg__GimbalTarget.
typedef struct rm_msgs__msg__GimbalTarget__Sequence
{
  rm_msgs__msg__GimbalTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_msgs__msg__GimbalTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_MSGS__MSG__DETAIL__GIMBAL_TARGET__STRUCT_H_
