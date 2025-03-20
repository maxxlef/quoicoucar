// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from voiture2a_motors_driver:msg/MotorsState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "voiture2a_motors_driver/msg/detail/motors_state__rosidl_typesupport_introspection_c.h"
#include "voiture2a_motors_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "voiture2a_motors_driver/msg/detail/motors_state__functions.h"
#include "voiture2a_motors_driver/msg/detail/motors_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__MotorsState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  voiture2a_motors_driver__msg__MotorsState__init(message_memory);
}

void voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__MotorsState_fini_function(void * message_memory)
{
  voiture2a_motors_driver__msg__MotorsState__fini(message_memory);
}

size_t voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__size_function__MotorsState__pwm_value(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__get_const_function__MotorsState__pwm_value(
  const void * untyped_member, size_t index)
{
  const uint16_t * member =
    (const uint16_t *)(untyped_member);
  return &member[index];
}

void * voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__get_function__MotorsState__pwm_value(
  void * untyped_member, size_t index)
{
  uint16_t * member =
    (uint16_t *)(untyped_member);
  return &member[index];
}

void voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__fetch_function__MotorsState__pwm_value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__get_const_function__MotorsState__pwm_value(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__assign_function__MotorsState__pwm_value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__get_function__MotorsState__pwm_value(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

size_t voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__size_function__MotorsState__channels(
  const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__get_const_function__MotorsState__channels(
  const void * untyped_member, size_t index)
{
  const uint16_t * member =
    (const uint16_t *)(untyped_member);
  return &member[index];
}

void * voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__get_function__MotorsState__channels(
  void * untyped_member, size_t index)
{
  uint16_t * member =
    (uint16_t *)(untyped_member);
  return &member[index];
}

void voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__fetch_function__MotorsState__channels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__get_const_function__MotorsState__channels(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__assign_function__MotorsState__channels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__get_function__MotorsState__channels(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__MotorsState_message_member_array[5] = {
  {
    "pwm_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(voiture2a_motors_driver__msg__MotorsState, pwm_value),  // bytes offset in struct
    NULL,  // default value
    voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__size_function__MotorsState__pwm_value,  // size() function pointer
    voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__get_const_function__MotorsState__pwm_value,  // get_const(index) function pointer
    voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__get_function__MotorsState__pwm_value,  // get(index) function pointer
    voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__fetch_function__MotorsState__pwm_value,  // fetch(index, &value) function pointer
    voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__assign_function__MotorsState__pwm_value,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "channels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(voiture2a_motors_driver__msg__MotorsState, channels),  // bytes offset in struct
    NULL,  // default value
    voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__size_function__MotorsState__channels,  // size() function pointer
    voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__get_const_function__MotorsState__channels,  // get_const(index) function pointer
    voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__get_function__MotorsState__channels,  // get(index) function pointer
    voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__fetch_function__MotorsState__channels,  // fetch(index, &value) function pointer
    voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__assign_function__MotorsState__channels,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "failsafe",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voiture2a_motors_driver__msg__MotorsState, failsafe),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voiture2a_motors_driver__msg__MotorsState, lost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voiture2a_motors_driver__msg__MotorsState, battery),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__MotorsState_message_members = {
  "voiture2a_motors_driver__msg",  // message namespace
  "MotorsState",  // message name
  5,  // number of fields
  sizeof(voiture2a_motors_driver__msg__MotorsState),
  voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__MotorsState_message_member_array,  // message members
  voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__MotorsState_init_function,  // function to initialize message memory (memory has to be allocated)
  voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__MotorsState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__MotorsState_message_type_support_handle = {
  0,
  &voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__MotorsState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_voiture2a_motors_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, voiture2a_motors_driver, msg, MotorsState)() {
  if (!voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__MotorsState_message_type_support_handle.typesupport_identifier) {
    voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__MotorsState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &voiture2a_motors_driver__msg__MotorsState__rosidl_typesupport_introspection_c__MotorsState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
