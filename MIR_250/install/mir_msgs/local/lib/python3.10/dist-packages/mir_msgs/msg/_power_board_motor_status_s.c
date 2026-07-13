// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mir_msgs:msg/PowerBoardMotorStatus.idl
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
#include "mir_msgs/msg/detail/power_board_motor_status__struct.h"
#include "mir_msgs/msg/detail/power_board_motor_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mir_msgs__msg__power_board_motor_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("mir_msgs.msg._power_board_motor_status.PowerBoardMotorStatus", full_classname_dest, 60) == 0);
  }
  mir_msgs__msg__PowerBoardMotorStatus * ros_message = _ros_message;
  {  // left_motor_ctrl_word
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_motor_ctrl_word");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_motor_ctrl_word = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_motor_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_motor_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_motor_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // left_motor_encoder
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_motor_encoder");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_motor_encoder = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // left_motor_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_motor_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_motor_status = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_motor_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_motor_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_motor_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_motor_error_hist1
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_motor_error_hist1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_motor_error_hist1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_motor_error_hist2
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_motor_error_hist2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_motor_error_hist2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_motor_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_motor_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_motor_current = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // left_motor_i2t_motor
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_motor_i2t_motor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_motor_i2t_motor = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_motor_i2t_controller
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_motor_i2t_controller");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_motor_i2t_controller = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_motor_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_motor_temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_motor_temperature = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_motor_ctrl_word
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_motor_ctrl_word");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_motor_ctrl_word = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_motor_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_motor_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_motor_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_motor_encoder
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_motor_encoder");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_motor_encoder = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_motor_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_motor_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_motor_status = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_motor_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_motor_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_motor_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_motor_error_hist1
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_motor_error_hist1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_motor_error_hist1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_motor_error_hist2
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_motor_error_hist2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_motor_error_hist2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_motor_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_motor_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_motor_current = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_motor_i2t_motor
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_motor_i2t_motor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_motor_i2t_motor = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_motor_i2t_controller
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_motor_i2t_controller");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_motor_i2t_controller = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_motor_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_motor_temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_motor_temperature = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // brake_left_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_left_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brake_left_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brake_right_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_right_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brake_right_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mir_msgs__msg__power_board_motor_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PowerBoardMotorStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mir_msgs.msg._power_board_motor_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PowerBoardMotorStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mir_msgs__msg__PowerBoardMotorStatus * ros_message = (mir_msgs__msg__PowerBoardMotorStatus *)raw_ros_message;
  {  // left_motor_ctrl_word
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_motor_ctrl_word);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_motor_ctrl_word", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_motor_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_motor_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_motor_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_motor_encoder
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_motor_encoder);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_motor_encoder", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_motor_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_motor_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_motor_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_motor_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_motor_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_motor_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_motor_error_hist1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_motor_error_hist1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_motor_error_hist1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_motor_error_hist2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_motor_error_hist2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_motor_error_hist2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_motor_current
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_motor_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_motor_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_motor_i2t_motor
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_motor_i2t_motor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_motor_i2t_motor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_motor_i2t_controller
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_motor_i2t_controller);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_motor_i2t_controller", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_motor_temperature
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_motor_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_motor_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_motor_ctrl_word
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_motor_ctrl_word);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_motor_ctrl_word", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_motor_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_motor_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_motor_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_motor_encoder
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_motor_encoder);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_motor_encoder", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_motor_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_motor_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_motor_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_motor_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_motor_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_motor_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_motor_error_hist1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_motor_error_hist1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_motor_error_hist1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_motor_error_hist2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_motor_error_hist2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_motor_error_hist2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_motor_current
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_motor_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_motor_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_motor_i2t_motor
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_motor_i2t_motor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_motor_i2t_motor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_motor_i2t_controller
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_motor_i2t_controller);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_motor_i2t_controller", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_motor_temperature
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_motor_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_motor_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_left_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brake_left_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_left_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_right_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brake_right_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_right_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
