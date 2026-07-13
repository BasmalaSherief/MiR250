# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/HookStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HookStatus(type):
    """Metaclass of message 'HookStatus'."""

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
                'mir_msgs.msg.HookStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hook_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hook_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hook_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hook_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hook_status

            from mir_msgs.msg import Trolley
            if Trolley.__class__._TYPE_SUPPORT is None:
                Trolley.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HookStatus(metaclass=Metaclass_HookStatus):
    """Message class 'HookStatus'."""

    __slots__ = [
        '_available',
        '_length',
        '_height',
        '_angle',
        '_braked',
        '_trolley_attached',
        '_trolley',
    ]

    _fields_and_field_types = {
        'available': 'boolean',
        'length': 'float',
        'height': 'float',
        'angle': 'float',
        'braked': 'boolean',
        'trolley_attached': 'boolean',
        'trolley': 'mir_msgs/Trolley',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mir_msgs', 'msg'], 'Trolley'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.available = kwargs.get('available', bool())
        self.length = kwargs.get('length', float())
        self.height = kwargs.get('height', float())
        self.angle = kwargs.get('angle', float())
        self.braked = kwargs.get('braked', bool())
        self.trolley_attached = kwargs.get('trolley_attached', bool())
        from mir_msgs.msg import Trolley
        self.trolley = kwargs.get('trolley', Trolley())

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
        if self.available != other.available:
            return False
        if self.length != other.length:
            return False
        if self.height != other.height:
            return False
        if self.angle != other.angle:
            return False
        if self.braked != other.braked:
            return False
        if self.trolley_attached != other.trolley_attached:
            return False
        if self.trolley != other.trolley:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def available(self):
        """Message field 'available'."""
        return self._available

    @available.setter
    def available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'available' field must be of type 'bool'"
        self._available = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'length' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._length = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'height' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._height = value

    @builtins.property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle = value

    @builtins.property
    def braked(self):
        """Message field 'braked'."""
        return self._braked

    @braked.setter
    def braked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'braked' field must be of type 'bool'"
        self._braked = value

    @builtins.property
    def trolley_attached(self):
        """Message field 'trolley_attached'."""
        return self._trolley_attached

    @trolley_attached.setter
    def trolley_attached(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'trolley_attached' field must be of type 'bool'"
        self._trolley_attached = value

    @builtins.property
    def trolley(self):
        """Message field 'trolley'."""
        return self._trolley

    @trolley.setter
    def trolley(self, value):
        if __debug__:
            from mir_msgs.msg import Trolley
            assert \
                isinstance(value, Trolley), \
                "The 'trolley' field must be a sub message of type 'Trolley'"
        self._trolley = value
