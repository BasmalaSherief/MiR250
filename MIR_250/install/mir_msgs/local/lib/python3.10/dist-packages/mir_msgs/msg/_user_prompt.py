# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/UserPrompt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UserPrompt(type):
    """Metaclass of message 'UserPrompt'."""

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
                'mir_msgs.msg.UserPrompt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__user_prompt
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__user_prompt
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__user_prompt
            cls._TYPE_SUPPORT = module.type_support_msg__msg__user_prompt
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__user_prompt

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UserPrompt(metaclass=Metaclass_UserPrompt):
    """Message class 'UserPrompt'."""

    __slots__ = [
        '_has_request',
        '_guid',
        '_user_group',
        '_question',
        '_options',
        '_timeout',
    ]

    _fields_and_field_types = {
        'has_request': 'boolean',
        'guid': 'string',
        'user_group': 'string',
        'question': 'string',
        'options': 'sequence<string>',
        'timeout': 'builtin_interfaces/Duration',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.has_request = kwargs.get('has_request', bool())
        self.guid = kwargs.get('guid', str())
        self.user_group = kwargs.get('user_group', str())
        self.question = kwargs.get('question', str())
        self.options = kwargs.get('options', [])
        from builtin_interfaces.msg import Duration
        self.timeout = kwargs.get('timeout', Duration())

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
        if self.has_request != other.has_request:
            return False
        if self.guid != other.guid:
            return False
        if self.user_group != other.user_group:
            return False
        if self.question != other.question:
            return False
        if self.options != other.options:
            return False
        if self.timeout != other.timeout:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def has_request(self):
        """Message field 'has_request'."""
        return self._has_request

    @has_request.setter
    def has_request(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_request' field must be of type 'bool'"
        self._has_request = value

    @builtins.property
    def guid(self):
        """Message field 'guid'."""
        return self._guid

    @guid.setter
    def guid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'guid' field must be of type 'str'"
        self._guid = value

    @builtins.property
    def user_group(self):
        """Message field 'user_group'."""
        return self._user_group

    @user_group.setter
    def user_group(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'user_group' field must be of type 'str'"
        self._user_group = value

    @builtins.property
    def question(self):
        """Message field 'question'."""
        return self._question

    @question.setter
    def question(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'question' field must be of type 'str'"
        self._question = value

    @builtins.property
    def options(self):
        """Message field 'options'."""
        return self._options

    @options.setter
    def options(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'options' field must be a set or sequence and each value of type 'str'"
        self._options = value

    @builtins.property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'timeout' field must be a sub message of type 'Duration'"
        self._timeout = value
