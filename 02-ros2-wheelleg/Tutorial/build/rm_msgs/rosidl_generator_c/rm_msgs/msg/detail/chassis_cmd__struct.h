// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_msgs:msg/ChassisCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_msgs/msg/chassis_cmd.h"


#ifndef RM_MSGS__MSG__DETAIL__CHASSIS_CMD__STRUCT_H_
#define RM_MSGS__MSG__DETAIL__CHASSIS_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ChassisCmd in the package rm_msgs.
/**
  * 底盘速度指令（全向移动）
 */
typedef struct rm_msgs__msg__ChassisCmd
{
  /// 前进方向速度 (m/s)
  double vx;
  /// 横移方向速度 (m/s)
  double vy;
  /// 自转角速度 (rad/s)
  double wz;
} rm_msgs__msg__ChassisCmd;

// Struct for a sequence of rm_msgs__msg__ChassisCmd.
typedef struct rm_msgs__msg__ChassisCmd__Sequence
{
  rm_msgs__msg__ChassisCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_msgs__msg__ChassisCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_MSGS__MSG__DETAIL__CHASSIS_CMD__STRUCT_H_
