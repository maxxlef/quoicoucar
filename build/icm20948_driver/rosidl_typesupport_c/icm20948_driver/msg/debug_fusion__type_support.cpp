// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from icm20948_driver:msg/DebugFusion.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "icm20948_driver/msg/detail/debug_fusion__struct.h"
#include "icm20948_driver/msg/detail/debug_fusion__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace icm20948_driver
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _DebugFusion_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DebugFusion_type_support_ids_t;

static const _DebugFusion_type_support_ids_t _DebugFusion_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DebugFusion_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DebugFusion_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DebugFusion_type_support_symbol_names_t _DebugFusion_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, icm20948_driver, msg, DebugFusion)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, icm20948_driver, msg, DebugFusion)),
  }
};

typedef struct _DebugFusion_type_support_data_t
{
  void * data[2];
} _DebugFusion_type_support_data_t;

static _DebugFusion_type_support_data_t _DebugFusion_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DebugFusion_message_typesupport_map = {
  2,
  "icm20948_driver",
  &_DebugFusion_message_typesupport_ids.typesupport_identifier[0],
  &_DebugFusion_message_typesupport_symbol_names.symbol_name[0],
  &_DebugFusion_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DebugFusion_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DebugFusion_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace icm20948_driver

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, icm20948_driver, msg, DebugFusion)() {
  return &::icm20948_driver::msg::rosidl_typesupport_c::DebugFusion_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
