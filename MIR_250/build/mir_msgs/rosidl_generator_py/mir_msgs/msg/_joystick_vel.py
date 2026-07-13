# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/JoystickVel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JoystickVel(type):
    """Metaclass of message 'JoystickVel'."""

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
                'mir_msgs.msg.JoystickVel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joystick_vel
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joystick_vel
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joystick_vel
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joystick_vel
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joystick_vel

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JoystickVel(metaclass=Metaclass_JoystickVel):
    """Message class 'JoystickVel'."""

    __slots__ = [
        '_joystick_token',
        '_speed_command',
    ]

    _fields_and_field_types = {
        'joystick_token': 'string',
        'speed_command': 'geometry_msgs/Twist',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joystick_token = kwargs.get('joystick_token', str())
        from geometry_msgs.msg import Twist
        self.speed_command = kwargs.get('speed_command', Twist())

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
        if self.joystick_token != other.joystick_token:
            return False
        if self.speed_command != other.speed_command:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joystick_token(self):
        """Message field 'joystick_token'."""
        return self._joystick_token

    @joystick_token.setter
    def joystick_token(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'joystick_token' field must be of type 'str'"
        self._joystick_token = value

    @builtins.property
    def speed_command(self):
        """Message field 'speed_command'."""
        return self._speed_command

    @speed_command.setter
    def speed_command(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'speed_command' field must be a sub message of type 'Twist'"
        self._speed_command = value
