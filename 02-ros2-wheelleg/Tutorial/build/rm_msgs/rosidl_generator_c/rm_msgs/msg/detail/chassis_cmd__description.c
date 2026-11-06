// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_msgs:msg/ChassisCmd.idl
// generated code does not contain a copyright notice

#include "rm_msgs/msg/detail/chassis_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_type_hash_t *
rm_msgs__msg__ChassisCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0x0a, 0xdb, 0x4b, 0x2b, 0xd5, 0x15, 0x04,
      0xa6, 0x07, 0xe9, 0xe8, 0xdc, 0x13, 0x7d, 0x1e,
      0xae, 0xf7, 0xf7, 0x65, 0x02, 0xc3, 0x42, 0x45,
      0x8e, 0x0d, 0xc4, 0x92, 0xa0, 0x85, 0xc9, 0xef,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rm_msgs__msg__ChassisCmd__TYPE_NAME[] = "rm_msgs/msg/ChassisCmd";

// Define type names, field names, and default values
static char rm_msgs__msg__ChassisCmd__FIELD_NAME__vx[] = "vx";
static char rm_msgs__msg__ChassisCmd__FIELD_NAME__vy[] = "vy";
static char rm_msgs__msg__ChassisCmd__FIELD_NAME__wz[] = "wz";

static rosidl_runtime_c__type_description__Field rm_msgs__msg__ChassisCmd__FIELDS[] = {
  {
    {rm_msgs__msg__ChassisCmd__FIELD_NAME__vx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_msgs__msg__ChassisCmd__FIELD_NAME__vy, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_msgs__msg__ChassisCmd__FIELD_NAME__wz, 2, 2},
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
rm_msgs__msg__ChassisCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_msgs__msg__ChassisCmd__TYPE_NAME, 22, 22},
      {rm_msgs__msg__ChassisCmd__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe9\\x80\\x9f\\xe5\\xba\\xa6\\xe6\\x8c\\x87\\xe4\\xbb\\xa4\\xef\\xbc\\x88\\xe5\\x85\\xa8\\xe5\\x90\\x91\\xe7\\xa7\\xbb\\xe5\\x8a\\xa8\\xef\\xbc\\x89\n"
  "float64 vx       # \\xe5\\x89\\x8d\\xe8\\xbf\\x9b\\xe6\\x96\\xb9\\xe5\\x90\\x91\\xe9\\x80\\x9f\\xe5\\xba\\xa6 (m/s)\n"
  "float64 vy       # \\xe6\\xa8\\xaa\\xe7\\xa7\\xbb\\xe6\\x96\\xb9\\xe5\\x90\\x91\\xe9\\x80\\x9f\\xe5\\xba\\xa6 (m/s)\n"
  "float64 wz       # \\xe8\\x87\\xaa\\xe8\\xbd\\xac\\xe8\\xa7\\x92\\xe9\\x80\\x9f\\xe5\\xba\\xa6 (rad/s)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_msgs__msg__ChassisCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_msgs__msg__ChassisCmd__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 112, 112},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_msgs__msg__ChassisCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_msgs__msg__ChassisCmd__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
