// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from voiture2a_motors_driver:msg/MotorsState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "voiture2a_motors_driver/msg/detail/motors_state__functions.h"
#include "voiture2a_motors_driver/msg/detail/motors_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace voiture2a_motors_driver
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorsState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) voiture2a_motors_driver::msg::MotorsState(_init);
}

void MotorsState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<voiture2a_motors_driver::msg::MotorsState *>(message_memory);
  typed_message->~MotorsState();
}

size_t size_function__MotorsState__pwm_value(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__MotorsState__pwm_value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsState__pwm_value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorsState__pwm_value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__MotorsState__pwm_value(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__MotorsState__pwm_value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__MotorsState__pwm_value(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

size_t size_function__MotorsState__channels(const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * get_const_function__MotorsState__channels(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 18> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsState__channels(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 18> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorsState__channels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__MotorsState__channels(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__MotorsState__channels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__MotorsState__channels(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorsState_message_member_array[5] = {
  {
    "pwm_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(voiture2a_motors_driver::msg::MotorsState, pwm_value),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsState__pwm_value,  // size() function pointer
    get_const_function__MotorsState__pwm_value,  // get_const(index) function pointer
    get_function__MotorsState__pwm_value,  // get(index) function pointer
    fetch_function__MotorsState__pwm_value,  // fetch(index, &value) function pointer
    assign_function__MotorsState__pwm_value,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "channels",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(voiture2a_motors_driver::msg::MotorsState, channels),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsState__channels,  // size() function pointer
    get_const_function__MotorsState__channels,  // get_const(index) function pointer
    get_function__MotorsState__channels,  // get(index) function pointer
    fetch_function__MotorsState__channels,  // fetch(index, &value) function pointer
    assign_function__MotorsState__channels,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "failsafe",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voiture2a_motors_driver::msg::MotorsState, failsafe),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lost",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voiture2a_motors_driver::msg::MotorsState, lost),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "battery",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voiture2a_motors_driver::msg::MotorsState, battery),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorsState_message_members = {
  "voiture2a_motors_driver::msg",  // message namespace
  "MotorsState",  // message name
  5,  // number of fields
  sizeof(voiture2a_motors_driver::msg::MotorsState),
  MotorsState_message_member_array,  // message members
  MotorsState_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorsState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorsState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorsState_message_members,
  get_message_typesupport_handle_function,
  &voiture2a_motors_driver__msg__MotorsState__get_type_hash,
  &voiture2a_motors_driver__msg__MotorsState__get_type_description,
  &voiture2a_motors_driver__msg__MotorsState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace voiture2a_motors_driver


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<voiture2a_motors_driver::msg::MotorsState>()
{
  return &::voiture2a_motors_driver::msg::rosidl_typesupport_introspection_cpp::MotorsState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, voiture2a_motors_driver, msg, MotorsState)() {
  return &::voiture2a_motors_driver::msg::rosidl_typesupport_introspection_cpp::MotorsState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
