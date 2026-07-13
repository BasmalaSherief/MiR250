# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/MissionCtrlCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MissionCtrlCommand(type):
    """Metaclass of message 'MissionCtrlCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CMD_GET_STATUS': 0,
        'CMD_WAIT_POS_LOCK': 1,
        'CMD_WAIT_AREA_LOCK': 2,
        'CMD_CONTINUE': 3,
        'CMD_LOAD_MISSION': 4,
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
                'mir_msgs.msg.MissionCtrlCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mission_ctrl_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mission_ctrl_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mission_ctrl_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mission_ctrl_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mission_ctrl_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CMD_GET_STATUS': cls.__constants['CMD_GET_STATUS'],
            'CMD_WAIT_POS_LOCK': cls.__constants['CMD_WAIT_POS_LOCK'],
            'CMD_WAIT_AREA_LOCK': cls.__constants['CMD_WAIT_AREA_LOCK'],
            'CMD_CONTINUE': cls.__constants['CMD_CONTINUE'],
            'CMD_LOAD_MISSION': cls.__constants['CMD_LOAD_MISSION'],
        }

    @property
    def CMD_GET_STATUS(self):
        """Message constant 'CMD_GET_STATUS'."""
        return Metaclass_MissionCtrlCommand.__constants['CMD_GET_STATUS']

    @property
    def CMD_WAIT_POS_LOCK(self):
        """Message constant 'CMD_WAIT_POS_LOCK'."""
        return Metaclass_MissionCtrlCommand.__constants['CMD_WAIT_POS_LOCK']

    @property
    def CMD_WAIT_AREA_LOCK(self):
        """Message constant 'CMD_WAIT_AREA_LOCK'."""
        return Metaclass_MissionCtrlCommand.__constants['CMD_WAIT_AREA_LOCK']

    @property
    def CMD_CONTINUE(self):
        """Message constant 'CMD_CONTINUE'."""
        return Metaclass_MissionCtrlCommand.__constants['CMD_CONTINUE']

    @property
    def CMD_LOAD_MISSION(self):
        """Message constant 'CMD_LOAD_MISSION'."""
        return Metaclass_MissionCtrlCommand.__constants['CMD_LOAD_MISSION']


class MissionCtrlCommand(metaclass=Metaclass_MissionCtrlCommand):
    """
    Message class 'MissionCtrlCommand'.

    Constants:
      CMD_GET_STATUS
      CMD_WAIT_POS_LOCK
      CMD_WAIT_AREA_LOCK
      CMD_CONTINUE
      CMD_LOAD_MISSION
    """

    __slots__ = [
        '_description',
        '_cmd',
        '_mission_id',
    ]

    _fields_and_field_types = {
        'description': 'string',
        'cmd': 'int32',
        'mission_id': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.description = kwargs.get('description', str())
        self.cmd = kwargs.get('cmd', int())
        self.mission_id = kwargs.get('mission_id', int())

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
        if self.description != other.description:
            return False
        if self.cmd != other.cmd:
            return False
        if self.mission_id != other.mission_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def cmd(self):
        """Message field 'cmd'."""
        return self._cmd

    @cmd.setter
    def cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cmd' field must be an integer in [-2147483648, 2147483647]"
        self._cmd = value

    @builtins.property
    def mission_id(self):
        """Message field 'mission_id'."""
        return self._mission_id

    @mission_id.setter
    def mission_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mission_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mission_id' field must be an integer in [-2147483648, 2147483647]"
        self._mission_id = value
