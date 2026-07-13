// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mir_msgs:msg/HookExtendedStatus.idl
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
#include "mir_msgs/msg/detail/hook_extended_status__struct.h"
#include "mir_msgs/msg/detail/hook_extended_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool mir_msgs__msg__brake_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mir_msgs__msg__brake_state__convert_to_py(void * raw_ros_message);
bool mir_msgs__msg__gripper_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mir_msgs__msg__gripper_state__convert_to_py(void * raw_ros_message);
bool mir_msgs__msg__height_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mir_msgs__msg__height_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mir_msgs__msg__hook_extended_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("mir_msgs.msg._hook_extended_status.HookExtendedStatus", full_classname_dest, 53) == 0);
  }
  mir_msgs__msg__HookExtendedStatus * ros_message = _ros_message;
  {  // available
    PyObject * field = PyObject_GetAttrString(_pymsg, "available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // brake
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake");
    if (!field) {
      return false;
    }
    if (!mir_msgs__msg__brake_state__convert_from_py(field, &ros_message->brake)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // gripper
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper");
    if (!field) {
      return false;
    }
    if (!mir_msgs__msg__gripper_state__convert_from_py(field, &ros_message->gripper)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    if (!mir_msgs__msg__height_state__convert_from_py(field, &ros_message->height)) {
      Py_DECREF(field);
      return false;
    }
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
  {  // qr_marker_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "qr_marker_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->qr_marker_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mir_msgs__msg__hook_extended_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HookExtendedStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mir_msgs.msg._hook_extended_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HookExtendedStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mir_msgs__msg__HookExtendedStatus * ros_message = (mir_msgs__msg__HookExtendedStatus *)raw_ros_message;
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
  {  // brake
    PyObject * field = NULL;
    field = mir_msgs__msg__brake_state__convert_to_py(&ros_message->brake);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper
    PyObject * field = NULL;
    field = mir_msgs__msg__gripper_state__convert_to_py(&ros_message->gripper);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = mir_msgs__msg__height_state__convert_to_py(&ros_message->height);
    if (!field) {
      return NULL;
    }
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
  {  // qr_marker_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->qr_marker_name.data,
      strlen(ros_message->qr_marker_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "qr_marker_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
