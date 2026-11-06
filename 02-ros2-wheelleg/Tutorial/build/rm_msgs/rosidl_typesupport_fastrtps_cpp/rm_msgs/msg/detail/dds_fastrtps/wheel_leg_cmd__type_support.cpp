// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rm_msgs:msg/WheelLegCmd.idl
// generated code does not contain a copyright notice
#include "rm_msgs/msg/detail/wheel_leg_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rm_msgs/msg/detail/wheel_leg_cmd__functions.h"
#include "rm_msgs/msg/detail/wheel_leg_cmd__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rm_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_msgs
cdr_serialize(
  const rm_msgs::msg::WheelLegCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: right_phi1
  cdr << ros_message.right_phi1;

  // Member: right_phi4
  cdr << ros_message.right_phi4;

  // Member: left_phi1
  cdr << ros_message.left_phi1;

  // Member: left_phi4
  cdr << ros_message.left_phi4;

  // Member: right_wheel
  cdr << ros_message.right_wheel;

  // Member: left_wheel
  cdr << ros_message.left_wheel;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rm_msgs::msg::WheelLegCmd & ros_message)
{
  // Member: right_phi1
  cdr >> ros_message.right_phi1;

  // Member: right_phi4
  cdr >> ros_message.right_phi4;

  // Member: left_phi1
  cdr >> ros_message.left_phi1;

  // Member: left_phi4
  cdr >> ros_message.left_phi4;

  // Member: right_wheel
  cdr >> ros_message.right_wheel;

  // Member: left_wheel
  cdr >> ros_message.left_wheel;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_msgs
get_serialized_size(
  const rm_msgs::msg::WheelLegCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: right_phi1
  {
    size_t item_size = sizeof(ros_message.right_phi1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: right_phi4
  {
    size_t item_size = sizeof(ros_message.right_phi4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: left_phi1
  {
    size_t item_size = sizeof(ros_message.left_phi1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: left_phi4
  {
    size_t item_size = sizeof(ros_message.left_phi4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: right_wheel
  {
    size_t item_size = sizeof(ros_message.right_wheel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: left_wheel
  {
    size_t item_size = sizeof(ros_message.left_wheel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_msgs
max_serialized_size_WheelLegCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: right_phi1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: right_phi4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: left_phi1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: left_phi4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: right_wheel
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: left_wheel
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rm_msgs::msg::WheelLegCmd;
    is_plain =
      (
      offsetof(DataType, left_wheel) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_msgs
cdr_serialize_key(
  const rm_msgs::msg::WheelLegCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: right_phi1
  cdr << ros_message.right_phi1;

  // Member: right_phi4
  cdr << ros_message.right_phi4;

  // Member: left_phi1
  cdr << ros_message.left_phi1;

  // Member: left_phi4
  cdr << ros_message.left_phi4;

  // Member: right_wheel
  cdr << ros_message.right_wheel;

  // Member: left_wheel
  cdr << ros_message.left_wheel;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_msgs
get_serialized_size_key(
  const rm_msgs::msg::WheelLegCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: right_phi1
  {
    size_t item_size = sizeof(ros_message.right_phi1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: right_phi4
  {
    size_t item_size = sizeof(ros_message.right_phi4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: left_phi1
  {
    size_t item_size = sizeof(ros_message.left_phi1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: left_phi4
  {
    size_t item_size = sizeof(ros_message.left_phi4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: right_wheel
  {
    size_t item_size = sizeof(ros_message.right_wheel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: left_wheel
  {
    size_t item_size = sizeof(ros_message.left_wheel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_msgs
max_serialized_size_key_WheelLegCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: right_phi1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_phi4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_phi1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_phi4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_wheel
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_wheel
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rm_msgs::msg::WheelLegCmd;
    is_plain =
      (
      offsetof(DataType, left_wheel) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _WheelLegCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rm_msgs::msg::WheelLegCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WheelLegCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rm_msgs::msg::WheelLegCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WheelLegCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rm_msgs::msg::WheelLegCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WheelLegCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_WheelLegCmd(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _WheelLegCmd__callbacks = {
  "rm_msgs::msg",
  "WheelLegCmd",
  _WheelLegCmd__cdr_serialize,
  _WheelLegCmd__cdr_deserialize,
  _WheelLegCmd__get_serialized_size,
  _WheelLegCmd__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _WheelLegCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WheelLegCmd__callbacks,
  get_message_typesupport_handle_function,
  &rm_msgs__msg__WheelLegCmd__get_type_hash,
  &rm_msgs__msg__WheelLegCmd__get_type_description,
  &rm_msgs__msg__WheelLegCmd__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rm_msgs::msg::WheelLegCmd>()
{
  return &rm_msgs::msg::typesupport_fastrtps_cpp::_WheelLegCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rm_msgs, msg, WheelLegCmd)() {
  return &rm_msgs::msg::typesupport_fastrtps_cpp::_WheelLegCmd__handle;
}

#ifdef __cplusplus
}
#endif
