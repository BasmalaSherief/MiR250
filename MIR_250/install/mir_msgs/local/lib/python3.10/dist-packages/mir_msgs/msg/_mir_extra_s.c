// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mir_msgs:msg/MirExtra.idl
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
#include "mir_msgs/msg/detail/mir_extra__struct.h"
#include "mir_msgs/msg/detail/mir_extra__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mir_msgs__msg__mir_extra__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("mir_msgs.msg._mir_extra.MirExtra", full_classname_dest, 32) == 0);
  }
  mir_msgs__msg__MirExtra * ros_message = _ros_message;
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
  {  // time_delta
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_delta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_delta = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // r_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "r_rpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->r_rpm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // l_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "l_rpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->l_rpm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ang
    PyObject * field = PyObject_GetAttrString(_pymsg, "ang");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ang = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mir_msgs__msg__mir_extra__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MirExtra */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mir_msgs.msg._mir_extra");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MirExtra");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mir_msgs__msg__MirExtra * ros_message = (mir_msgs__msg__MirExtra *)raw_ros_message;
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
  {  // time_delta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_delta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_delta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r_rpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->r_rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l_rpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->l_rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ang
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ang);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ang", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
