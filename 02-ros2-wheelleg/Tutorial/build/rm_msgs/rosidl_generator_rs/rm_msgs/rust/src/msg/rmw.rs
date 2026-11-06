#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_msgs__msg__GimbalTarget() -> *const std::ffi::c_void;
}

#[link(name = "rm_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_msgs__msg__GimbalTarget__init(msg: *mut GimbalTarget) -> bool;
    fn rm_msgs__msg__GimbalTarget__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GimbalTarget>, size: usize) -> bool;
    fn rm_msgs__msg__GimbalTarget__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GimbalTarget>);
    fn rm_msgs__msg__GimbalTarget__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GimbalTarget>, out_seq: *mut rosidl_runtime_rs::Sequence<GimbalTarget>) -> bool;
}

// Corresponds to rm_msgs__msg__GimbalTarget
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 云台目标角度

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GimbalTarget {
    /// 目标 yaw 角 (rad)
    pub yaw: f64,

    /// 目标 pitch 角 (rad)
    pub pitch: f64,

}



impl Default for GimbalTarget {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_msgs__msg__GimbalTarget__init(&mut msg as *mut _) {
        panic!("Call to rm_msgs__msg__GimbalTarget__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GimbalTarget {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_msgs__msg__GimbalTarget__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_msgs__msg__GimbalTarget__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_msgs__msg__GimbalTarget__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GimbalTarget {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GimbalTarget where Self: Sized {
  const TYPE_NAME: &'static str = "rm_msgs/msg/GimbalTarget";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_msgs__msg__GimbalTarget() }
  }
}


#[link(name = "rm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_msgs__msg__ChassisCmd() -> *const std::ffi::c_void;
}

#[link(name = "rm_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_msgs__msg__ChassisCmd__init(msg: *mut ChassisCmd) -> bool;
    fn rm_msgs__msg__ChassisCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChassisCmd>, size: usize) -> bool;
    fn rm_msgs__msg__ChassisCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChassisCmd>);
    fn rm_msgs__msg__ChassisCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChassisCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<ChassisCmd>) -> bool;
}

// Corresponds to rm_msgs__msg__ChassisCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 底盘速度指令（全向移动）

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChassisCmd {
    /// 前进方向速度 (m/s)
    pub vx: f64,

    /// 横移方向速度 (m/s)
    pub vy: f64,

    /// 自转角速度 (rad/s)
    pub wz: f64,

}



impl Default for ChassisCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_msgs__msg__ChassisCmd__init(&mut msg as *mut _) {
        panic!("Call to rm_msgs__msg__ChassisCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChassisCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_msgs__msg__ChassisCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_msgs__msg__ChassisCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_msgs__msg__ChassisCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChassisCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChassisCmd where Self: Sized {
  const TYPE_NAME: &'static str = "rm_msgs/msg/ChassisCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_msgs__msg__ChassisCmd() }
  }
}


#[link(name = "rm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_msgs__msg__WheelLegCmd() -> *const std::ffi::c_void;
}

#[link(name = "rm_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_msgs__msg__WheelLegCmd__init(msg: *mut WheelLegCmd) -> bool;
    fn rm_msgs__msg__WheelLegCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WheelLegCmd>, size: usize) -> bool;
    fn rm_msgs__msg__WheelLegCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WheelLegCmd>);
    fn rm_msgs__msg__WheelLegCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WheelLegCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<WheelLegCmd>) -> bool;
}

// Corresponds to rm_msgs__msg__WheelLegCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 轮腿机器人 6 个执行器的力矩指令 (N·m)
///
/// 字段顺序与 mjcf/robot.xml 中 <actuator> 的定义顺序一致，
/// 对应 MuJoCo 的 data.ctrl[0] ~ data.ctrl[5]。
///
/// 注意：这是"控制器 → 仿真/硬件"的指令消息，不是状态消息。

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WheelLegCmd {
    /// 右腿近端关节 joint_right_phi1  -> ctrl  (ctrlrange ±6.0)
    pub right_phi1: f64,

    /// 右腿远端关节 joint_right_phi4  -> ctrl  (ctrlrange ±6.0)
    pub right_phi4: f64,

    /// 左腿近端关节 joint_left_phi1   -> ctrl  (ctrlrange ±6.0)
    pub left_phi1: f64,

    /// 左腿远端关节 joint_left_phi4   -> ctrl  (ctrlrange ±6.0)
    pub left_phi4: f64,

    /// 右轮        right_wheel_torque -> ctrl  (ctrlrange ±2.0)
    pub right_wheel: f64,

    /// 左轮        left_wheel_torque  -> ctrl  (ctrlrange ±2.0)
    pub left_wheel: f64,

}



impl Default for WheelLegCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_msgs__msg__WheelLegCmd__init(&mut msg as *mut _) {
        panic!("Call to rm_msgs__msg__WheelLegCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WheelLegCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_msgs__msg__WheelLegCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_msgs__msg__WheelLegCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_msgs__msg__WheelLegCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WheelLegCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WheelLegCmd where Self: Sized {
  const TYPE_NAME: &'static str = "rm_msgs/msg/WheelLegCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_msgs__msg__WheelLegCmd() }
  }
}


