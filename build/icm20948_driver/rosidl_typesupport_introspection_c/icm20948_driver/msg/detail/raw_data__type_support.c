// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from icm20948_driver:msg/RawData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "icm20948_driver/msg/detail/raw_data__rosidl_typesupport_introspection_c.h"
#include "icm20948_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "icm20948_driver/msg/detail/raw_data__functions.h"
#include "icm20948_driver/msg/detail/raw_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `accel`
// Member `gyro`
// Member `mag`
#include "geometry_msgs/msg/vector3.h"
// Member `accel`
// Member `gyro`
// Member `mag`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void icm20948_driver__msg__RawData__rosidl_typesupport_introspection_c__RawData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  icm20948_driver__msg__RawData__init(message_memory);
}

void icm20948_driver__msg__RawData__rosidl_typesupport_introspection_c__RawData_fini_function(void * message_memory)
{
  icm20948_driver__msg__RawData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember icm20948_driver__msg__RawData__rosidl_typesupport_introspection_c__RawData_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icm20948_driver__msg__RawData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icm20948_driver__msg__RawData, accel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icm20948_driver__msg__RawData, gyro),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icm20948_driver__msg__RawData, mag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icm20948_driver__msg__RawData, temp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers icm20948_driver__msg__RawData__rosidl_typesupport_introspection_c__RawData_message_members = {
  "icm20948_driver__msg",  // message namespace
  "RawData",  // message name
  5,  // number of fields
  sizeof(icm20948_driver__msg__RawData),
  icm20948_driver__msg__RawData__rosidl_typesupport_introspection_c__RawData_message_member_array,  // message members
  icm20948_driver__msg__RawData__rosidl_typesupport_introspection_c__RawData_init_function,  // function to initialize message memory (memory has to be allocated)
  icm20948_driver__msg__RawData__rosidl_typesupport_introspection_c__RawData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t icm20948_driver__msg__RawData__rosidl_typesupport_introspection_c__RawData_message_type_support_handle = {
  0,
  &icm20948_driver__msg__RawData__rosidl_typesupport_introspection_c__RawData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_icm20948_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, icm20948_driver, msg, RawData)() {
  icm20948_driver__msg__RawData__rosidl_typesupport_introspection_c__RawData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  icm20948_driver__msg__RawData__rosidl_typesupport_introspection_c__RawData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  icm20948_driver__msg__RawData__rosidl_typesupport_introspection_c__RawData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  icm20948_driver__msg__RawData__rosidl_typesupport_introspection_c__RawData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!icm20948_driver__msg__RawData__rosidl_typesupport_introspection_c__RawData_message_type_support_handle.typesupport_identifier) {
    icm20948_driver__msg__RawData__rosidl_typesupport_introspection_c__RawData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &icm20948_driver__msg__RawData__rosidl_typesupport_introspection_c__RawData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
