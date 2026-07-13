# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/IOs.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IOs(type):
    """Metaclass of message 'IOs'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DONE': 0,
        'STARTED': 1,
        'ERROR': 3,
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
                'mir_msgs.msg.IOs')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__i_os
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__i_os
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__i_os
            cls._TYPE_SUPPORT = module.type_support_msg__msg__i_os
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__i_os

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DONE': cls.__constants['DONE'],
            'STARTED': cls.__constants['STARTED'],
            'ERROR': cls.__constants['ERROR'],
        }

    @property
    def DONE(self):
        """Message constant 'DONE'."""
        return Metaclass_IOs.__constants['DONE']

    @property
    def STARTED(self):
        """Message constant 'STARTED'."""
        return Metaclass_IOs.__constants['STARTED']

    @property
    def ERROR(self):
        """Message constant 'ERROR'."""
        return Metaclass_IOs.__constants['ERROR']


class IOs(metaclass=Metaclass_IOs):
    """
    Message class 'IOs'.

    Constants:
      DONE
      STARTED
      ERROR
    """

    __slots__ = [
        '_module_guid',
        '_connected',
        '_status',
        '_num_inputs',
        '_input_state',
        '_num_outputs',
        '_output_state',
        '_ip',
        '_error',
    ]

    _fields_and_field_types = {
        'module_guid': 'string',
        'connected': 'boolean',
        'status': 'uint8',
        'num_inputs': 'int8',
        'input_state': 'sequence<boolean>',
        'num_outputs': 'int8',
        'output_state': 'sequence<boolean>',
        'ip': 'string',
        'error': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.module_guid = kwargs.get('module_guid', str())
        self.connected = kwargs.get('connected', bool())
        self.status = kwargs.get('status', int())
        self.num_inputs = kwargs.get('num_inputs', int())
        self.input_state = kwargs.get('input_state', [])
        self.num_outputs = kwargs.get('num_outputs', int())
        self.output_state = kwargs.get('output_state', [])
        self.ip = kwargs.get('ip', str())
        self.error = kwargs.get('error', str())

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
        if self.module_guid != other.module_guid:
            return False
        if self.connected != other.connected:
            return False
        if self.status != other.status:
            return False
        if self.num_inputs != other.num_inputs:
            return False
        if self.input_state != other.input_state:
            return False
        if self.num_outputs != other.num_outputs:
            return False
        if self.output_state != other.output_state:
            return False
        if self.ip != other.ip:
            return False
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def module_guid(self):
        """Message field 'module_guid'."""
        return self._module_guid

    @module_guid.setter
    def module_guid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'module_guid' field must be of type 'str'"
        self._module_guid = value

    @builtins.property
    def connected(self):
        """Message field 'connected'."""
        return self._connected

    @connected.setter
    def connected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'connected' field must be of type 'bool'"
        self._connected = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @builtins.property
    def num_inputs(self):
        """Message field 'num_inputs'."""
        return self._num_inputs

    @num_inputs.setter
    def num_inputs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_inputs' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'num_inputs' field must be an integer in [-128, 127]"
        self._num_inputs = value

    @builtins.property
    def input_state(self):
        """Message field 'input_state'."""
        return self._input_state

    @input_state.setter
    def input_state(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'input_state' field must be a set or sequence and each value of type 'bool'"
        self._input_state = value

    @builtins.property
    def num_outputs(self):
        """Message field 'num_outputs'."""
        return self._num_outputs

    @num_outputs.setter
    def num_outputs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_outputs' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'num_outputs' field must be an integer in [-128, 127]"
        self._num_outputs = value

    @builtins.property
    def output_state(self):
        """Message field 'output_state'."""
        return self._output_state

    @output_state.setter
    def output_state(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'output_state' field must be a set or sequence and each value of type 'bool'"
        self._output_state = value

    @builtins.property
    def ip(self):
        """Message field 'ip'."""
        return self._ip

    @ip.setter
    def ip(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ip' field must be of type 'str'"
        self._ip = value

    @builtins.property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error' field must be of type 'str'"
        self._error = value
