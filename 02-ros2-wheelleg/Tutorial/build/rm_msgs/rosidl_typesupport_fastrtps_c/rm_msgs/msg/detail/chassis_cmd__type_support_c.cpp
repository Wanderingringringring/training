// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rm_msgs:msg/ChassisCmd.idl
// generated code does not contain a copyright notice
#include "rm_msgs/msg/detail/chassis_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_msgs/msg/detail/chassis_cmd__struct.h"
#include "rm_msgs/msg/detail/chassis_cmd__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ChassisCmd__ros_msg_type = rm_msgs__msg__ChassisCmd;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_msgs
bool cdr_serialize_rm_msgs__msg__ChassisCmd(
  const rm_msgs__msg__ChassisCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: vx
  {
    cdr << ros_message->vx;
  }

  // Field name: vy
  {
    cdr << ros_message->vy;
  }

  // Field name: wz
  {
    cdr << ros_message->wz;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_msgs
bool cdr_deserialize_rm_msgs__msg__ChassisCmd(
  eprosima::fastcdr::Cdr & cdr,
  rm_msgs__msg__ChassisCmd * ros_message)
{
  // Field name: vx
  {
    cdr >> ros_message->vx;
  }

  // Field name: vy
  {
    cdr >> ros_message->vy;
  }

  // Field name: wz
  {
    cdr >> ros_message->wz;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_msgs
size_t get_serialized_size_rm_msgs__msg__ChassisCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChassisCmd__ros_msg_type * ros_message = static_cast<const _ChassisCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: vx
  {
    size_t item_size = sizeof(ros_message->vx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vy
  {
    size_t item_size = sizeof(ros_message->vy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wz
  {
    size_t item_size = sizeof(ros_message->wz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_msgs
size_t max_serialized_size_rm_msgs__msg__ChassisCmd(
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

  // Field name: vx
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: wz
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
    using DataType = rm_msgs__msg__ChassisCmd;
    is_plain =
      (
      offsetof(DataType, wz) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_msgs
bool cdr_serialize_key_rm_msgs__msg__ChassisCmd(
  const rm_msgs__msg__ChassisCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: vx
  {
    cdr << ros_message->vx;
  }

  // Field name: vy
  {
    cdr << ros_message->vy;
  }

  // Field name: wz
  {
    cdr << ros_message->wz;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_msgs
size_t get_serialized_size_key_rm_msgs__msg__ChassisCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChassisCmd__ros_msg_type * ros_message = static_cast<const _ChassisCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: vx
  {
    size_t item_size = sizeof(ros_message->vx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vy
  {
    size_t item_size = sizeof(ros_message->vy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wz
  {
    size_t item_size = sizeof(ros_message->wz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_msgs
size_t max_serialized_size_key_rm_msgs__msg__ChassisCmd(
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
  // Field name: vx
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: wz
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
    using DataType = rm_msgs__msg__ChassisCmd;
    is_plain =
      (
      offsetof(DataType, wz) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ChassisCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rm_msgs__msg__ChassisCmd * ros_message = static_cast<const rm_msgs__msg__ChassisCmd *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rm_msgs__msg__ChassisCmd(ros_message, cdr);
}

static bool _ChassisCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rm_msgs__msg__ChassisCmd * ros_message = static_cast<rm_msgs__msg__ChassisCmd *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rm_msgs__msg__ChassisCmd(cdr, ros_message);
}

static uint32_t _ChassisCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rm_msgs__msg__ChassisCmd(
      untyped_ros_message, 0));
}

static size_t _ChassisCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rm_msgs__msg__ChassisCmd(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ChassisCmd = {
  "rm_msgs::msg",
  "ChassisCmd",
  _ChassisCmd__cdr_serialize,
  _ChassisCmd__cdr_deserialize,
  _ChassisCmd__get_serialized_size,
  _ChassisCmd__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ChassisCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChassisCmd,
  get_message_typesupport_handle_function,
  &rm_msgs__msg__ChassisCmd__get_type_hash,
  &rm_msgs__msg__ChassisCmd__get_type_description,
  &rm_msgs__msg__ChassisCmd__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_msgs, msg, ChassisCmd)() {
  return &_ChassisCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
