// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mir_msgs:msg/Gpio.idl
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
#include "mir_msgs/msg/detail/gpio__struct.h"
#include "mir_msgs/msg/detail/gpio__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mir_msgs__msg__gpio__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[24];
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
    assert(strncmp("mir_msgs.msg._gpio.Gpio", full_classname_dest, 23) == 0);
  }
  mir_msgs__msg__Gpio * ros_message = _ros_message;
  {  // ioport
    PyObject * field = PyObject_GetAttrString(_pymsg, "ioport");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ioport = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dat
    PyObject * field = PyObject_GetAttrString(_pymsg, "dat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dat = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mir_msgs__msg__gpio__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Gpio */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mir_msgs.msg._gpio");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Gpio");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mir_msgs__msg__Gpio * ros_message = (mir_msgs__msg__Gpio *)raw_ros_message;
  {  // ioport
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ioport);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ioport", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
