#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to rm_msgs__srv__SetGimbalAngle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetGimbalAngle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetGimbalAngle_Request {
  type RmwMsg = super::srv::rmw::SetGimbalAngle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        yaw: msg.yaw,
        pitch: msg.pitch,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      yaw: msg.yaw,
      pitch: msg.pitch,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      yaw: msg.yaw,
      pitch: msg.pitch,
    }
  }
}


// Corresponds to rm_msgs__srv__SetGimbalAngle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGimbalAngle_Response {
    /// 是否成功
    pub success: bool,

    /// 附加信息
    pub message: std::string::String,

}



impl Default for SetGimbalAngle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetGimbalAngle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetGimbalAngle_Response {
  type RmwMsg = super::srv::rmw::SetGimbalAngle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
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


