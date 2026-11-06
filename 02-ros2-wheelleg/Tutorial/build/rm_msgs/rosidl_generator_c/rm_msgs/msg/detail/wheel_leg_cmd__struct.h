// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_msgs:msg/WheelLegCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_msgs/msg/wheel_leg_cmd.h"


#ifndef RM_MSGS__MSG__DETAIL__WHEEL_LEG_CMD__STRUCT_H_
#define RM_MSGS__MSG__DETAIL__WHEEL_LEG_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/WheelLegCmd in the package rm_msgs.
/**
  * 轮腿机器人 6 个执行器的力矩指令 (N·m)
  *
  * 字段顺序与 mjcf/robot.xml 中 <actuator> 的定义顺序一致，
  * 对应 MuJoCo 的 data.ctrl[0] ~ data.ctrl[5]。
  *
  * 注意：这是"控制器 → 仿真/硬件"的指令消息，不是状态消息。
 */
typedef struct rm_msgs__msg__WheelLegCmd
{
  /// 右腿近端关节 joint_right_phi1  -> ctrl  (ctrlrange ±6.0)
  double right_phi1;
  /// 右腿远端关节 joint_right_phi4  -> ctrl  (ctrlrange ±6.0)
  double right_phi4;
  /// 左腿近端关节 joint_left_phi1   -> ctrl  (ctrlrange ±6.0)
  double left_phi1;
  /// 左腿远端关节 joint_left_phi4   -> ctrl  (ctrlrange ±6.0)
  double left_phi4;
  /// 右轮        right_wheel_torque -> ctrl  (ctrlrange ±2.0)
  double right_wheel;
  /// 左轮        left_wheel_torque  -> ctrl  (ctrlrange ±2.0)
  double left_wheel;
} rm_msgs__msg__WheelLegCmd;

// Struct for a sequence of rm_msgs__msg__WheelLegCmd.
typedef struct rm_msgs__msg__WheelLegCmd__Sequence
{
  rm_msgs__msg__WheelLegCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_msgs__msg__WheelLegCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_MSGS__MSG__DETAIL__WHEEL_LEG_CMD__STRUCT_H_
