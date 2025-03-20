// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from voiture2a_motors_driver:msg/MotorsState.idl
// generated code does not contain a copyright notice

#include "voiture2a_motors_driver/msg/detail/motors_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_voiture2a_motors_driver
const rosidl_type_hash_t *
voiture2a_motors_driver__msg__MotorsState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x30, 0x03, 0xa8, 0xd3, 0x4b, 0x86, 0xbf, 0xbf,
      0x87, 0xbd, 0x8c, 0x22, 0x14, 0x74, 0xcf, 0xe6,
      0x75, 0xd1, 0x5f, 0xc9, 0xa0, 0x8f, 0xc0, 0x9a,
      0x0e, 0xb6, 0xa6, 0xc3, 0xc3, 0xa5, 0xb2, 0x2f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char voiture2a_motors_driver__msg__MotorsState__TYPE_NAME[] = "voiture2a_motors_driver/msg/MotorsState";

// Define type names, field names, and default values
static char voiture2a_motors_driver__msg__MotorsState__FIELD_NAME__pwm_value[] = "pwm_value";
static char voiture2a_motors_driver__msg__MotorsState__FIELD_NAME__channels[] = "channels";
static char voiture2a_motors_driver__msg__MotorsState__FIELD_NAME__failsafe[] = "failsafe";
static char voiture2a_motors_driver__msg__MotorsState__FIELD_NAME__lost[] = "lost";
static char voiture2a_motors_driver__msg__MotorsState__FIELD_NAME__battery[] = "battery";

static rosidl_runtime_c__type_description__Field voiture2a_motors_driver__msg__MotorsState__FIELDS[] = {
  {
    {voiture2a_motors_driver__msg__MotorsState__FIELD_NAME__pwm_value, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voiture2a_motors_driver__msg__MotorsState__FIELD_NAME__channels, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_ARRAY,
      18,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voiture2a_motors_driver__msg__MotorsState__FIELD_NAME__failsafe, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voiture2a_motors_driver__msg__MotorsState__FIELD_NAME__lost, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voiture2a_motors_driver__msg__MotorsState__FIELD_NAME__battery, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
voiture2a_motors_driver__msg__MotorsState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {voiture2a_motors_driver__msg__MotorsState__TYPE_NAME, 39, 39},
      {voiture2a_motors_driver__msg__MotorsState__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Values of the PWM send to the servo and the engine (in 5*ms)\n"
  "uint16[2] pwm_value\n"
  "\n"
  "# Values of the Remote Control channel (SBUS protocol)\n"
  "uint16[18] channels\n"
  "\n"
  "# Additional values of the Remote Control\n"
  "uint8 failsafe\n"
  "uint8 lost\n"
  "\n"
  "# Battery voltage\n"
  "float32 battery";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
voiture2a_motors_driver__msg__MotorsState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {voiture2a_motors_driver__msg__MotorsState__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 262, 262},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
voiture2a_motors_driver__msg__MotorsState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *voiture2a_motors_driver__msg__MotorsState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
