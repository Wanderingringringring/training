#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "rm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_msgs__srv__SetGimbalAngle_Request() -> *const std::ffi::c_void;
}

#[link(name = "rm_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_msgs__srv__SetGimbalAngle_Request__init(msg: *mut SetGimbalAngle_Request) -> bool;
    fn rm_msgs__srv__SetGimbalAngle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetGimbalAngle_Request>, size: usize) -> bool;
    fn rm_msgs__srv__SetGimbalAngle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetGimbalAngle_Request>);
    fn rm_msgs__srv__SetGimbalAngle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetGimbalAngle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetGimbalAngle_Request>) -> bool;
}

// Corresponds to rm_msgs__srv__SetGimbalAngle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGimbalAngle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch: f64,

}



impl Default for SetGimbalAngle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_msgs__srv__SetGimbalAngle_Request__init(&mut msg as *mut _) {
        panic!("Call to rm_msgs__srv__SetGimbalAngle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetGimbalAngle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_msgs__srv__SetGimbalAngle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_msgs__srv__SetGimbalAngle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_msgs__srv__SetGimbalAngle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetGimbalAngle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetGimbalAngle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rm_msgs/srv/SetGimbalAngle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_msgs__srv__SetGimbalAngle_Request() }
  }
}


#[link(name = "rm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_msgs__srv__SetGimbalAngle_Response() -> *const std::ffi::c_void;
}

#[link(name = "rm_msgs__rosidl_generator_c")]
extern "C" {
    fn rm_msgs__srv__SetGimbalAngle_Response__init(msg: *mut SetGimbalAngle_Response) -> bool;
    fn rm_msgs__srv__SetGimbalAngle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetGimbalAngle_Response>, size: usize) -> bool;
    fn rm_msgs__srv__SetGimbalAngle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetGimbalAngle_Response>);
    fn rm_msgs__srv__SetGimbalAngle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetGimbalAngle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetGimbalAngle_Response>) -> bool;
}

// Corresponds to rm_msgs__srv__SetGimbalAngle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGimbalAngle_Response {
    /// 是否成功
    pub success: bool,

    /// 附加信息
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetGimbalAngle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_msgs__srv__SetGimbalAngle_Response__init(&mut msg as *mut _) {
        panic!("Call to rm_msgs__srv__SetGimbalAngle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetGimbalAngle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_msgs__srv__SetGimbalAngle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_msgs__srv__SetGimbalAngle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_msgs__srv__SetGimbalAngle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetGimbalAngle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetGimbalAngle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rm_msgs/srv/SetGimbalAngle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_msgs__srv__SetGimbalAngle_Response() }
  }
}






#[link(name = "rm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rm_msgs__srv__SetGimbalAngle() -> *const std::ffi::c_void;
}

// Corresponds to rm_msgs__srv__SetGimbalAngle
#[allow(missing_docs, non_camel_case_types)]
pub struct SetGimbalAngle;

impl rosidl_runtime_rs::Service for SetGimbalAngle {
    type Request = SetGimbalAngle_Request;
    type Response = SetGimbalAngle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rm_msgs__srv__SetGimbalAngle() }
    }
}


