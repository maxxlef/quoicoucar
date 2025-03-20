// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from voiture2a_motors_driver:msg/Engine.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "voiture2a_motors_driver/msg/detail/engine__functions.h"
#include "voiture2a_motors_driver/msg/detail/engine__struct.hpp"
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

void Engine_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) voiture2a_motors_driver::msg::Engine(_init);
}

void Engine_fini_function(void * message_memory)
{
  auto typed_message = static_cast<voiture2a_motors_driver::msg::Engine *>(message_memory);
  typed_message->~Engine();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Engine_message_member_array[2] = {
  {
    "servo",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voiture2a_motors_driver::msg::Engine, servo),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "engine",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voiture2a_motors_driver::msg::Engine, engine),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Engine_message_members = {
  "voiture2a_motors_driver::msg",  // message namespace
  "Engine",  // message name
  2,  // number of fields
  sizeof(voiture2a_motors_driver::msg::Engine),
  Engine_message_member_array,  // message members
  Engine_init_function,  // function to initialize message memory (memory has to be allocated)
  Engine_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Engine_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Engine_message_members,
  get_message_typesupport_handle_function,
  &voiture2a_motors_driver__msg__Engine__get_type_hash,
  &voiture2a_motors_driver__msg__Engine__get_type_description,
  &voiture2a_motors_driver__msg__Engine__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace voiture2a_motors_driver


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<voiture2a_motors_driver::msg::Engine>()
{
  return &::voiture2a_motors_driver::msg::rosidl_typesupport_introspection_cpp::Engine_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, voiture2a_motors_driver, msg, Engine)() {
  return &::voiture2a_motors_driver::msg::rosidl_typesupport_introspection_cpp::Engine_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
