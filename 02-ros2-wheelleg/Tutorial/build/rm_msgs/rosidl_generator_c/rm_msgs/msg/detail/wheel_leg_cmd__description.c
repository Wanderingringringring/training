// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_msgs:msg/WheelLegCmd.idl
// generated code does not contain a copyright notice

#include "rm_msgs/msg/detail/wheel_leg_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_type_hash_t *
rm_msgs__msg__WheelLegCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe5, 0x5c, 0xb5, 0x5d, 0xe3, 0x7f, 0xd9, 0x6d,
      0xe4, 0x0a, 0xba, 0x29, 0xc8, 0x31, 0x86, 0x34,
      0x68, 0x9c, 0x19, 0x57, 0xa8, 0x01, 0x77, 0x62,
      0x5f, 0x91, 0x16, 0x22, 0xea, 0xc2, 0x63, 0x53,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rm_msgs__msg__WheelLegCmd__TYPE_NAME[] = "rm_msgs/msg/WheelLegCmd";

// Define type names, field names, and default values
static char rm_msgs__msg__WheelLegCmd__FIELD_NAME__right_phi1[] = "right_phi1";
static char rm_msgs__msg__WheelLegCmd__FIELD_NAME__right_phi4[] = "right_phi4";
static char rm_msgs__msg__WheelLegCmd__FIELD_NAME__left_phi1[] = "left_phi1";
static char rm_msgs__msg__WheelLegCmd__FIELD_NAME__left_phi4[] = "left_phi4";
static char rm_msgs__msg__WheelLegCmd__FIELD_NAME__right_wheel[] = "right_wheel";
static char rm_msgs__msg__WheelLegCmd__FIELD_NAME__left_wheel[] = "left_wheel";

static rosidl_runtime_c__type_description__Field rm_msgs__msg__WheelLegCmd__FIELDS[] = {
  {
    {rm_msgs__msg__WheelLegCmd__FIELD_NAME__right_phi1, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_msgs__msg__WheelLegCmd__FIELD_NAME__right_phi4, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_msgs__msg__WheelLegCmd__FIELD_NAME__left_phi1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_msgs__msg__WheelLegCmd__FIELD_NAME__left_phi4, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_msgs__msg__WheelLegCmd__FIELD_NAME__right_wheel, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_msgs__msg__WheelLegCmd__FIELD_NAME__left_wheel, 10, 10},
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
rm_msgs__msg__WheelLegCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_msgs__msg__WheelLegCmd__TYPE_NAME, 23, 23},
      {rm_msgs__msg__WheelLegCmd__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe8\\xbd\\xae\\xe8\\x85\\xbf\\xe6\\x9c\\xba\\xe5\\x99\\xa8\\xe4\\xba\\xba 6 \\xe4\\xb8\\xaa\\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe5\\x99\\xa8\\xe7\\x9a\\x84\\xe5\\x8a\\x9b\\xe7\\x9f\\xa9\\xe6\\x8c\\x87\\xe4\\xbb\\xa4 (N\\xc2\\xb7m)\n"
  "#\n"
  "# \\xe5\\xad\\x97\\xe6\\xae\\xb5\\xe9\\xa1\\xba\\xe5\\xba\\x8f\\xe4\\xb8\\x8e mjcf/robot.xml \\xe4\\xb8\\xad <actuator> \\xe7\\x9a\\x84\\xe5\\xae\\x9a\\xe4\\xb9\\x89\\xe9\\xa1\\xba\\xe5\\xba\\x8f\\xe4\\xb8\\x80\\xe8\\x87\\xb4\\xef\\xbc\\x8c\n"
  "# \\xe5\\xaf\\xb9\\xe5\\xba\\x94 MuJoCo \\xe7\\x9a\\x84 data.ctrl[0] ~ data.ctrl[5]\\xe3\\x80\\x82\n"
  "#\n"
  "# \\xe6\\xb3\\xa8\\xe6\\x84\\x8f\\xef\\xbc\\x9a\\xe8\\xbf\\x99\\xe6\\x98\\xaf\"\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\\xe5\\x99\\xa8 \\xe2\\x86\\x92 \\xe4\\xbb\\xbf\\xe7\\x9c\\x9f/\\xe7\\xa1\\xac\\xe4\\xbb\\xb6\"\\xe7\\x9a\\x84\\xe6\\x8c\\x87\\xe4\\xbb\\xa4\\xe6\\xb6\\x88\\xe6\\x81\\xaf\\xef\\xbc\\x8c\\xe4\\xb8\\x8d\\xe6\\x98\\xaf\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe6\\xb6\\x88\\xe6\\x81\\xaf\\xe3\\x80\\x82\n"
  "\n"
  "float64 right_phi1    # \\xe5\\x8f\\xb3\\xe8\\x85\\xbf\\xe8\\xbf\\x91\\xe7\\xab\\xaf\\xe5\\x85\\xb3\\xe8\\x8a\\x82 joint_right_phi1  -> ctrl[0]  (ctrlrange \\xc2\\xb16.0)\n"
  "float64 right_phi4    # \\xe5\\x8f\\xb3\\xe8\\x85\\xbf\\xe8\\xbf\\x9c\\xe7\\xab\\xaf\\xe5\\x85\\xb3\\xe8\\x8a\\x82 joint_right_phi4  -> ctrl[1]  (ctrlrange \\xc2\\xb16.0)\n"
  "float64 left_phi1     # \\xe5\\xb7\\xa6\\xe8\\x85\\xbf\\xe8\\xbf\\x91\\xe7\\xab\\xaf\\xe5\\x85\\xb3\\xe8\\x8a\\x82 joint_left_phi1   -> ctrl[2]  (ctrlrange \\xc2\\xb16.0)\n"
  "float64 left_phi4     # \\xe5\\xb7\\xa6\\xe8\\x85\\xbf\\xe8\\xbf\\x9c\\xe7\\xab\\xaf\\xe5\\x85\\xb3\\xe8\\x8a\\x82 joint_left_phi4   -> ctrl[3]  (ctrlrange \\xc2\\xb16.0)\n"
  "float64 right_wheel   # \\xe5\\x8f\\xb3\\xe8\\xbd\\xae        right_wheel_torque -> ctrl[4]  (ctrlrange \\xc2\\xb12.0)\n"
  "float64 left_wheel    # \\xe5\\xb7\\xa6\\xe8\\xbd\\xae        left_wheel_torque  -> ctrl[5]  (ctrlrange \\xc2\\xb12.0)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_msgs__msg__WheelLegCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_msgs__msg__WheelLegCmd__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 629, 629},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_msgs__msg__WheelLegCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_msgs__msg__WheelLegCmd__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
