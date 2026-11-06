// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_msgs:msg/GimbalTarget.idl
// generated code does not contain a copyright notice

#include "rm_msgs/msg/detail/gimbal_target__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_type_hash_t *
rm_msgs__msg__GimbalTarget__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb2, 0x49, 0x43, 0xd4, 0x85, 0xb7, 0x89, 0xcb,
      0x40, 0x37, 0x43, 0x58, 0x8f, 0x5a, 0x65, 0xea,
      0xd3, 0x41, 0xd2, 0x4d, 0x67, 0xfd, 0x95, 0xad,
      0x86, 0x82, 0xe4, 0xfa, 0x48, 0x5f, 0xf0, 0xc6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rm_msgs__msg__GimbalTarget__TYPE_NAME[] = "rm_msgs/msg/GimbalTarget";

// Define type names, field names, and default values
static char rm_msgs__msg__GimbalTarget__FIELD_NAME__yaw[] = "yaw";
static char rm_msgs__msg__GimbalTarget__FIELD_NAME__pitch[] = "pitch";

static rosidl_runtime_c__type_description__Field rm_msgs__msg__GimbalTarget__FIELDS[] = {
  {
    {rm_msgs__msg__GimbalTarget__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_msgs__msg__GimbalTarget__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rm_msgs__msg__GimbalTarget__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_msgs__msg__GimbalTarget__TYPE_NAME, 24, 24},
      {rm_msgs__msg__GimbalTarget__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe4\\xba\\x91\\xe5\\x8f\\xb0\\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe8\\xa7\\x92\\xe5\\xba\\xa6\n"
  "float64 yaw      # \\xe7\\x9b\\xae\\xe6\\xa0\\x87 yaw \\xe8\\xa7\\x92 (rad)\n"
  "float64 pitch    # \\xe7\\x9b\\xae\\xe6\\xa0\\x87 pitch \\xe8\\xa7\\x92 (rad)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_msgs__msg__GimbalTarget__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_msgs__msg__GimbalTarget__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 79, 79},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_msgs__msg__GimbalTarget__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_msgs__msg__GimbalTarget__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
