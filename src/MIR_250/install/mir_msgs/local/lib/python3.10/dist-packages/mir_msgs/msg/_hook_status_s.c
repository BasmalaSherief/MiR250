// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mir_msgs:msg/HookStatus.idl
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
#include "mir_msgs/msg/detail/hook_status__struct.h"
#include "mir_msgs/msg/detail/hook_status__functions.h"

bool mir_msgs__msg__trolley__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mir_msgs__msg__trolley__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mir_msgs__msg__hook_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("mir_msgs.msg._hook_status.HookStatus", full_classname_dest, 36) == 0);
  }
  mir_msgs__msg__HookStatus * ros_message = _ros_message;
  {  // available
    PyObject * field = PyObject_GetAttrString(_pymsg, "available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->length = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // braked
    PyObject * field = PyObject_GetAttrString(_pymsg, "braked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->braked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // trolley_attached
    PyObject * field = PyObject_GetAttrString(_pymsg, "trolley_attached");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->trolley_attached = (Py_True == field);
    Py_DECREF(field);
  }
  {  // trolley
    PyObject * field = PyObject_GetAttrString(_pymsg, "trolley");
    if (!field) {
      return false;
    }
    if (!mir_msgs__msg__trolley__convert_from_py(field, &ros_message->trolley)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mir_msgs__msg__hook_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HookStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mir_msgs.msg._hook_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HookStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mir_msgs__msg__HookStatus * ros_message = (mir_msgs__msg__HookStatus *)raw_ros_message;
  {  // available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // braked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->braked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "braked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trolley_attached
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->trolley_attached ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trolley_attached", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trolley
    PyObject * field = NULL;
    field = mir_msgs__msg__trolley__convert_to_py(&ros_message->trolley);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "trolley", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
