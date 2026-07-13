// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mir_msgs:msg/ChargingState.idl
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
#include "mir_msgs/msg/detail/charging_state__struct.h"
#include "mir_msgs/msg/detail/charging_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mir_msgs__msg__charging_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("mir_msgs.msg._charging_state.ChargingState", full_classname_dest, 42) == 0);
  }
  mir_msgs__msg__ChargingState * ros_message = _ros_message;
  {  // charging_relay
    PyObject * field = PyObject_GetAttrString(_pymsg, "charging_relay");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->charging_relay = (Py_True == field);
    Py_DECREF(field);
  }
  {  // charging_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "charging_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->charging_current = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // charging_current_raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "charging_current_raw");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->charging_current_raw = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // last_time_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_time_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->last_time_current = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // charging_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "charging_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->charging_voltage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // charging_voltage_raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "charging_voltage_raw");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->charging_voltage_raw = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // is_voltage_low
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_voltage_low");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_voltage_low = (Py_True == field);
    Py_DECREF(field);
  }
  {  // last_time_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_time_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->last_time_voltage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mir_msgs__msg__charging_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChargingState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mir_msgs.msg._charging_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChargingState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mir_msgs__msg__ChargingState * ros_message = (mir_msgs__msg__ChargingState *)raw_ros_message;
  {  // charging_relay
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->charging_relay ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charging_relay", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charging_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->charging_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charging_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charging_current_raw
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->charging_current_raw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charging_current_raw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_time_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->last_time_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_time_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charging_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->charging_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charging_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charging_voltage_raw
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->charging_voltage_raw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charging_voltage_raw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_voltage_low
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_voltage_low ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_voltage_low", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_time_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->last_time_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_time_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
