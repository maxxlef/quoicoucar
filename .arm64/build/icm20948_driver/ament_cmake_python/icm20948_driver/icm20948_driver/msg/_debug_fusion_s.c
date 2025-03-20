// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from icm20948_driver:msg/DebugFusion.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "icm20948_driver/msg/detail/debug_fusion__struct.h"
#include "icm20948_driver/msg/detail/debug_fusion__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool icm20948_driver__msg__debug_fusion__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("icm20948_driver.msg._debug_fusion.DebugFusion", full_classname_dest, 45) == 0);
  }
  icm20948_driver__msg__DebugFusion * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acceleration_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accelerometer_ignored
    PyObject * field = PyObject_GetAttrString(_pymsg, "accelerometer_ignored");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accelerometer_ignored = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acceleration_recovery_trigger
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_recovery_trigger");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration_recovery_trigger = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // magnetic_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "magnetic_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->magnetic_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // magnetometer_ignored
    PyObject * field = PyObject_GetAttrString(_pymsg, "magnetometer_ignored");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->magnetometer_ignored = (Py_True == field);
    Py_DECREF(field);
  }
  {  // magnetic_recovery_trigger
    PyObject * field = PyObject_GetAttrString(_pymsg, "magnetic_recovery_trigger");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->magnetic_recovery_trigger = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // initialising
    PyObject * field = PyObject_GetAttrString(_pymsg, "initialising");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->initialising = (Py_True == field);
    Py_DECREF(field);
  }
  {  // angular_rate_recovery
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_rate_recovery");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->angular_rate_recovery = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acceleration_recovery
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_recovery");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acceleration_recovery = (Py_True == field);
    Py_DECREF(field);
  }
  {  // magnetic_recovery
    PyObject * field = PyObject_GetAttrString(_pymsg, "magnetic_recovery");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->magnetic_recovery = (Py_True == field);
    Py_DECREF(field);
  }
  {  // magnetometer_limit_reached
    PyObject * field = PyObject_GetAttrString(_pymsg, "magnetometer_limit_reached");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->magnetometer_limit_reached = (Py_True == field);
    Py_DECREF(field);
  }
  {  // magnetometer_data_skipped
    PyObject * field = PyObject_GetAttrString(_pymsg, "magnetometer_data_skipped");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->magnetometer_data_skipped = (Py_True == field);
    Py_DECREF(field);
  }
  {  // magnetometer_data_is_ready
    PyObject * field = PyObject_GetAttrString(_pymsg, "magnetometer_data_is_ready");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->magnetometer_data_is_ready = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * icm20948_driver__msg__debug_fusion__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DebugFusion */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("icm20948_driver.msg._debug_fusion");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DebugFusion");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  icm20948_driver__msg__DebugFusion * ros_message = (icm20948_driver__msg__DebugFusion *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accelerometer_ignored
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accelerometer_ignored ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accelerometer_ignored", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_recovery_trigger
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration_recovery_trigger);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_recovery_trigger", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // magnetic_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->magnetic_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "magnetic_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // magnetometer_ignored
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->magnetometer_ignored ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "magnetometer_ignored", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // magnetic_recovery_trigger
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->magnetic_recovery_trigger);
    {
      int rc = PyObject_SetAttrString(_pymessage, "magnetic_recovery_trigger", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initialising
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->initialising ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initialising", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_rate_recovery
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->angular_rate_recovery ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_rate_recovery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_recovery
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acceleration_recovery ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_recovery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // magnetic_recovery
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->magnetic_recovery ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "magnetic_recovery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // magnetometer_limit_reached
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->magnetometer_limit_reached ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "magnetometer_limit_reached", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // magnetometer_data_skipped
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->magnetometer_data_skipped ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "magnetometer_data_skipped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // magnetometer_data_is_ready
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->magnetometer_data_is_ready ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "magnetometer_data_is_ready", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
