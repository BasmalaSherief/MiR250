# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/SafetyStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SafetyStatus(type):
    """Metaclass of message 'SafetyStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MUTE_FRONT_RIGHT': 1,
        'MUTE_FRONT_CENTER': 2,
        'MUTE_FRONT_LEFT': 4,
        'MUTE_LEFT_CENTER': 8,
        'MUTE_REAR_LEFT': 16,
        'MUTE_REAR_CENTER': 32,
        'MUTE_REAR_RIGHT': 64,
        'MUTE_RIGHT_CENTER': 128,
        'MUTE_FRONT': 7,
        'MUTE_LEFT': 28,
        'MUTE_REAR': 112,
        'MUTE_RIGHT': 193,
        'MUTE_SIDES': 221,
        'MUTE_ALL': 255,
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
                'mir_msgs.msg.SafetyStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__safety_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__safety_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__safety_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__safety_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__safety_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MUTE_FRONT_RIGHT': cls.__constants['MUTE_FRONT_RIGHT'],
            'MUTE_FRONT_CENTER': cls.__constants['MUTE_FRONT_CENTER'],
            'MUTE_FRONT_LEFT': cls.__constants['MUTE_FRONT_LEFT'],
            'MUTE_LEFT_CENTER': cls.__constants['MUTE_LEFT_CENTER'],
            'MUTE_REAR_LEFT': cls.__constants['MUTE_REAR_LEFT'],
            'MUTE_REAR_CENTER': cls.__constants['MUTE_REAR_CENTER'],
            'MUTE_REAR_RIGHT': cls.__constants['MUTE_REAR_RIGHT'],
            'MUTE_RIGHT_CENTER': cls.__constants['MUTE_RIGHT_CENTER'],
            'MUTE_FRONT': cls.__constants['MUTE_FRONT'],
            'MUTE_LEFT': cls.__constants['MUTE_LEFT'],
            'MUTE_REAR': cls.__constants['MUTE_REAR'],
            'MUTE_RIGHT': cls.__constants['MUTE_RIGHT'],
            'MUTE_SIDES': cls.__constants['MUTE_SIDES'],
            'MUTE_ALL': cls.__constants['MUTE_ALL'],
        }

    @property
    def MUTE_FRONT_RIGHT(self):
        """Message constant 'MUTE_FRONT_RIGHT'."""
        return Metaclass_SafetyStatus.__constants['MUTE_FRONT_RIGHT']

    @property
    def MUTE_FRONT_CENTER(self):
        """Message constant 'MUTE_FRONT_CENTER'."""
        return Metaclass_SafetyStatus.__constants['MUTE_FRONT_CENTER']

    @property
    def MUTE_FRONT_LEFT(self):
        """Message constant 'MUTE_FRONT_LEFT'."""
        return Metaclass_SafetyStatus.__constants['MUTE_FRONT_LEFT']

    @property
    def MUTE_LEFT_CENTER(self):
        """Message constant 'MUTE_LEFT_CENTER'."""
        return Metaclass_SafetyStatus.__constants['MUTE_LEFT_CENTER']

    @property
    def MUTE_REAR_LEFT(self):
        """Message constant 'MUTE_REAR_LEFT'."""
        return Metaclass_SafetyStatus.__constants['MUTE_REAR_LEFT']

    @property
    def MUTE_REAR_CENTER(self):
        """Message constant 'MUTE_REAR_CENTER'."""
        return Metaclass_SafetyStatus.__constants['MUTE_REAR_CENTER']

    @property
    def MUTE_REAR_RIGHT(self):
        """Message constant 'MUTE_REAR_RIGHT'."""
        return Metaclass_SafetyStatus.__constants['MUTE_REAR_RIGHT']

    @property
    def MUTE_RIGHT_CENTER(self):
        """Message constant 'MUTE_RIGHT_CENTER'."""
        return Metaclass_SafetyStatus.__constants['MUTE_RIGHT_CENTER']

    @property
    def MUTE_FRONT(self):
        """Message constant 'MUTE_FRONT'."""
        return Metaclass_SafetyStatus.__constants['MUTE_FRONT']

    @property
    def MUTE_LEFT(self):
        """Message constant 'MUTE_LEFT'."""
        return Metaclass_SafetyStatus.__constants['MUTE_LEFT']

    @property
    def MUTE_REAR(self):
        """Message constant 'MUTE_REAR'."""
        return Metaclass_SafetyStatus.__constants['MUTE_REAR']

    @property
    def MUTE_RIGHT(self):
        """Message constant 'MUTE_RIGHT'."""
        return Metaclass_SafetyStatus.__constants['MUTE_RIGHT']

    @property
    def MUTE_SIDES(self):
        """Message constant 'MUTE_SIDES'."""
        return Metaclass_SafetyStatus.__constants['MUTE_SIDES']

    @property
    def MUTE_ALL(self):
        """Message constant 'MUTE_ALL'."""
        return Metaclass_SafetyStatus.__constants['MUTE_ALL']


class SafetyStatus(metaclass=Metaclass_SafetyStatus):
    """
    Message class 'SafetyStatus'.

    Constants:
      MUTE_FRONT_RIGHT
      MUTE_FRONT_CENTER
      MUTE_FRONT_LEFT
      MUTE_LEFT_CENTER
      MUTE_REAR_LEFT
      MUTE_REAR_CENTER
      MUTE_REAR_RIGHT
      MUTE_RIGHT_CENTER
      MUTE_FRONT
      MUTE_LEFT
      MUTE_REAR
      MUTE_RIGHT
      MUTE_SIDES
      MUTE_ALL
    """

    __slots__ = [
        '_is_connected',
        '_is_firmware_ok',
        '_firmware_version',
        '_in_protective_stop',
        '_in_emergency_stop',
        '_sto_feedback',
        '_is_restart_required',
        '_is_safety_muted',
        '_max_lin_speed',
        '_max_rot_speed',
        '_mute_mask',
        '_partial_mute_mask',
        '_is_limited_speed_active',
        '_is_lifter_down',
        '_in_sleep_mode',
        '_in_manual_mode',
        '_is_manual_mode_restart_required',
    ]

    _fields_and_field_types = {
        'is_connected': 'boolean',
        'is_firmware_ok': 'boolean',
        'firmware_version': 'int32',
        'in_protective_stop': 'boolean',
        'in_emergency_stop': 'boolean',
        'sto_feedback': 'boolean',
        'is_restart_required': 'boolean',
        'is_safety_muted': 'boolean',
        'max_lin_speed': 'double',
        'max_rot_speed': 'double',
        'mute_mask': 'uint8',
        'partial_mute_mask': 'uint8',
        'is_limited_speed_active': 'boolean',
        'is_lifter_down': 'boolean',
        'in_sleep_mode': 'boolean',
        'in_manual_mode': 'boolean',
        'is_manual_mode_restart_required': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_connected = kwargs.get('is_connected', bool())
        self.is_firmware_ok = kwargs.get('is_firmware_ok', bool())
        self.firmware_version = kwargs.get('firmware_version', int())
        self.in_protective_stop = kwargs.get('in_protective_stop', bool())
        self.in_emergency_stop = kwargs.get('in_emergency_stop', bool())
        self.sto_feedback = kwargs.get('sto_feedback', bool())
        self.is_restart_required = kwargs.get('is_restart_required', bool())
        self.is_safety_muted = kwargs.get('is_safety_muted', bool())
        self.max_lin_speed = kwargs.get('max_lin_speed', float())
        self.max_rot_speed = kwargs.get('max_rot_speed', float())
        self.mute_mask = kwargs.get('mute_mask', int())
        self.partial_mute_mask = kwargs.get('partial_mute_mask', int())
        self.is_limited_speed_active = kwargs.get('is_limited_speed_active', bool())
        self.is_lifter_down = kwargs.get('is_lifter_down', bool())
        self.in_sleep_mode = kwargs.get('in_sleep_mode', bool())
        self.in_manual_mode = kwargs.get('in_manual_mode', bool())
        self.is_manual_mode_restart_required = kwargs.get('is_manual_mode_restart_required', bool())

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
        if self.is_connected != other.is_connected:
            return False
        if self.is_firmware_ok != other.is_firmware_ok:
            return False
        if self.firmware_version != other.firmware_version:
            return False
        if self.in_protective_stop != other.in_protective_stop:
            return False
        if self.in_emergency_stop != other.in_emergency_stop:
            return False
        if self.sto_feedback != other.sto_feedback:
            return False
        if self.is_restart_required != other.is_restart_required:
            return False
        if self.is_safety_muted != other.is_safety_muted:
            return False
        if self.max_lin_speed != other.max_lin_speed:
            return False
        if self.max_rot_speed != other.max_rot_speed:
            return False
        if self.mute_mask != other.mute_mask:
            return False
        if self.partial_mute_mask != other.partial_mute_mask:
            return False
        if self.is_limited_speed_active != other.is_limited_speed_active:
            return False
        if self.is_lifter_down != other.is_lifter_down:
            return False
        if self.in_sleep_mode != other.in_sleep_mode:
            return False
        if self.in_manual_mode != other.in_manual_mode:
            return False
        if self.is_manual_mode_restart_required != other.is_manual_mode_restart_required:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_connected(self):
        """Message field 'is_connected'."""
        return self._is_connected

    @is_connected.setter
    def is_connected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_connected' field must be of type 'bool'"
        self._is_connected = value

    @builtins.property
    def is_firmware_ok(self):
        """Message field 'is_firmware_ok'."""
        return self._is_firmware_ok

    @is_firmware_ok.setter
    def is_firmware_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_firmware_ok' field must be of type 'bool'"
        self._is_firmware_ok = value

    @builtins.property
    def firmware_version(self):
        """Message field 'firmware_version'."""
        return self._firmware_version

    @firmware_version.setter
    def firmware_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'firmware_version' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'firmware_version' field must be an integer in [-2147483648, 2147483647]"
        self._firmware_version = value

    @builtins.property
    def in_protective_stop(self):
        """Message field 'in_protective_stop'."""
        return self._in_protective_stop

    @in_protective_stop.setter
    def in_protective_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'in_protective_stop' field must be of type 'bool'"
        self._in_protective_stop = value

    @builtins.property
    def in_emergency_stop(self):
        """Message field 'in_emergency_stop'."""
        return self._in_emergency_stop

    @in_emergency_stop.setter
    def in_emergency_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'in_emergency_stop' field must be of type 'bool'"
        self._in_emergency_stop = value

    @builtins.property
    def sto_feedback(self):
        """Message field 'sto_feedback'."""
        return self._sto_feedback

    @sto_feedback.setter
    def sto_feedback(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sto_feedback' field must be of type 'bool'"
        self._sto_feedback = value

    @builtins.property
    def is_restart_required(self):
        """Message field 'is_restart_required'."""
        return self._is_restart_required

    @is_restart_required.setter
    def is_restart_required(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_restart_required' field must be of type 'bool'"
        self._is_restart_required = value

    @builtins.property
    def is_safety_muted(self):
        """Message field 'is_safety_muted'."""
        return self._is_safety_muted

    @is_safety_muted.setter
    def is_safety_muted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_safety_muted' field must be of type 'bool'"
        self._is_safety_muted = value

    @builtins.property
    def max_lin_speed(self):
        """Message field 'max_lin_speed'."""
        return self._max_lin_speed

    @max_lin_speed.setter
    def max_lin_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_lin_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_lin_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_lin_speed = value

    @builtins.property
    def max_rot_speed(self):
        """Message field 'max_rot_speed'."""
        return self._max_rot_speed

    @max_rot_speed.setter
    def max_rot_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_rot_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_rot_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_rot_speed = value

    @builtins.property
    def mute_mask(self):
        """Message field 'mute_mask'."""
        return self._mute_mask

    @mute_mask.setter
    def mute_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mute_mask' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mute_mask' field must be an unsigned integer in [0, 255]"
        self._mute_mask = value

    @builtins.property
    def partial_mute_mask(self):
        """Message field 'partial_mute_mask'."""
        return self._partial_mute_mask

    @partial_mute_mask.setter
    def partial_mute_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'partial_mute_mask' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'partial_mute_mask' field must be an unsigned integer in [0, 255]"
        self._partial_mute_mask = value

    @builtins.property
    def is_limited_speed_active(self):
        """Message field 'is_limited_speed_active'."""
        return self._is_limited_speed_active

    @is_limited_speed_active.setter
    def is_limited_speed_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_limited_speed_active' field must be of type 'bool'"
        self._is_limited_speed_active = value

    @builtins.property
    def is_lifter_down(self):
        """Message field 'is_lifter_down'."""
        return self._is_lifter_down

    @is_lifter_down.setter
    def is_lifter_down(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_lifter_down' field must be of type 'bool'"
        self._is_lifter_down = value

    @builtins.property
    def in_sleep_mode(self):
        """Message field 'in_sleep_mode'."""
        return self._in_sleep_mode

    @in_sleep_mode.setter
    def in_sleep_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'in_sleep_mode' field must be of type 'bool'"
        self._in_sleep_mode = value

    @builtins.property
    def in_manual_mode(self):
        """Message field 'in_manual_mode'."""
        return self._in_manual_mode

    @in_manual_mode.setter
    def in_manual_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'in_manual_mode' field must be of type 'bool'"
        self._in_manual_mode = value

    @builtins.property
    def is_manual_mode_restart_required(self):
        """Message field 'is_manual_mode_restart_required'."""
        return self._is_manual_mode_restart_required

    @is_manual_mode_restart_required.setter
    def is_manual_mode_restart_required(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_manual_mode_restart_required' field must be of type 'bool'"
        self._is_manual_mode_restart_required = value
