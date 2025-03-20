// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from voiture2a_motors_driver:msg/Engine.idl
// generated code does not contain a copyright notice

#include "voiture2a_motors_driver/msg/detail/engine__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_voiture2a_motors_driver
const rosidl_type_hash_t *
voiture2a_motors_driver__msg__Engine__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x67, 0xac, 0x56, 0x72, 0xee, 0xbc, 0xc7, 0x3f,
      0x78, 0x68, 0x7d, 0xec, 0x94, 0x2b, 0x77, 0xf1,
      0x36, 0x04, 0xb1, 0x41, 0xe9, 0x1d, 0xd0, 0xbb,
      0x60, 0xb3, 0xfa, 0xa6, 0x90, 0xe6, 0xe6, 0xbe,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char voiture2a_motors_driver__msg__Engine__TYPE_NAME[] = "voiture2a_motors_driver/msg/Engine";

// Define type names, field names, and default values
static char voiture2a_motors_driver__msg__Engine__FIELD_NAME__servo[] = "servo";
static char voiture2a_motors_driver__msg__Engine__FIELD_NAME__engine[] = "engine";

static rosidl_runtime_c__type_description__Field voiture2a_motors_driver__msg__Engine__FIELDS[] = {
  {
    {voiture2a_motors_driver__msg__Engine__FIELD_NAME__servo, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voiture2a_motors_driver__msg__Engine__FIELD_NAME__engine, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
voiture2a_motors_driver__msg__Engine__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {voiture2a_motors_driver__msg__Engine__TYPE_NAME, 34, 34},
      {voiture2a_motors_driver__msg__Engine__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 servo\n"
  "uint8 engine";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
voiture2a_motors_driver__msg__Engine__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {voiture2a_motors_driver__msg__Engine__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 25, 25},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
voiture2a_motors_driver__msg__Engine__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *voiture2a_motors_driver__msg__Engine__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
