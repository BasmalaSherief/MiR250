// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mir_msgs:msg/SafetyStatus.idl
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
#include "mir_msgs/msg/detail/safety_status__struct.h"
#include "mir_msgs/msg/detail/safety_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mir_msgs__msg__safety_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("mir_msgs.msg._safety_status.SafetyStatus", full_classname_dest, 40) == 0);
  }
  mir_msgs__msg__SafetyStatus * ros_message = _ros_message;
  {  // is_connected
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_connected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_connected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_firmware_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_firmware_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_firmware_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // firmware_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "firmware_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->firmware_version = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // in_protective_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_protective_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_protective_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // in_emergency_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_emergency_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_emergency_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sto_feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "sto_feedback");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sto_feedback = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_restart_required
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_restart_required");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_restart_required = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_safety_muted
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_safety_muted");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_safety_muted = (Py_True == field);
    Py_DECREF(field);
  }
  {  // max_lin_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_lin_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_lin_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_rot_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_rot_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_rot_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mute_mask
    PyObject * field = PyObject_GetAttrString(_pymsg, "mute_mask");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mute_mask = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // partial_mute_mask
    PyObject * field = PyObject_GetAttrString(_pymsg, "partial_mute_mask");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->partial_mute_mask = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // is_limited_speed_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_limited_speed_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_limited_speed_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_lifter_down
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_lifter_down");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_lifter_down = (Py_True == field);
    Py_DECREF(field);
  }
  {  // in_sleep_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_sleep_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_sleep_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // in_manual_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_manual_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_manual_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_manual_mode_restart_required
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_manual_mode_restart_required");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_manual_mode_restart_required = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mir_msgs__msg__safety_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SafetyStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mir_msgs.msg._safety_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SafetyStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mir_msgs__msg__SafetyStatus * ros_message = (mir_msgs__msg__SafetyStatus *)raw_ros_message;
  {  // is_connected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_connected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_connected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_firmware_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_firmware_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_firmware_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // firmware_version
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->firmware_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "firmware_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_protective_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_protective_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_protective_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_emergency_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_emergency_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_emergency_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sto_feedback
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sto_feedback ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sto_feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_restart_required
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_restart_required ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_restart_required", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_safety_muted
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_safety_muted ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_safety_muted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_lin_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_lin_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_lin_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_rot_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_rot_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_rot_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mute_mask
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mute_mask);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mute_mask", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // partial_mute_mask
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->partial_mute_mask);
    {
      int rc = PyObject_SetAttrString(_pymessage, "partial_mute_mask", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_limited_speed_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_limited_speed_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_limited_speed_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_lifter_down
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_lifter_down ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_lifter_down", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_sleep_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_sleep_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_sleep_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_manual_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_manual_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_manual_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_manual_mode_restart_required
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_manual_mode_restart_required ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_manual_mode_restart_required", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
