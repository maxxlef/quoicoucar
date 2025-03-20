// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from voiture2a_motors_driver:msg/Engine.idl
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
#include "voiture2a_motors_driver/msg/detail/engine__struct.h"
#include "voiture2a_motors_driver/msg/detail/engine__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool voiture2a_motors_driver__msg__engine__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("voiture2a_motors_driver.msg._engine.Engine", full_classname_dest, 42) == 0);
  }
  voiture2a_motors_driver__msg__Engine * ros_message = _ros_message;
  {  // servo
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->servo = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // engine
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engine = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * voiture2a_motors_driver__msg__engine__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Engine */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("voiture2a_motors_driver.msg._engine");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Engine");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  voiture2a_motors_driver__msg__Engine * ros_message = (voiture2a_motors_driver__msg__Engine *)raw_ros_message;
  {  // servo
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->servo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->engine);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
