// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from icm20948_driver:msg/DebugFusion.idl
// generated code does not contain a copyright notice

#include "icm20948_driver/msg/detail/debug_fusion__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_icm20948_driver
const rosidl_type_hash_t *
icm20948_driver__msg__DebugFusion__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0xc8, 0x73, 0x7e, 0xd8, 0x88, 0xec, 0x47,
      0x72, 0xad, 0x87, 0x73, 0xba, 0x10, 0x5e, 0xaf,
      0x51, 0xde, 0x7e, 0x6f, 0xd4, 0xd7, 0x8a, 0xbb,
      0x44, 0x96, 0x7f, 0x4d, 0x1a, 0x79, 0x8d, 0x0d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char icm20948_driver__msg__DebugFusion__TYPE_NAME[] = "icm20948_driver/msg/DebugFusion";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char icm20948_driver__msg__DebugFusion__FIELD_NAME__header[] = "header";
static char icm20948_driver__msg__DebugFusion__FIELD_NAME__acceleration_error[] = "acceleration_error";
static char icm20948_driver__msg__DebugFusion__FIELD_NAME__accelerometer_ignored[] = "accelerometer_ignored";
static char icm20948_driver__msg__DebugFusion__FIELD_NAME__acceleration_recovery_trigger[] = "acceleration_recovery_trigger";
static char icm20948_driver__msg__DebugFusion__FIELD_NAME__magnetic_error[] = "magnetic_error";
static char icm20948_driver__msg__DebugFusion__FIELD_NAME__magnetometer_ignored[] = "magnetometer_ignored";
static char icm20948_driver__msg__DebugFusion__FIELD_NAME__magnetic_recovery_trigger[] = "magnetic_recovery_trigger";
static char icm20948_driver__msg__DebugFusion__FIELD_NAME__initialising[] = "initialising";
static char icm20948_driver__msg__DebugFusion__FIELD_NAME__angular_rate_recovery[] = "angular_rate_recovery";
static char icm20948_driver__msg__DebugFusion__FIELD_NAME__acceleration_recovery[] = "acceleration_recovery";
static char icm20948_driver__msg__DebugFusion__FIELD_NAME__magnetic_recovery[] = "magnetic_recovery";
static char icm20948_driver__msg__DebugFusion__FIELD_NAME__magnetometer_limit_reached[] = "magnetometer_limit_reached";
static char icm20948_driver__msg__DebugFusion__FIELD_NAME__magnetometer_data_skipped[] = "magnetometer_data_skipped";
static char icm20948_driver__msg__DebugFusion__FIELD_NAME__magnetometer_data_is_ready[] = "magnetometer_data_is_ready";

static rosidl_runtime_c__type_description__Field icm20948_driver__msg__DebugFusion__FIELDS[] = {
  {
    {icm20948_driver__msg__DebugFusion__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {icm20948_driver__msg__DebugFusion__FIELD_NAME__acceleration_error, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {icm20948_driver__msg__DebugFusion__FIELD_NAME__accelerometer_ignored, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {icm20948_driver__msg__DebugFusion__FIELD_NAME__acceleration_recovery_trigger, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {icm20948_driver__msg__DebugFusion__FIELD_NAME__magnetic_error, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {icm20948_driver__msg__DebugFusion__FIELD_NAME__magnetometer_ignored, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {icm20948_driver__msg__DebugFusion__FIELD_NAME__magnetic_recovery_trigger, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {icm20948_driver__msg__DebugFusion__FIELD_NAME__initialising, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {icm20948_driver__msg__DebugFusion__FIELD_NAME__angular_rate_recovery, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {icm20948_driver__msg__DebugFusion__FIELD_NAME__acceleration_recovery, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {icm20948_driver__msg__DebugFusion__FIELD_NAME__magnetic_recovery, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {icm20948_driver__msg__DebugFusion__FIELD_NAME__magnetometer_limit_reached, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {icm20948_driver__msg__DebugFusion__FIELD_NAME__magnetometer_data_skipped, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {icm20948_driver__msg__DebugFusion__FIELD_NAME__magnetometer_data_is_ready, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription icm20948_driver__msg__DebugFusion__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
icm20948_driver__msg__DebugFusion__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {icm20948_driver__msg__DebugFusion__TYPE_NAME, 31, 31},
      {icm20948_driver__msg__DebugFusion__FIELDS, 14, 14},
    },
    {icm20948_driver__msg__DebugFusion__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "float32 acceleration_error\n"
  "bool accelerometer_ignored\n"
  "float32 acceleration_recovery_trigger\n"
  "float32 magnetic_error\n"
  "bool magnetometer_ignored\n"
  "float32 magnetic_recovery_trigger\n"
  "bool initialising\n"
  "bool angular_rate_recovery\n"
  "bool acceleration_recovery\n"
  "bool magnetic_recovery\n"
  "\n"
  "# Magnetometer\n"
  "bool magnetometer_limit_reached\n"
  "bool magnetometer_data_skipped\n"
  "bool magnetometer_data_is_ready";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
icm20948_driver__msg__DebugFusion__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {icm20948_driver__msg__DebugFusion__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 404, 404},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
icm20948_driver__msg__DebugFusion__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *icm20948_driver__msg__DebugFusion__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
