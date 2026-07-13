// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mir_msgs:msg/WorldMap.idl
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
#include "mir_msgs/msg/detail/world_map__struct.h"
#include "mir_msgs/msg/detail/world_map__functions.h"

bool mir_msgs__msg__resources_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mir_msgs__msg__resources_state__convert_to_py(void * raw_ros_message);
bool mir_msgs__msg__resources_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mir_msgs__msg__resources_state__convert_to_py(void * raw_ros_message);
bool mir_msgs__msg__external_robots__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mir_msgs__msg__external_robots__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mir_msgs__msg__world_map__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("mir_msgs.msg._world_map.WorldMap", full_classname_dest, 32) == 0);
  }
  mir_msgs__msg__WorldMap * ros_message = _ros_message;
  {  // positions
    PyObject * field = PyObject_GetAttrString(_pymsg, "positions");
    if (!field) {
      return false;
    }
    if (!mir_msgs__msg__resources_state__convert_from_py(field, &ros_message->positions)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // areas
    PyObject * field = PyObject_GetAttrString(_pymsg, "areas");
    if (!field) {
      return false;
    }
    if (!mir_msgs__msg__resources_state__convert_from_py(field, &ros_message->areas)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // robots
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots");
    if (!field) {
      return false;
    }
    if (!mir_msgs__msg__external_robots__convert_from_py(field, &ros_message->robots)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // map_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->map_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mir_msgs__msg__world_map__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WorldMap */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mir_msgs.msg._world_map");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WorldMap");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mir_msgs__msg__WorldMap * ros_message = (mir_msgs__msg__WorldMap *)raw_ros_message;
  {  // positions
    PyObject * field = NULL;
    field = mir_msgs__msg__resources_state__convert_to_py(&ros_message->positions);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "positions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // areas
    PyObject * field = NULL;
    field = mir_msgs__msg__resources_state__convert_to_py(&ros_message->areas);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "areas", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robots
    PyObject * field = NULL;
    field = mir_msgs__msg__external_robots__convert_to_py(&ros_message->robots);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->map_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
