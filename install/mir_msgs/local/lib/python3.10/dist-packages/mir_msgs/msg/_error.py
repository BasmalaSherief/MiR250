# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/Error.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Error(type):
    """Metaclass of message 'Error'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HARDWARE_ERROR': 0,
        'CPU_LOAD_ERROR': 100,
        'MEMORY_ERROR': 200,
        'ETHERNET_ERROR': 300,
        'HDD_ERROR': 400,
        'BATTERY_ERROR': 500,
        'IMU_ERROR': 600,
        'MOTOR_ERROR': 700,
        'LASER_ERROR': 800,
        'CAMERA_ERROR': 900,
        'SAFETY_SYSTEM_ERROR': 1000,
        'POWERBOARD_ERROR': 2000,
        'POWERSUPPLY_ERROR': 2100,
        'CANBUS_ERROR': 2200,
        'HOOK_ERROR': 5000,
        'HOOK_CAMERA_ERROR': 5100,
        'HOOK_ACTUATOR_ERROR': 5200,
        'HOOK_BRAKE_ERROR': 5300,
        'HOOK_ENCODER_ERROR': 5400,
        'MISSING_ERROR': 9000,
        'SOFTWARE_ERROR': 10000,
        'MISSION_ERROR': 10100,
        'LOCALIZATION_ERROR': 10200,
        'MAPPING_ERROR': 10300,
        'ODOM_FUSION_ERROR': 10400,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mir_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mir_msgs.msg.Error')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__error
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__error
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__error
            cls._TYPE_SUPPORT = module.type_support_msg__msg__error
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__error

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HARDWARE_ERROR': cls.__constants['HARDWARE_ERROR'],
            'CPU_LOAD_ERROR': cls.__constants['CPU_LOAD_ERROR'],
            'MEMORY_ERROR': cls.__constants['MEMORY_ERROR'],
            'ETHERNET_ERROR': cls.__constants['ETHERNET_ERROR'],
            'HDD_ERROR': cls.__constants['HDD_ERROR'],
            'BATTERY_ERROR': cls.__constants['BATTERY_ERROR'],
            'IMU_ERROR': cls.__constants['IMU_ERROR'],
            'MOTOR_ERROR': cls.__constants['MOTOR_ERROR'],
            'LASER_ERROR': cls.__constants['LASER_ERROR'],
            'CAMERA_ERROR': cls.__constants['CAMERA_ERROR'],
            'SAFETY_SYSTEM_ERROR': cls.__constants['SAFETY_SYSTEM_ERROR'],
            'POWERBOARD_ERROR': cls.__constants['POWERBOARD_ERROR'],
            'POWERSUPPLY_ERROR': cls.__constants['POWERSUPPLY_ERROR'],
            'CANBUS_ERROR': cls.__constants['CANBUS_ERROR'],
            'HOOK_ERROR': cls.__constants['HOOK_ERROR'],
            'HOOK_CAMERA_ERROR': cls.__constants['HOOK_CAMERA_ERROR'],
            'HOOK_ACTUATOR_ERROR': cls.__constants['HOOK_ACTUATOR_ERROR'],
            'HOOK_BRAKE_ERROR': cls.__constants['HOOK_BRAKE_ERROR'],
            'HOOK_ENCODER_ERROR': cls.__constants['HOOK_ENCODER_ERROR'],
            'MISSING_ERROR': cls.__constants['MISSING_ERROR'],
            'SOFTWARE_ERROR': cls.__constants['SOFTWARE_ERROR'],
            'MISSION_ERROR': cls.__constants['MISSION_ERROR'],
            'LOCALIZATION_ERROR': cls.__constants['LOCALIZATION_ERROR'],
            'MAPPING_ERROR': cls.__constants['MAPPING_ERROR'],
            'ODOM_FUSION_ERROR': cls.__constants['ODOM_FUSION_ERROR'],
        }

    @property
    def HARDWARE_ERROR(self):
        """Message constant 'HARDWARE_ERROR'."""
        return Metaclass_Error.__constants['HARDWARE_ERROR']

    @property
    def CPU_LOAD_ERROR(self):
        """Message constant 'CPU_LOAD_ERROR'."""
        return Metaclass_Error.__constants['CPU_LOAD_ERROR']

    @property
    def MEMORY_ERROR(self):
        """Message constant 'MEMORY_ERROR'."""
        return Metaclass_Error.__constants['MEMORY_ERROR']

    @property
    def ETHERNET_ERROR(self):
        """Message constant 'ETHERNET_ERROR'."""
        return Metaclass_Error.__constants['ETHERNET_ERROR']

    @property
    def HDD_ERROR(self):
        """Message constant 'HDD_ERROR'."""
        return Metaclass_Error.__constants['HDD_ERROR']

    @property
    def BATTERY_ERROR(self):
        """Message constant 'BATTERY_ERROR'."""
        return Metaclass_Error.__constants['BATTERY_ERROR']

    @property
    def IMU_ERROR(self):
        """Message constant 'IMU_ERROR'."""
        return Metaclass_Error.__constants['IMU_ERROR']

    @property
    def MOTOR_ERROR(self):
        """Message constant 'MOTOR_ERROR'."""
        return Metaclass_Error.__constants['MOTOR_ERROR']

    @property
    def LASER_ERROR(self):
        """Message constant 'LASER_ERROR'."""
        return Metaclass_Error.__constants['LASER_ERROR']

    @property
    def CAMERA_ERROR(self):
        """Message constant 'CAMERA_ERROR'."""
        return Metaclass_Error.__constants['CAMERA_ERROR']

    @property
    def SAFETY_SYSTEM_ERROR(self):
        """Message constant 'SAFETY_SYSTEM_ERROR'."""
        return Metaclass_Error.__constants['SAFETY_SYSTEM_ERROR']

    @property
    def POWERBOARD_ERROR(self):
        """Message constant 'POWERBOARD_ERROR'."""
        return Metaclass_Error.__constants['POWERBOARD_ERROR']

    @property
    def POWERSUPPLY_ERROR(self):
        """Message constant 'POWERSUPPLY_ERROR'."""
        return Metaclass_Error.__constants['POWERSUPPLY_ERROR']

    @property
    def CANBUS_ERROR(self):
        """Message constant 'CANBUS_ERROR'."""
        return Metaclass_Error.__constants['CANBUS_ERROR']

    @property
    def HOOK_ERROR(self):
        """Message constant 'HOOK_ERROR'."""
        return Metaclass_Error.__constants['HOOK_ERROR']

    @property
    def HOOK_CAMERA_ERROR(self):
        """Message constant 'HOOK_CAMERA_ERROR'."""
        return Metaclass_Error.__constants['HOOK_CAMERA_ERROR']

    @property
    def HOOK_ACTUATOR_ERROR(self):
        """Message constant 'HOOK_ACTUATOR_ERROR'."""
        return Metaclass_Error.__constants['HOOK_ACTUATOR_ERROR']

    @property
    def HOOK_BRAKE_ERROR(self):
        """Message constant 'HOOK_BRAKE_ERROR'."""
        return Metaclass_Error.__constants['HOOK_BRAKE_ERROR']

    @property
    def HOOK_ENCODER_ERROR(self):
        """Message constant 'HOOK_ENCODER_ERROR'."""
        return Metaclass_Error.__constants['HOOK_ENCODER_ERROR']

    @property
    def MISSING_ERROR(self):
        """Message constant 'MISSING_ERROR'."""
        return Metaclass_Error.__constants['MISSING_ERROR']

    @property
    def SOFTWARE_ERROR(self):
        """Message constant 'SOFTWARE_ERROR'."""
        return Metaclass_Error.__constants['SOFTWARE_ERROR']

    @property
    def MISSION_ERROR(self):
        """Message constant 'MISSION_ERROR'."""
        return Metaclass_Error.__constants['MISSION_ERROR']

    @property
    def LOCALIZATION_ERROR(self):
        """Message constant 'LOCALIZATION_ERROR'."""
        return Metaclass_Error.__constants['LOCALIZATION_ERROR']

    @property
    def MAPPING_ERROR(self):
        """Message constant 'MAPPING_ERROR'."""
        return Metaclass_Error.__constants['MAPPING_ERROR']

    @property
    def ODOM_FUSION_ERROR(self):
        """Message constant 'ODOM_FUSION_ERROR'."""
        return Metaclass_Error.__constants['ODOM_FUSION_ERROR']


class Error(metaclass=Metaclass_Error):
    """
    Message class 'Error'.

    Constants:
      HARDWARE_ERROR
      CPU_LOAD_ERROR
      MEMORY_ERROR
      ETHERNET_ERROR
      HDD_ERROR
      BATTERY_ERROR
      IMU_ERROR
      MOTOR_ERROR
      LASER_ERROR
      CAMERA_ERROR
      SAFETY_SYSTEM_ERROR
      POWERBOARD_ERROR
      POWERSUPPLY_ERROR
      CANBUS_ERROR
      HOOK_ERROR
      HOOK_CAMERA_ERROR
      HOOK_ACTUATOR_ERROR
      HOOK_BRAKE_ERROR
      HOOK_ENCODER_ERROR
      MISSING_ERROR
      SOFTWARE_ERROR
      MISSION_ERROR
      LOCALIZATION_ERROR
      MAPPING_ERROR
      ODOM_FUSION_ERROR
    """

    __slots__ = [
        '_timestamp',
        '_code',
        '_description',
        '_module',
    ]

    _fields_and_field_types = {
        'timestamp': 'builtin_interfaces/Time',
        'code': 'int32',
        'description': 'string',
        'module': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.code = kwargs.get('code', int())
        self.description = kwargs.get('description', str())
        self.module = kwargs.get('module', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.code != other.code:
            return False
        if self.description != other.description:
            return False
        if self.module != other.module:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value

    @builtins.property
    def code(self):
        """Message field 'code'."""
        return self._code

    @code.setter
    def code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'code' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'code' field must be an integer in [-2147483648, 2147483647]"
        self._code = value

    @builtins.property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'description' field must be of type 'str'"
        self._description = value

    @builtins.property
    def module(self):
        """Message field 'module'."""
        return self._module

    @module.setter
    def module(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'module' field must be of type 'str'"
        self._module = value
