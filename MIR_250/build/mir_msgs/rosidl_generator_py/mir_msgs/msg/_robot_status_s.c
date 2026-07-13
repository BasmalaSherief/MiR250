// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mir_msgs:msg/RobotStatus.idl
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
#include "mir_msgs/msg/detail/robot_status__struct.h"
#include "mir_msgs/msg/detail/robot_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "mir_msgs/msg/detail/error__functions.h"
// end nested array functions include
bool mir_msgs__msg__error__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mir_msgs__msg__error__convert_to_py(void * raw_ros_message);
bool mir_msgs__msg__hook_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mir_msgs__msg__hook_status__convert_to_py(void * raw_ros_message);
bool mir_msgs__msg__pose2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mir_msgs__msg__pose2_d__convert_to_py(void * raw_ros_message);
bool mir_msgs__msg__twist2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mir_msgs__msg__twist2_d__convert_to_py(void * raw_ros_message);
bool mir_msgs__msg__user_prompt__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mir_msgs__msg__user_prompt__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mir_msgs__msg__robot_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("mir_msgs.msg._robot_status.RobotStatus", full_classname_dest, 38) == 0);
  }
  mir_msgs__msg__RobotStatus * ros_message = _ros_message;
  {  // battery_percentage
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_percentage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_percentage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_time_remaining
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_time_remaining");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery_time_remaining = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // battery_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_to_next_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_to_next_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_to_next_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // errors
    PyObject * field = PyObject_GetAttrString(_pymsg, "errors");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'errors'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!mir_msgs__msg__Error__Sequence__init(&(ros_message->errors), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create mir_msgs__msg__Error__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    mir_msgs__msg__Error * dest = ros_message->errors.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!mir_msgs__msg__error__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // footprint
    PyObject * field = PyObject_GetAttrString(_pymsg, "footprint");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->footprint, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // hook_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "hook_status");
    if (!field) {
      return false;
    }
    if (!mir_msgs__msg__hook_status__convert_from_py(field, &ros_message->hook_status)) {
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
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->map_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // unloaded_map_changes
    PyObject * field = PyObject_GetAttrString(_pymsg, "unloaded_map_changes");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->unloaded_map_changes = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mission_queue_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_queue_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mission_queue_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mission_text
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_text");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mission_text, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // mode_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mode_text
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_text");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mode_text, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // moved
    PyObject * field = PyObject_GetAttrString(_pymsg, "moved");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->moved = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    if (!mir_msgs__msg__pose2_d__convert_from_py(field, &ros_message->position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // robot_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->robot_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // session_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "session_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->session_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // software_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "software_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->software_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // state_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "state_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // state_text
    PyObject * field = PyObject_GetAttrString(_pymsg, "state_text");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->state_text, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // uptime
    PyObject * field = PyObject_GetAttrString(_pymsg, "uptime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uptime = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    if (!mir_msgs__msg__twist2_d__convert_from_py(field, &ros_message->velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // user_prompt
    PyObject * field = PyObject_GetAttrString(_pymsg, "user_prompt");
    if (!field) {
      return false;
    }
    if (!mir_msgs__msg__user_prompt__convert_from_py(field, &ros_message->user_prompt)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // safety_system_muted
    PyObject * field = PyObject_GetAttrString(_pymsg, "safety_system_muted");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->safety_system_muted = (Py_True == field);
    Py_DECREF(field);
  }
  {  // joystick_low_speed_mode_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "joystick_low_speed_mode_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->joystick_low_speed_mode_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // joystick_web_session_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "joystick_web_session_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->joystick_web_session_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // mode_key_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_key_state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mode_key_state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mir_msgs__msg__robot_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mir_msgs.msg._robot_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mir_msgs__msg__RobotStatus * ros_message = (mir_msgs__msg__RobotStatus *)raw_ros_message;
  {  // battery_percentage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_percentage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_percentage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_time_remaining
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->battery_time_remaining);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_time_remaining", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_to_next_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_to_next_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_to_next_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // errors
    PyObject * field = NULL;
    size_t size = ros_message->errors.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    mir_msgs__msg__Error * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->errors.data[i]);
      PyObject * pyitem = mir_msgs__msg__error__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "errors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // footprint
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->footprint.data,
      strlen(ros_message->footprint.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "footprint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hook_status
    PyObject * field = NULL;
    field = mir_msgs__msg__hook_status__convert_to_py(&ros_message->hook_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "hook_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->map_id.data,
      strlen(ros_message->map_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unloaded_map_changes
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->unloaded_map_changes ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unloaded_map_changes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mission_queue_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mission_queue_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_queue_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mission_text
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mission_text.data,
      strlen(ros_message->mission_text.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_text", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_text
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mode_text.data,
      strlen(ros_message->mode_text.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_text", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moved
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->moved);
    {
      int rc = PyObject_SetAttrString(_pymessage, "moved", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position
    PyObject * field = NULL;
    field = mir_msgs__msg__pose2_d__convert_to_py(&ros_message->position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->robot_name.data,
      strlen(ros_message->robot_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // session_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->session_id.data,
      strlen(ros_message->session_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "session_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // software_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->software_version.data,
      strlen(ros_message->software_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "software_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->state_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state_text
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->state_text.data,
      strlen(ros_message->state_text.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "state_text", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uptime
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->uptime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uptime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = mir_msgs__msg__twist2_d__convert_to_py(&ros_message->velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user_prompt
    PyObject * field = NULL;
    field = mir_msgs__msg__user_prompt__convert_to_py(&ros_message->user_prompt);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "user_prompt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safety_system_muted
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->safety_system_muted ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safety_system_muted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joystick_low_speed_mode_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->joystick_low_speed_mode_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joystick_low_speed_mode_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joystick_web_session_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->joystick_web_session_id.data,
      strlen(ros_message->joystick_web_session_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joystick_web_session_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_key_state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mode_key_state.data,
      strlen(ros_message->mode_key_state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_key_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
