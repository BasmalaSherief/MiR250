# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_actions:action/MirMoveBase.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MirMoveBase_Goal(type):
    """Metaclass of message 'MirMoveBase_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BASE_MOVE': 0,
        'GLOBAL_MOVE': 1,
        'RELATIVE_MOVE': 2,
        'RELATIVE_MARKER_MOVE': 3,
        'DOCKING_MOVE': 4,
        'DOCKING_GLOBAL_MOVE': 5,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mir_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mir_actions.action.MirMoveBase_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__mir_move_base__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__mir_move_base__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__mir_move_base__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__mir_move_base__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__mir_move_base__goal

            from geometry_msgs.msg import Pose2D
            if Pose2D.__class__._TYPE_SUPPORT is None:
                Pose2D.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

            from nav_msgs.msg import Path
            if Path.__class__._TYPE_SUPPORT is None:
                Path.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BASE_MOVE': cls.__constants['BASE_MOVE'],
            'GLOBAL_MOVE': cls.__constants['GLOBAL_MOVE'],
            'RELATIVE_MOVE': cls.__constants['RELATIVE_MOVE'],
            'RELATIVE_MARKER_MOVE': cls.__constants['RELATIVE_MARKER_MOVE'],
            'DOCKING_MOVE': cls.__constants['DOCKING_MOVE'],
            'DOCKING_GLOBAL_MOVE': cls.__constants['DOCKING_GLOBAL_MOVE'],
        }

    @property
    def BASE_MOVE(self):
        """Message constant 'BASE_MOVE'."""
        return Metaclass_MirMoveBase_Goal.__constants['BASE_MOVE']

    @property
    def GLOBAL_MOVE(self):
        """Message constant 'GLOBAL_MOVE'."""
        return Metaclass_MirMoveBase_Goal.__constants['GLOBAL_MOVE']

    @property
    def RELATIVE_MOVE(self):
        """Message constant 'RELATIVE_MOVE'."""
        return Metaclass_MirMoveBase_Goal.__constants['RELATIVE_MOVE']

    @property
    def RELATIVE_MARKER_MOVE(self):
        """Message constant 'RELATIVE_MARKER_MOVE'."""
        return Metaclass_MirMoveBase_Goal.__constants['RELATIVE_MARKER_MOVE']

    @property
    def DOCKING_MOVE(self):
        """Message constant 'DOCKING_MOVE'."""
        return Metaclass_MirMoveBase_Goal.__constants['DOCKING_MOVE']

    @property
    def DOCKING_GLOBAL_MOVE(self):
        """Message constant 'DOCKING_GLOBAL_MOVE'."""
        return Metaclass_MirMoveBase_Goal.__constants['DOCKING_GLOBAL_MOVE']


class MirMoveBase_Goal(metaclass=Metaclass_MirMoveBase_Goal):
    """
    Message class 'MirMoveBase_Goal'.

    Constants:
      BASE_MOVE
      GLOBAL_MOVE
      RELATIVE_MOVE
      RELATIVE_MARKER_MOVE
      DOCKING_MOVE
      DOCKING_GLOBAL_MOVE
    """

    __slots__ = [
        '_move_task',
        '_target_pose',
        '_goal_dist_threshold',
        '_goal_orientation_threshold',
        '_path',
        '_max_plan_time',
        '_clear_costmaps',
        '_pause_command',
        '_continue_command',
        '_yaw',
        '_collision_detection',
        '_collision_avoidance',
        '_disable_collision_check_dist',
        '_max_linear_speed',
        '_max_rotational_speed',
        '_pid_dist_offset',
        '_target_offset',
        '_only_collision_detection',
        '_timeout',
        '_pattern_type',
        '_pattern_value',
        '_only_track',
        '_same_goal',
        '_pose_frame',
        '_pose',
        '_offset',
        '_bar_length',
        '_bar_distance',
        '_shelf_leg_asymmetry_x',
        '_tolerance',
    ]

    _fields_and_field_types = {
        'move_task': 'int16',
        'target_pose': 'geometry_msgs/PoseStamped',
        'goal_dist_threshold': 'double',
        'goal_orientation_threshold': 'double',
        'path': 'nav_msgs/Path',
        'max_plan_time': 'float',
        'clear_costmaps': 'boolean',
        'pause_command': 'boolean',
        'continue_command': 'boolean',
        'yaw': 'double',
        'collision_detection': 'boolean',
        'collision_avoidance': 'boolean',
        'disable_collision_check_dist': 'double',
        'max_linear_speed': 'double',
        'max_rotational_speed': 'double',
        'pid_dist_offset': 'double',
        'target_offset': 'double',
        'only_collision_detection': 'boolean',
        'timeout': 'double',
        'pattern_type': 'int32',
        'pattern_value': 'int32',
        'only_track': 'boolean',
        'same_goal': 'boolean',
        'pose_frame': 'string',
        'pose': 'geometry_msgs/Pose2D',
        'offset': 'geometry_msgs/Pose2D',
        'bar_length': 'double',
        'bar_distance': 'double',
        'shelf_leg_asymmetry_x': 'double',
        'tolerance': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Path'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose2D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.move_task = kwargs.get('move_task', int())
        from geometry_msgs.msg import PoseStamped
        self.target_pose = kwargs.get('target_pose', PoseStamped())
        self.goal_dist_threshold = kwargs.get('goal_dist_threshold', float())
        self.goal_orientation_threshold = kwargs.get('goal_orientation_threshold', float())
        from nav_msgs.msg import Path
        self.path = kwargs.get('path', Path())
        self.max_plan_time = kwargs.get('max_plan_time', float())
        self.clear_costmaps = kwargs.get('clear_costmaps', bool())
        self.pause_command = kwargs.get('pause_command', bool())
        self.continue_command = kwargs.get('continue_command', bool())
        self.yaw = kwargs.get('yaw', float())
        self.collision_detection = kwargs.get('collision_detection', bool())
        self.collision_avoidance = kwargs.get('collision_avoidance', bool())
        self.disable_collision_check_dist = kwargs.get('disable_collision_check_dist', float())
        self.max_linear_speed = kwargs.get('max_linear_speed', float())
        self.max_rotational_speed = kwargs.get('max_rotational_speed', float())
        self.pid_dist_offset = kwargs.get('pid_dist_offset', float())
        self.target_offset = kwargs.get('target_offset', float())
        self.only_collision_detection = kwargs.get('only_collision_detection', bool())
        self.timeout = kwargs.get('timeout', float())
        self.pattern_type = kwargs.get('pattern_type', int())
        self.pattern_value = kwargs.get('pattern_value', int())
        self.only_track = kwargs.get('only_track', bool())
        self.same_goal = kwargs.get('same_goal', bool())
        self.pose_frame = kwargs.get('pose_frame', str())
        from geometry_msgs.msg import Pose2D
        self.pose = kwargs.get('pose', Pose2D())
        from geometry_msgs.msg import Pose2D
        self.offset = kwargs.get('offset', Pose2D())
        self.bar_length = kwargs.get('bar_length', float())
        self.bar_distance = kwargs.get('bar_distance', float())
        self.shelf_leg_asymmetry_x = kwargs.get('shelf_leg_asymmetry_x', float())
        self.tolerance = kwargs.get('tolerance', float())

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
        if self.move_task != other.move_task:
            return False
        if self.target_pose != other.target_pose:
            return False
        if self.goal_dist_threshold != other.goal_dist_threshold:
            return False
        if self.goal_orientation_threshold != other.goal_orientation_threshold:
            return False
        if self.path != other.path:
            return False
        if self.max_plan_time != other.max_plan_time:
            return False
        if self.clear_costmaps != other.clear_costmaps:
            return False
        if self.pause_command != other.pause_command:
            return False
        if self.continue_command != other.continue_command:
            return False
        if self.yaw != other.yaw:
            return False
        if self.collision_detection != other.collision_detection:
            return False
        if self.collision_avoidance != other.collision_avoidance:
            return False
        if self.disable_collision_check_dist != other.disable_collision_check_dist:
            return False
        if self.max_linear_speed != other.max_linear_speed:
            return False
        if self.max_rotational_speed != other.max_rotational_speed:
            return False
        if self.pid_dist_offset != other.pid_dist_offset:
            return False
        if self.target_offset != other.target_offset:
            return False
        if self.only_collision_detection != other.only_collision_detection:
            return False
        if self.timeout != other.timeout:
            return False
        if self.pattern_type != other.pattern_type:
            return False
        if self.pattern_value != other.pattern_value:
            return False
        if self.only_track != other.only_track:
            return False
        if self.same_goal != other.same_goal:
            return False
        if self.pose_frame != other.pose_frame:
            return False
        if self.pose != other.pose:
            return False
        if self.offset != other.offset:
            return False
        if self.bar_length != other.bar_length:
            return False
        if self.bar_distance != other.bar_distance:
            return False
        if self.shelf_leg_asymmetry_x != other.shelf_leg_asymmetry_x:
            return False
        if self.tolerance != other.tolerance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def move_task(self):
        """Message field 'move_task'."""
        return self._move_task

    @move_task.setter
    def move_task(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'move_task' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'move_task' field must be an integer in [-32768, 32767]"
        self._move_task = value

    @builtins.property
    def target_pose(self):
        """Message field 'target_pose'."""
        return self._target_pose

    @target_pose.setter
    def target_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'target_pose' field must be a sub message of type 'PoseStamped'"
        self._target_pose = value

    @builtins.property
    def goal_dist_threshold(self):
        """Message field 'goal_dist_threshold'."""
        return self._goal_dist_threshold

    @goal_dist_threshold.setter
    def goal_dist_threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_dist_threshold' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'goal_dist_threshold' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._goal_dist_threshold = value

    @builtins.property
    def goal_orientation_threshold(self):
        """Message field 'goal_orientation_threshold'."""
        return self._goal_orientation_threshold

    @goal_orientation_threshold.setter
    def goal_orientation_threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_orientation_threshold' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'goal_orientation_threshold' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._goal_orientation_threshold = value

    @builtins.property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if __debug__:
            from nav_msgs.msg import Path
            assert \
                isinstance(value, Path), \
                "The 'path' field must be a sub message of type 'Path'"
        self._path = value

    @builtins.property
    def max_plan_time(self):
        """Message field 'max_plan_time'."""
        return self._max_plan_time

    @max_plan_time.setter
    def max_plan_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_plan_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_plan_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_plan_time = value

    @builtins.property
    def clear_costmaps(self):
        """Message field 'clear_costmaps'."""
        return self._clear_costmaps

    @clear_costmaps.setter
    def clear_costmaps(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'clear_costmaps' field must be of type 'bool'"
        self._clear_costmaps = value

    @builtins.property
    def pause_command(self):
        """Message field 'pause_command'."""
        return self._pause_command

    @pause_command.setter
    def pause_command(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pause_command' field must be of type 'bool'"
        self._pause_command = value

    @builtins.property
    def continue_command(self):
        """Message field 'continue_command'."""
        return self._continue_command

    @continue_command.setter
    def continue_command(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'continue_command' field must be of type 'bool'"
        self._continue_command = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw = value

    @builtins.property
    def collision_detection(self):
        """Message field 'collision_detection'."""
        return self._collision_detection

    @collision_detection.setter
    def collision_detection(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'collision_detection' field must be of type 'bool'"
        self._collision_detection = value

    @builtins.property
    def collision_avoidance(self):
        """Message field 'collision_avoidance'."""
        return self._collision_avoidance

    @collision_avoidance.setter
    def collision_avoidance(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'collision_avoidance' field must be of type 'bool'"
        self._collision_avoidance = value

    @builtins.property
    def disable_collision_check_dist(self):
        """Message field 'disable_collision_check_dist'."""
        return self._disable_collision_check_dist

    @disable_collision_check_dist.setter
    def disable_collision_check_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'disable_collision_check_dist' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'disable_collision_check_dist' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._disable_collision_check_dist = value

    @builtins.property
    def max_linear_speed(self):
        """Message field 'max_linear_speed'."""
        return self._max_linear_speed

    @max_linear_speed.setter
    def max_linear_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_linear_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_linear_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_linear_speed = value

    @builtins.property
    def max_rotational_speed(self):
        """Message field 'max_rotational_speed'."""
        return self._max_rotational_speed

    @max_rotational_speed.setter
    def max_rotational_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_rotational_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_rotational_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_rotational_speed = value

    @builtins.property
    def pid_dist_offset(self):
        """Message field 'pid_dist_offset'."""
        return self._pid_dist_offset

    @pid_dist_offset.setter
    def pid_dist_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pid_dist_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pid_dist_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pid_dist_offset = value

    @builtins.property
    def target_offset(self):
        """Message field 'target_offset'."""
        return self._target_offset

    @target_offset.setter
    def target_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_offset = value

    @builtins.property
    def only_collision_detection(self):
        """Message field 'only_collision_detection'."""
        return self._only_collision_detection

    @only_collision_detection.setter
    def only_collision_detection(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'only_collision_detection' field must be of type 'bool'"
        self._only_collision_detection = value

    @builtins.property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timeout' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'timeout' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._timeout = value

    @builtins.property
    def pattern_type(self):
        """Message field 'pattern_type'."""
        return self._pattern_type

    @pattern_type.setter
    def pattern_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pattern_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pattern_type' field must be an integer in [-2147483648, 2147483647]"
        self._pattern_type = value

    @builtins.property
    def pattern_value(self):
        """Message field 'pattern_value'."""
        return self._pattern_value

    @pattern_value.setter
    def pattern_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pattern_value' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pattern_value' field must be an integer in [-2147483648, 2147483647]"
        self._pattern_value = value

    @builtins.property
    def only_track(self):
        """Message field 'only_track'."""
        return self._only_track

    @only_track.setter
    def only_track(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'only_track' field must be of type 'bool'"
        self._only_track = value

    @builtins.property
    def same_goal(self):
        """Message field 'same_goal'."""
        return self._same_goal

    @same_goal.setter
    def same_goal(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'same_goal' field must be of type 'bool'"
        self._same_goal = value

    @builtins.property
    def pose_frame(self):
        """Message field 'pose_frame'."""
        return self._pose_frame

    @pose_frame.setter
    def pose_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pose_frame' field must be of type 'str'"
        self._pose_frame = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose2D
            assert \
                isinstance(value, Pose2D), \
                "The 'pose' field must be a sub message of type 'Pose2D'"
        self._pose = value

    @builtins.property
    def offset(self):
        """Message field 'offset'."""
        return self._offset

    @offset.setter
    def offset(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose2D
            assert \
                isinstance(value, Pose2D), \
                "The 'offset' field must be a sub message of type 'Pose2D'"
        self._offset = value

    @builtins.property
    def bar_length(self):
        """Message field 'bar_length'."""
        return self._bar_length

    @bar_length.setter
    def bar_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bar_length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bar_length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bar_length = value

    @builtins.property
    def bar_distance(self):
        """Message field 'bar_distance'."""
        return self._bar_distance

    @bar_distance.setter
    def bar_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bar_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bar_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bar_distance = value

    @builtins.property
    def shelf_leg_asymmetry_x(self):
        """Message field 'shelf_leg_asymmetry_x'."""
        return self._shelf_leg_asymmetry_x

    @shelf_leg_asymmetry_x.setter
    def shelf_leg_asymmetry_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'shelf_leg_asymmetry_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'shelf_leg_asymmetry_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._shelf_leg_asymmetry_x = value

    @builtins.property
    def tolerance(self):
        """Message field 'tolerance'."""
        return self._tolerance

    @tolerance.setter
    def tolerance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tolerance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tolerance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tolerance = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MirMoveBase_Result(type):
    """Metaclass of message 'MirMoveBase_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNDEFINED': 0,
        'GOAL_REACHED': 1,
        'FAILED': -1,
        'MARKER_VISIBLE': 2,
        'FAILED_NO_PATH': -2,
        'FAILED_GOAL_IN_STATIC_OBSTACLE': -3,
        'FAILED_GOAL_IN_FORBIDDEN_AREA': -4,
        'FAILED_GOAL_IN_DYNAMIC_OBSTACLE': -5,
        'FAILED_ROBOT_IN_COLLISION': -6,
        'FAILED_ROBOT_IN_FORBIDDEN_AREA': -7,
        'FAILED_UNKNOWN_TRAILER': -8,
        'FAILED_TO_PASS_GLOBAL_PLAN': -9,
        'FAILED_NO_VALID_RECOVERY_CONTROL': -10,
        'FAILED_UNKNOWN_PLANNER_ERROR': -11,
        'FAILED_ROBOT_OSCILLATING': -12,
        'FAILED_SOFTWARE_ERROR': -13,
        'FAILED_TIMEOUT': -14,
        'FAILED_COLLISION': -15,
        'INVALID_GOAL': -16,
        'FAILED_MARKER_TRACKING_ERROR': -17,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mir_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mir_actions.action.MirMoveBase_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__mir_move_base__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__mir_move_base__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__mir_move_base__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__mir_move_base__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__mir_move_base__result

            from geometry_msgs.msg import Pose2D
            if Pose2D.__class__._TYPE_SUPPORT is None:
                Pose2D.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNDEFINED': cls.__constants['UNDEFINED'],
            'GOAL_REACHED': cls.__constants['GOAL_REACHED'],
            'FAILED': cls.__constants['FAILED'],
            'MARKER_VISIBLE': cls.__constants['MARKER_VISIBLE'],
            'FAILED_NO_PATH': cls.__constants['FAILED_NO_PATH'],
            'FAILED_GOAL_IN_STATIC_OBSTACLE': cls.__constants['FAILED_GOAL_IN_STATIC_OBSTACLE'],
            'FAILED_GOAL_IN_FORBIDDEN_AREA': cls.__constants['FAILED_GOAL_IN_FORBIDDEN_AREA'],
            'FAILED_GOAL_IN_DYNAMIC_OBSTACLE': cls.__constants['FAILED_GOAL_IN_DYNAMIC_OBSTACLE'],
            'FAILED_ROBOT_IN_COLLISION': cls.__constants['FAILED_ROBOT_IN_COLLISION'],
            'FAILED_ROBOT_IN_FORBIDDEN_AREA': cls.__constants['FAILED_ROBOT_IN_FORBIDDEN_AREA'],
            'FAILED_UNKNOWN_TRAILER': cls.__constants['FAILED_UNKNOWN_TRAILER'],
            'FAILED_TO_PASS_GLOBAL_PLAN': cls.__constants['FAILED_TO_PASS_GLOBAL_PLAN'],
            'FAILED_NO_VALID_RECOVERY_CONTROL': cls.__constants['FAILED_NO_VALID_RECOVERY_CONTROL'],
            'FAILED_UNKNOWN_PLANNER_ERROR': cls.__constants['FAILED_UNKNOWN_PLANNER_ERROR'],
            'FAILED_ROBOT_OSCILLATING': cls.__constants['FAILED_ROBOT_OSCILLATING'],
            'FAILED_SOFTWARE_ERROR': cls.__constants['FAILED_SOFTWARE_ERROR'],
            'FAILED_TIMEOUT': cls.__constants['FAILED_TIMEOUT'],
            'FAILED_COLLISION': cls.__constants['FAILED_COLLISION'],
            'INVALID_GOAL': cls.__constants['INVALID_GOAL'],
            'FAILED_MARKER_TRACKING_ERROR': cls.__constants['FAILED_MARKER_TRACKING_ERROR'],
        }

    @property
    def UNDEFINED(self):
        """Message constant 'UNDEFINED'."""
        return Metaclass_MirMoveBase_Result.__constants['UNDEFINED']

    @property
    def GOAL_REACHED(self):
        """Message constant 'GOAL_REACHED'."""
        return Metaclass_MirMoveBase_Result.__constants['GOAL_REACHED']

    @property
    def FAILED(self):
        """Message constant 'FAILED'."""
        return Metaclass_MirMoveBase_Result.__constants['FAILED']

    @property
    def MARKER_VISIBLE(self):
        """Message constant 'MARKER_VISIBLE'."""
        return Metaclass_MirMoveBase_Result.__constants['MARKER_VISIBLE']

    @property
    def FAILED_NO_PATH(self):
        """Message constant 'FAILED_NO_PATH'."""
        return Metaclass_MirMoveBase_Result.__constants['FAILED_NO_PATH']

    @property
    def FAILED_GOAL_IN_STATIC_OBSTACLE(self):
        """Message constant 'FAILED_GOAL_IN_STATIC_OBSTACLE'."""
        return Metaclass_MirMoveBase_Result.__constants['FAILED_GOAL_IN_STATIC_OBSTACLE']

    @property
    def FAILED_GOAL_IN_FORBIDDEN_AREA(self):
        """Message constant 'FAILED_GOAL_IN_FORBIDDEN_AREA'."""
        return Metaclass_MirMoveBase_Result.__constants['FAILED_GOAL_IN_FORBIDDEN_AREA']

    @property
    def FAILED_GOAL_IN_DYNAMIC_OBSTACLE(self):
        """Message constant 'FAILED_GOAL_IN_DYNAMIC_OBSTACLE'."""
        return Metaclass_MirMoveBase_Result.__constants['FAILED_GOAL_IN_DYNAMIC_OBSTACLE']

    @property
    def FAILED_ROBOT_IN_COLLISION(self):
        """Message constant 'FAILED_ROBOT_IN_COLLISION'."""
        return Metaclass_MirMoveBase_Result.__constants['FAILED_ROBOT_IN_COLLISION']

    @property
    def FAILED_ROBOT_IN_FORBIDDEN_AREA(self):
        """Message constant 'FAILED_ROBOT_IN_FORBIDDEN_AREA'."""
        return Metaclass_MirMoveBase_Result.__constants['FAILED_ROBOT_IN_FORBIDDEN_AREA']

    @property
    def FAILED_UNKNOWN_TRAILER(self):
        """Message constant 'FAILED_UNKNOWN_TRAILER'."""
        return Metaclass_MirMoveBase_Result.__constants['FAILED_UNKNOWN_TRAILER']

    @property
    def FAILED_TO_PASS_GLOBAL_PLAN(self):
        """Message constant 'FAILED_TO_PASS_GLOBAL_PLAN'."""
        return Metaclass_MirMoveBase_Result.__constants['FAILED_TO_PASS_GLOBAL_PLAN']

    @property
    def FAILED_NO_VALID_RECOVERY_CONTROL(self):
        """Message constant 'FAILED_NO_VALID_RECOVERY_CONTROL'."""
        return Metaclass_MirMoveBase_Result.__constants['FAILED_NO_VALID_RECOVERY_CONTROL']

    @property
    def FAILED_UNKNOWN_PLANNER_ERROR(self):
        """Message constant 'FAILED_UNKNOWN_PLANNER_ERROR'."""
        return Metaclass_MirMoveBase_Result.__constants['FAILED_UNKNOWN_PLANNER_ERROR']

    @property
    def FAILED_ROBOT_OSCILLATING(self):
        """Message constant 'FAILED_ROBOT_OSCILLATING'."""
        return Metaclass_MirMoveBase_Result.__constants['FAILED_ROBOT_OSCILLATING']

    @property
    def FAILED_SOFTWARE_ERROR(self):
        """Message constant 'FAILED_SOFTWARE_ERROR'."""
        return Metaclass_MirMoveBase_Result.__constants['FAILED_SOFTWARE_ERROR']

    @property
    def FAILED_TIMEOUT(self):
        """Message constant 'FAILED_TIMEOUT'."""
        return Metaclass_MirMoveBase_Result.__constants['FAILED_TIMEOUT']

    @property
    def FAILED_COLLISION(self):
        """Message constant 'FAILED_COLLISION'."""
        return Metaclass_MirMoveBase_Result.__constants['FAILED_COLLISION']

    @property
    def INVALID_GOAL(self):
        """Message constant 'INVALID_GOAL'."""
        return Metaclass_MirMoveBase_Result.__constants['INVALID_GOAL']

    @property
    def FAILED_MARKER_TRACKING_ERROR(self):
        """Message constant 'FAILED_MARKER_TRACKING_ERROR'."""
        return Metaclass_MirMoveBase_Result.__constants['FAILED_MARKER_TRACKING_ERROR']


class MirMoveBase_Result(metaclass=Metaclass_MirMoveBase_Result):
    """
    Message class 'MirMoveBase_Result'.

    Constants:
      UNDEFINED
      GOAL_REACHED
      FAILED
      MARKER_VISIBLE
      FAILED_NO_PATH
      FAILED_GOAL_IN_STATIC_OBSTACLE
      FAILED_GOAL_IN_FORBIDDEN_AREA
      FAILED_GOAL_IN_DYNAMIC_OBSTACLE
      FAILED_ROBOT_IN_COLLISION
      FAILED_ROBOT_IN_FORBIDDEN_AREA
      FAILED_UNKNOWN_TRAILER
      FAILED_TO_PASS_GLOBAL_PLAN
      FAILED_NO_VALID_RECOVERY_CONTROL
      FAILED_UNKNOWN_PLANNER_ERROR
      FAILED_ROBOT_OSCILLATING
      FAILED_SOFTWARE_ERROR
      FAILED_TIMEOUT
      FAILED_COLLISION
      INVALID_GOAL
      FAILED_MARKER_TRACKING_ERROR
    """

    __slots__ = [
        '_end_state',
        '_end_pose',
        '_pose',
        '_message',
    ]

    _fields_and_field_types = {
        'end_state': 'int16',
        'end_pose': 'geometry_msgs/PoseStamped',
        'pose': 'geometry_msgs/Pose2D',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose2D'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.end_state = kwargs.get('end_state', int())
        from geometry_msgs.msg import PoseStamped
        self.end_pose = kwargs.get('end_pose', PoseStamped())
        from geometry_msgs.msg import Pose2D
        self.pose = kwargs.get('pose', Pose2D())
        self.message = kwargs.get('message', str())

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
        if self.end_state != other.end_state:
            return False
        if self.end_pose != other.end_pose:
            return False
        if self.pose != other.pose:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def end_state(self):
        """Message field 'end_state'."""
        return self._end_state

    @end_state.setter
    def end_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'end_state' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'end_state' field must be an integer in [-32768, 32767]"
        self._end_state = value

    @builtins.property
    def end_pose(self):
        """Message field 'end_pose'."""
        return self._end_pose

    @end_pose.setter
    def end_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'end_pose' field must be a sub message of type 'PoseStamped'"
        self._end_pose = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose2D
            assert \
                isinstance(value, Pose2D), \
                "The 'pose' field must be a sub message of type 'Pose2D'"
        self._pose = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MirMoveBase_Feedback(type):
    """Metaclass of message 'MirMoveBase_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NOT_READY': -1,
        'PLANNING': 0,
        'CONTROLLING': 1,
        'CLEARING': 2,
        'DOCKING': 3,
        'COLLISION': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mir_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mir_actions.action.MirMoveBase_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__mir_move_base__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__mir_move_base__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__mir_move_base__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__mir_move_base__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__mir_move_base__feedback

            from geometry_msgs.msg import Pose2D
            if Pose2D.__class__._TYPE_SUPPORT is None:
                Pose2D.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NOT_READY': cls.__constants['NOT_READY'],
            'PLANNING': cls.__constants['PLANNING'],
            'CONTROLLING': cls.__constants['CONTROLLING'],
            'CLEARING': cls.__constants['CLEARING'],
            'DOCKING': cls.__constants['DOCKING'],
            'COLLISION': cls.__constants['COLLISION'],
        }

    @property
    def NOT_READY(self):
        """Message constant 'NOT_READY'."""
        return Metaclass_MirMoveBase_Feedback.__constants['NOT_READY']

    @property
    def PLANNING(self):
        """Message constant 'PLANNING'."""
        return Metaclass_MirMoveBase_Feedback.__constants['PLANNING']

    @property
    def CONTROLLING(self):
        """Message constant 'CONTROLLING'."""
        return Metaclass_MirMoveBase_Feedback.__constants['CONTROLLING']

    @property
    def CLEARING(self):
        """Message constant 'CLEARING'."""
        return Metaclass_MirMoveBase_Feedback.__constants['CLEARING']

    @property
    def DOCKING(self):
        """Message constant 'DOCKING'."""
        return Metaclass_MirMoveBase_Feedback.__constants['DOCKING']

    @property
    def COLLISION(self):
        """Message constant 'COLLISION'."""
        return Metaclass_MirMoveBase_Feedback.__constants['COLLISION']


class MirMoveBase_Feedback(metaclass=Metaclass_MirMoveBase_Feedback):
    """
    Message class 'MirMoveBase_Feedback'.

    Constants:
      NOT_READY
      PLANNING
      CONTROLLING
      CLEARING
      DOCKING
      COLLISION
    """

    __slots__ = [
        '_state',
        '_base_position',
        '_current_goal',
        '_dist_to_goal',
        '_pose',
        '_marker_inversion',
    ]

    _fields_and_field_types = {
        'state': 'int8',
        'base_position': 'geometry_msgs/PoseStamped',
        'current_goal': 'geometry_msgs/PoseStamped',
        'dist_to_goal': 'geometry_msgs/PoseStamped',
        'pose': 'geometry_msgs/Pose2D',
        'marker_inversion': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose2D'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state = kwargs.get('state', int())
        from geometry_msgs.msg import PoseStamped
        self.base_position = kwargs.get('base_position', PoseStamped())
        from geometry_msgs.msg import PoseStamped
        self.current_goal = kwargs.get('current_goal', PoseStamped())
        from geometry_msgs.msg import PoseStamped
        self.dist_to_goal = kwargs.get('dist_to_goal', PoseStamped())
        from geometry_msgs.msg import Pose2D
        self.pose = kwargs.get('pose', Pose2D())
        self.marker_inversion = kwargs.get('marker_inversion', bool())

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
        if self.state != other.state:
            return False
        if self.base_position != other.base_position:
            return False
        if self.current_goal != other.current_goal:
            return False
        if self.dist_to_goal != other.dist_to_goal:
            return False
        if self.pose != other.pose:
            return False
        if self.marker_inversion != other.marker_inversion:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'state' field must be an integer in [-128, 127]"
        self._state = value

    @builtins.property
    def base_position(self):
        """Message field 'base_position'."""
        return self._base_position

    @base_position.setter
    def base_position(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'base_position' field must be a sub message of type 'PoseStamped'"
        self._base_position = value

    @builtins.property
    def current_goal(self):
        """Message field 'current_goal'."""
        return self._current_goal

    @current_goal.setter
    def current_goal(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'current_goal' field must be a sub message of type 'PoseStamped'"
        self._current_goal = value

    @builtins.property
    def dist_to_goal(self):
        """Message field 'dist_to_goal'."""
        return self._dist_to_goal

    @dist_to_goal.setter
    def dist_to_goal(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'dist_to_goal' field must be a sub message of type 'PoseStamped'"
        self._dist_to_goal = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose2D
            assert \
                isinstance(value, Pose2D), \
                "The 'pose' field must be a sub message of type 'Pose2D'"
        self._pose = value

    @builtins.property
    def marker_inversion(self):
        """Message field 'marker_inversion'."""
        return self._marker_inversion

    @marker_inversion.setter
    def marker_inversion(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'marker_inversion' field must be of type 'bool'"
        self._marker_inversion = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MirMoveBase_SendGoal_Request(type):
    """Metaclass of message 'MirMoveBase_SendGoal_Request'."""

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
            module = import_type_support('mir_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mir_actions.action.MirMoveBase_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__mir_move_base__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__mir_move_base__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__mir_move_base__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__mir_move_base__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__mir_move_base__send_goal__request

            from mir_actions.action import MirMoveBase
            if MirMoveBase.Goal.__class__._TYPE_SUPPORT is None:
                MirMoveBase.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MirMoveBase_SendGoal_Request(metaclass=Metaclass_MirMoveBase_SendGoal_Request):
    """Message class 'MirMoveBase_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'mir_actions/MirMoveBase_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mir_actions', 'action'], 'MirMoveBase_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from mir_actions.action._mir_move_base import MirMoveBase_Goal
        self.goal = kwargs.get('goal', MirMoveBase_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from mir_actions.action._mir_move_base import MirMoveBase_Goal
            assert \
                isinstance(value, MirMoveBase_Goal), \
                "The 'goal' field must be a sub message of type 'MirMoveBase_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MirMoveBase_SendGoal_Response(type):
    """Metaclass of message 'MirMoveBase_SendGoal_Response'."""

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
            module = import_type_support('mir_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mir_actions.action.MirMoveBase_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__mir_move_base__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__mir_move_base__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__mir_move_base__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__mir_move_base__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__mir_move_base__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MirMoveBase_SendGoal_Response(metaclass=Metaclass_MirMoveBase_SendGoal_Response):
    """Message class 'MirMoveBase_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_MirMoveBase_SendGoal(type):
    """Metaclass of service 'MirMoveBase_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mir_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mir_actions.action.MirMoveBase_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__mir_move_base__send_goal

            from mir_actions.action import _mir_move_base
            if _mir_move_base.Metaclass_MirMoveBase_SendGoal_Request._TYPE_SUPPORT is None:
                _mir_move_base.Metaclass_MirMoveBase_SendGoal_Request.__import_type_support__()
            if _mir_move_base.Metaclass_MirMoveBase_SendGoal_Response._TYPE_SUPPORT is None:
                _mir_move_base.Metaclass_MirMoveBase_SendGoal_Response.__import_type_support__()


class MirMoveBase_SendGoal(metaclass=Metaclass_MirMoveBase_SendGoal):
    from mir_actions.action._mir_move_base import MirMoveBase_SendGoal_Request as Request
    from mir_actions.action._mir_move_base import MirMoveBase_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MirMoveBase_GetResult_Request(type):
    """Metaclass of message 'MirMoveBase_GetResult_Request'."""

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
            module = import_type_support('mir_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mir_actions.action.MirMoveBase_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__mir_move_base__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__mir_move_base__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__mir_move_base__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__mir_move_base__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__mir_move_base__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MirMoveBase_GetResult_Request(metaclass=Metaclass_MirMoveBase_GetResult_Request):
    """Message class 'MirMoveBase_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MirMoveBase_GetResult_Response(type):
    """Metaclass of message 'MirMoveBase_GetResult_Response'."""

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
            module = import_type_support('mir_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mir_actions.action.MirMoveBase_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__mir_move_base__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__mir_move_base__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__mir_move_base__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__mir_move_base__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__mir_move_base__get_result__response

            from mir_actions.action import MirMoveBase
            if MirMoveBase.Result.__class__._TYPE_SUPPORT is None:
                MirMoveBase.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MirMoveBase_GetResult_Response(metaclass=Metaclass_MirMoveBase_GetResult_Response):
    """Message class 'MirMoveBase_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'mir_actions/MirMoveBase_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mir_actions', 'action'], 'MirMoveBase_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from mir_actions.action._mir_move_base import MirMoveBase_Result
        self.result = kwargs.get('result', MirMoveBase_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from mir_actions.action._mir_move_base import MirMoveBase_Result
            assert \
                isinstance(value, MirMoveBase_Result), \
                "The 'result' field must be a sub message of type 'MirMoveBase_Result'"
        self._result = value


class Metaclass_MirMoveBase_GetResult(type):
    """Metaclass of service 'MirMoveBase_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mir_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mir_actions.action.MirMoveBase_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__mir_move_base__get_result

            from mir_actions.action import _mir_move_base
            if _mir_move_base.Metaclass_MirMoveBase_GetResult_Request._TYPE_SUPPORT is None:
                _mir_move_base.Metaclass_MirMoveBase_GetResult_Request.__import_type_support__()
            if _mir_move_base.Metaclass_MirMoveBase_GetResult_Response._TYPE_SUPPORT is None:
                _mir_move_base.Metaclass_MirMoveBase_GetResult_Response.__import_type_support__()


class MirMoveBase_GetResult(metaclass=Metaclass_MirMoveBase_GetResult):
    from mir_actions.action._mir_move_base import MirMoveBase_GetResult_Request as Request
    from mir_actions.action._mir_move_base import MirMoveBase_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MirMoveBase_FeedbackMessage(type):
    """Metaclass of message 'MirMoveBase_FeedbackMessage'."""

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
            module = import_type_support('mir_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mir_actions.action.MirMoveBase_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__mir_move_base__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__mir_move_base__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__mir_move_base__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__mir_move_base__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__mir_move_base__feedback_message

            from mir_actions.action import MirMoveBase
            if MirMoveBase.Feedback.__class__._TYPE_SUPPORT is None:
                MirMoveBase.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MirMoveBase_FeedbackMessage(metaclass=Metaclass_MirMoveBase_FeedbackMessage):
    """Message class 'MirMoveBase_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'mir_actions/MirMoveBase_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mir_actions', 'action'], 'MirMoveBase_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from mir_actions.action._mir_move_base import MirMoveBase_Feedback
        self.feedback = kwargs.get('feedback', MirMoveBase_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from mir_actions.action._mir_move_base import MirMoveBase_Feedback
            assert \
                isinstance(value, MirMoveBase_Feedback), \
                "The 'feedback' field must be a sub message of type 'MirMoveBase_Feedback'"
        self._feedback = value


class Metaclass_MirMoveBase(type):
    """Metaclass of action 'MirMoveBase'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mir_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mir_actions.action.MirMoveBase')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__mir_move_base

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from mir_actions.action import _mir_move_base
            if _mir_move_base.Metaclass_MirMoveBase_SendGoal._TYPE_SUPPORT is None:
                _mir_move_base.Metaclass_MirMoveBase_SendGoal.__import_type_support__()
            if _mir_move_base.Metaclass_MirMoveBase_GetResult._TYPE_SUPPORT is None:
                _mir_move_base.Metaclass_MirMoveBase_GetResult.__import_type_support__()
            if _mir_move_base.Metaclass_MirMoveBase_FeedbackMessage._TYPE_SUPPORT is None:
                _mir_move_base.Metaclass_MirMoveBase_FeedbackMessage.__import_type_support__()


class MirMoveBase(metaclass=Metaclass_MirMoveBase):

    # The goal message defined in the action definition.
    from mir_actions.action._mir_move_base import MirMoveBase_Goal as Goal
    # The result message defined in the action definition.
    from mir_actions.action._mir_move_base import MirMoveBase_Result as Result
    # The feedback message defined in the action definition.
    from mir_actions.action._mir_move_base import MirMoveBase_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from mir_actions.action._mir_move_base import MirMoveBase_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from mir_actions.action._mir_move_base import MirMoveBase_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from mir_actions.action._mir_move_base import MirMoveBase_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
