// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gpsd_client:msg/GpsFix.idl
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
#include "gpsd_client/msg/detail/gps_fix__struct.h"
#include "gpsd_client/msg/detail/gps_fix__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool gpsd_client__msg__gps_fix__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
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
    assert(strncmp("gpsd_client.msg._gps_fix.GpsFix", full_classname_dest, 31) == 0);
  }
  gpsd_client__msg__GpsFix * ros_message = _ros_message;
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
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // altitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // track
    PyObject * field = PyObject_GetAttrString(_pymsg, "track");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->track = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time
    PyObject * field = PyObject_GetAttrString(_pymsg, "time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "gdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gdop = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "pdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pdop = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "hdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hdop = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "vdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vdop = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "tdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tdop = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // err
    PyObject * field = PyObject_GetAttrString(_pymsg, "err");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->err = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // err_horz
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_horz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->err_horz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // err_vert
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_vert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->err_vert = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // err_track
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_track");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->err_track = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // err_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->err_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // err_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->err_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // satellites_visible
    PyObject * field = PyObject_GetAttrString(_pymsg, "satellites_visible");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->satellites_visible = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gpsd_client__msg__gps_fix__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GpsFix */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gpsd_client.msg._gps_fix");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GpsFix");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gpsd_client__msg__GpsFix * ros_message = (gpsd_client__msg__GpsFix *)raw_ros_message;
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
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->track);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->err);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_horz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->err_horz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_horz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_vert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->err_vert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_vert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_track
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->err_track);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_track", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->err_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->err_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // satellites_visible
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->satellites_visible);
    {
      int rc = PyObject_SetAttrString(_pymessage, "satellites_visible", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
