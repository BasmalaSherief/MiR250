# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/ChargingState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChargingState(type):
    """Metaclass of message 'ChargingState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'mir_msgs.msg.ChargingState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__charging_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__charging_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__charging_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__charging_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__charging_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChargingState(metaclass=Metaclass_ChargingState):
    """Message class 'ChargingState'."""

    __slots__ = [
        '_charging_relay',
        '_charging_current',
        '_charging_current_raw',
        '_last_time_current',
        '_charging_voltage',
        '_charging_voltage_raw',
        '_is_voltage_low',
        '_last_time_voltage',
    ]

    _fields_and_field_types = {
        'charging_relay': 'boolean',
        'charging_current': 'double',
        'charging_current_raw': 'uint32',
        'last_time_current': 'double',
        'charging_voltage': 'double',
        'charging_voltage_raw': 'uint32',
        'is_voltage_low': 'boolean',
        'last_time_voltage': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.charging_relay = kwargs.get('charging_relay', bool())
        self.charging_current = kwargs.get('charging_current', float())
        self.charging_current_raw = kwargs.get('charging_current_raw', int())
        self.last_time_current = kwargs.get('last_time_current', float())
        self.charging_voltage = kwargs.get('charging_voltage', float())
        self.charging_voltage_raw = kwargs.get('charging_voltage_raw', int())
        self.is_voltage_low = kwargs.get('is_voltage_low', bool())
        self.last_time_voltage = kwargs.get('last_time_voltage', float())

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
        if self.charging_relay != other.charging_relay:
            return False
        if self.charging_current != other.charging_current:
            return False
        if self.charging_current_raw != other.charging_current_raw:
            return False
        if self.last_time_current != other.last_time_current:
            return False
        if self.charging_voltage != other.charging_voltage:
            return False
        if self.charging_voltage_raw != other.charging_voltage_raw:
            return False
        if self.is_voltage_low != other.is_voltage_low:
            return False
        if self.last_time_voltage != other.last_time_voltage:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def charging_relay(self):
        """Message field 'charging_relay'."""
        return self._charging_relay

    @charging_relay.setter
    def charging_relay(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'charging_relay' field must be of type 'bool'"
        self._charging_relay = value

    @builtins.property
    def charging_current(self):
        """Message field 'charging_current'."""
        return self._charging_current

    @charging_current.setter
    def charging_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'charging_current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'charging_current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._charging_current = value

    @builtins.property
    def charging_current_raw(self):
        """Message field 'charging_current_raw'."""
        return self._charging_current_raw

    @charging_current_raw.setter
    def charging_current_raw(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'charging_current_raw' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'charging_current_raw' field must be an unsigned integer in [0, 4294967295]"
        self._charging_current_raw = value

    @builtins.property
    def last_time_current(self):
        """Message field 'last_time_current'."""
        return self._last_time_current

    @last_time_current.setter
    def last_time_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'last_time_current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'last_time_current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._last_time_current = value

    @builtins.property
    def charging_voltage(self):
        """Message field 'charging_voltage'."""
        return self._charging_voltage

    @charging_voltage.setter
    def charging_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'charging_voltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'charging_voltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._charging_voltage = value

    @builtins.property
    def charging_voltage_raw(self):
        """Message field 'charging_voltage_raw'."""
        return self._charging_voltage_raw

    @charging_voltage_raw.setter
    def charging_voltage_raw(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'charging_voltage_raw' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'charging_voltage_raw' field must be an unsigned integer in [0, 4294967295]"
        self._charging_voltage_raw = value

    @builtins.property
    def is_voltage_low(self):
        """Message field 'is_voltage_low'."""
        return self._is_voltage_low

    @is_voltage_low.setter
    def is_voltage_low(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_voltage_low' field must be of type 'bool'"
        self._is_voltage_low = value

    @builtins.property
    def last_time_voltage(self):
        """Message field 'last_time_voltage'."""
        return self._last_time_voltage

    @last_time_voltage.setter
    def last_time_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'last_time_voltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'last_time_voltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._last_time_voltage = value
