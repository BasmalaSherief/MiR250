# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/MirExtra.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MirExtra(type):
    """Metaclass of message 'MirExtra'."""

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
                'mir_msgs.msg.MirExtra')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mir_extra
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mir_extra
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mir_extra
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mir_extra
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mir_extra

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MirExtra(metaclass=Metaclass_MirExtra):
    """Message class 'MirExtra'."""

    __slots__ = [
        '_header',
        '_time_delta',
        '_r_rpm',
        '_l_rpm',
        '_vel',
        '_ang',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'time_delta': 'float',
        'r_rpm': 'float',
        'l_rpm': 'float',
        'vel': 'float',
        'ang': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.time_delta = kwargs.get('time_delta', float())
        self.r_rpm = kwargs.get('r_rpm', float())
        self.l_rpm = kwargs.get('l_rpm', float())
        self.vel = kwargs.get('vel', float())
        self.ang = kwargs.get('ang', float())

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
        if self.header != other.header:
            return False
        if self.time_delta != other.time_delta:
            return False
        if self.r_rpm != other.r_rpm:
            return False
        if self.l_rpm != other.l_rpm:
            return False
        if self.vel != other.vel:
            return False
        if self.ang != other.ang:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def time_delta(self):
        """Message field 'time_delta'."""
        return self._time_delta

    @time_delta.setter
    def time_delta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_delta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_delta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_delta = value

    @builtins.property
    def r_rpm(self):
        """Message field 'r_rpm'."""
        return self._r_rpm

    @r_rpm.setter
    def r_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r_rpm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'r_rpm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._r_rpm = value

    @builtins.property
    def l_rpm(self):
        """Message field 'l_rpm'."""
        return self._l_rpm

    @l_rpm.setter
    def l_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'l_rpm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'l_rpm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._l_rpm = value

    @builtins.property
    def vel(self):
        """Message field 'vel'."""
        return self._vel

    @vel.setter
    def vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel = value

    @builtins.property
    def ang(self):
        """Message field 'ang'."""
        return self._ang

    @ang.setter
    def ang(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ang' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ang' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ang = value
