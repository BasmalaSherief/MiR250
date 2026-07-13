// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_actions:action/MirMoveBase.idl
// generated code does not contain a copyright notice

#ifndef MIR_ACTIONS__ACTION__DETAIL__MIR_MOVE_BASE__STRUCT_HPP_
#define MIR_ACTIONS__ACTION__DETAIL__MIR_MOVE_BASE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.hpp"
// Member 'pose'
// Member 'offset'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_actions__action__MirMoveBase_Goal __attribute__((deprecated))
#else
# define DEPRECATED__mir_actions__action__MirMoveBase_Goal __declspec(deprecated)
#endif

namespace mir_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MirMoveBase_Goal_
{
  using Type = MirMoveBase_Goal_<ContainerAllocator>;

  explicit MirMoveBase_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_init),
    path(_init),
    pose(_init),
    offset(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->move_task = 0;
      this->goal_dist_threshold = 0.0;
      this->goal_orientation_threshold = 0.0;
      this->max_plan_time = 0.0f;
      this->clear_costmaps = false;
      this->pause_command = false;
      this->continue_command = false;
      this->yaw = 0.0;
      this->collision_detection = false;
      this->collision_avoidance = false;
      this->disable_collision_check_dist = 0.0;
      this->max_linear_speed = 0.0;
      this->max_rotational_speed = 0.0;
      this->pid_dist_offset = 0.0;
      this->target_offset = 0.0;
      this->only_collision_detection = false;
      this->timeout = 0.0;
      this->pattern_type = 0l;
      this->pattern_value = 0l;
      this->only_track = false;
      this->same_goal = false;
      this->pose_frame = "";
      this->bar_length = 0.0;
      this->bar_distance = 0.0;
      this->shelf_leg_asymmetry_x = 0.0;
      this->tolerance = 0.0;
    }
  }

  explicit MirMoveBase_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_alloc, _init),
    path(_alloc, _init),
    pose_frame(_alloc),
    pose(_alloc, _init),
    offset(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->move_task = 0;
      this->goal_dist_threshold = 0.0;
      this->goal_orientation_threshold = 0.0;
      this->max_plan_time = 0.0f;
      this->clear_costmaps = false;
      this->pause_command = false;
      this->continue_command = false;
      this->yaw = 0.0;
      this->collision_detection = false;
      this->collision_avoidance = false;
      this->disable_collision_check_dist = 0.0;
      this->max_linear_speed = 0.0;
      this->max_rotational_speed = 0.0;
      this->pid_dist_offset = 0.0;
      this->target_offset = 0.0;
      this->only_collision_detection = false;
      this->timeout = 0.0;
      this->pattern_type = 0l;
      this->pattern_value = 0l;
      this->only_track = false;
      this->same_goal = false;
      this->pose_frame = "";
      this->bar_length = 0.0;
      this->bar_distance = 0.0;
      this->shelf_leg_asymmetry_x = 0.0;
      this->tolerance = 0.0;
    }
  }

  // field types and members
  using _move_task_type =
    int16_t;
  _move_task_type move_task;
  using _target_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _target_pose_type target_pose;
  using _goal_dist_threshold_type =
    double;
  _goal_dist_threshold_type goal_dist_threshold;
  using _goal_orientation_threshold_type =
    double;
  _goal_orientation_threshold_type goal_orientation_threshold;
  using _path_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _path_type path;
  using _max_plan_time_type =
    float;
  _max_plan_time_type max_plan_time;
  using _clear_costmaps_type =
    bool;
  _clear_costmaps_type clear_costmaps;
  using _pause_command_type =
    bool;
  _pause_command_type pause_command;
  using _continue_command_type =
    bool;
  _continue_command_type continue_command;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _collision_detection_type =
    bool;
  _collision_detection_type collision_detection;
  using _collision_avoidance_type =
    bool;
  _collision_avoidance_type collision_avoidance;
  using _disable_collision_check_dist_type =
    double;
  _disable_collision_check_dist_type disable_collision_check_dist;
  using _max_linear_speed_type =
    double;
  _max_linear_speed_type max_linear_speed;
  using _max_rotational_speed_type =
    double;
  _max_rotational_speed_type max_rotational_speed;
  using _pid_dist_offset_type =
    double;
  _pid_dist_offset_type pid_dist_offset;
  using _target_offset_type =
    double;
  _target_offset_type target_offset;
  using _only_collision_detection_type =
    bool;
  _only_collision_detection_type only_collision_detection;
  using _timeout_type =
    double;
  _timeout_type timeout;
  using _pattern_type_type =
    int32_t;
  _pattern_type_type pattern_type;
  using _pattern_value_type =
    int32_t;
  _pattern_value_type pattern_value;
  using _only_track_type =
    bool;
  _only_track_type only_track;
  using _same_goal_type =
    bool;
  _same_goal_type same_goal;
  using _pose_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pose_frame_type pose_frame;
  using _pose_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _pose_type pose;
  using _offset_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _offset_type offset;
  using _bar_length_type =
    double;
  _bar_length_type bar_length;
  using _bar_distance_type =
    double;
  _bar_distance_type bar_distance;
  using _shelf_leg_asymmetry_x_type =
    double;
  _shelf_leg_asymmetry_x_type shelf_leg_asymmetry_x;
  using _tolerance_type =
    double;
  _tolerance_type tolerance;

  // setters for named parameter idiom
  Type & set__move_task(
    const int16_t & _arg)
  {
    this->move_task = _arg;
    return *this;
  }
  Type & set__target_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->target_pose = _arg;
    return *this;
  }
  Type & set__goal_dist_threshold(
    const double & _arg)
  {
    this->goal_dist_threshold = _arg;
    return *this;
  }
  Type & set__goal_orientation_threshold(
    const double & _arg)
  {
    this->goal_orientation_threshold = _arg;
    return *this;
  }
  Type & set__path(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__max_plan_time(
    const float & _arg)
  {
    this->max_plan_time = _arg;
    return *this;
  }
  Type & set__clear_costmaps(
    const bool & _arg)
  {
    this->clear_costmaps = _arg;
    return *this;
  }
  Type & set__pause_command(
    const bool & _arg)
  {
    this->pause_command = _arg;
    return *this;
  }
  Type & set__continue_command(
    const bool & _arg)
  {
    this->continue_command = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__collision_detection(
    const bool & _arg)
  {
    this->collision_detection = _arg;
    return *this;
  }
  Type & set__collision_avoidance(
    const bool & _arg)
  {
    this->collision_avoidance = _arg;
    return *this;
  }
  Type & set__disable_collision_check_dist(
    const double & _arg)
  {
    this->disable_collision_check_dist = _arg;
    return *this;
  }
  Type & set__max_linear_speed(
    const double & _arg)
  {
    this->max_linear_speed = _arg;
    return *this;
  }
  Type & set__max_rotational_speed(
    const double & _arg)
  {
    this->max_rotational_speed = _arg;
    return *this;
  }
  Type & set__pid_dist_offset(
    const double & _arg)
  {
    this->pid_dist_offset = _arg;
    return *this;
  }
  Type & set__target_offset(
    const double & _arg)
  {
    this->target_offset = _arg;
    return *this;
  }
  Type & set__only_collision_detection(
    const bool & _arg)
  {
    this->only_collision_detection = _arg;
    return *this;
  }
  Type & set__timeout(
    const double & _arg)
  {
    this->timeout = _arg;
    return *this;
  }
  Type & set__pattern_type(
    const int32_t & _arg)
  {
    this->pattern_type = _arg;
    return *this;
  }
  Type & set__pattern_value(
    const int32_t & _arg)
  {
    this->pattern_value = _arg;
    return *this;
  }
  Type & set__only_track(
    const bool & _arg)
  {
    this->only_track = _arg;
    return *this;
  }
  Type & set__same_goal(
    const bool & _arg)
  {
    this->same_goal = _arg;
    return *this;
  }
  Type & set__pose_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pose_frame = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__offset(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__bar_length(
    const double & _arg)
  {
    this->bar_length = _arg;
    return *this;
  }
  Type & set__bar_distance(
    const double & _arg)
  {
    this->bar_distance = _arg;
    return *this;
  }
  Type & set__shelf_leg_asymmetry_x(
    const double & _arg)
  {
    this->shelf_leg_asymmetry_x = _arg;
    return *this;
  }
  Type & set__tolerance(
    const double & _arg)
  {
    this->tolerance = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t BASE_MOVE =
    0;
  static constexpr int16_t GLOBAL_MOVE =
    1;
  static constexpr int16_t RELATIVE_MOVE =
    2;
  static constexpr int16_t RELATIVE_MARKER_MOVE =
    3;
  static constexpr int16_t DOCKING_MOVE =
    4;
  static constexpr int16_t DOCKING_GLOBAL_MOVE =
    5;

  // pointer types
  using RawPtr =
    mir_actions::action::MirMoveBase_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_actions::action::MirMoveBase_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_actions::action::MirMoveBase_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_actions::action::MirMoveBase_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_actions::action::MirMoveBase_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_actions::action::MirMoveBase_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_actions::action::MirMoveBase_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_actions::action::MirMoveBase_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_actions::action::MirMoveBase_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_actions::action::MirMoveBase_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_actions__action__MirMoveBase_Goal
    std::shared_ptr<mir_actions::action::MirMoveBase_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_actions__action__MirMoveBase_Goal
    std::shared_ptr<mir_actions::action::MirMoveBase_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MirMoveBase_Goal_ & other) const
  {
    if (this->move_task != other.move_task) {
      return false;
    }
    if (this->target_pose != other.target_pose) {
      return false;
    }
    if (this->goal_dist_threshold != other.goal_dist_threshold) {
      return false;
    }
    if (this->goal_orientation_threshold != other.goal_orientation_threshold) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    if (this->max_plan_time != other.max_plan_time) {
      return false;
    }
    if (this->clear_costmaps != other.clear_costmaps) {
      return false;
    }
    if (this->pause_command != other.pause_command) {
      return false;
    }
    if (this->continue_command != other.continue_command) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->collision_detection != other.collision_detection) {
      return false;
    }
    if (this->collision_avoidance != other.collision_avoidance) {
      return false;
    }
    if (this->disable_collision_check_dist != other.disable_collision_check_dist) {
      return false;
    }
    if (this->max_linear_speed != other.max_linear_speed) {
      return false;
    }
    if (this->max_rotational_speed != other.max_rotational_speed) {
      return false;
    }
    if (this->pid_dist_offset != other.pid_dist_offset) {
      return false;
    }
    if (this->target_offset != other.target_offset) {
      return false;
    }
    if (this->only_collision_detection != other.only_collision_detection) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->pattern_type != other.pattern_type) {
      return false;
    }
    if (this->pattern_value != other.pattern_value) {
      return false;
    }
    if (this->only_track != other.only_track) {
      return false;
    }
    if (this->same_goal != other.same_goal) {
      return false;
    }
    if (this->pose_frame != other.pose_frame) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    if (this->bar_length != other.bar_length) {
      return false;
    }
    if (this->bar_distance != other.bar_distance) {
      return false;
    }
    if (this->shelf_leg_asymmetry_x != other.shelf_leg_asymmetry_x) {
      return false;
    }
    if (this->tolerance != other.tolerance) {
      return false;
    }
    return true;
  }
  bool operator!=(const MirMoveBase_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MirMoveBase_Goal_

// alias to use template instance with default allocator
using MirMoveBase_Goal =
  mir_actions::action::MirMoveBase_Goal_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Goal_<ContainerAllocator>::BASE_MOVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Goal_<ContainerAllocator>::GLOBAL_MOVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Goal_<ContainerAllocator>::RELATIVE_MOVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Goal_<ContainerAllocator>::RELATIVE_MARKER_MOVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Goal_<ContainerAllocator>::DOCKING_MOVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Goal_<ContainerAllocator>::DOCKING_GLOBAL_MOVE;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace mir_actions


// Include directives for member types
// Member 'end_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'pose'
// already included above
// #include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_actions__action__MirMoveBase_Result __attribute__((deprecated))
#else
# define DEPRECATED__mir_actions__action__MirMoveBase_Result __declspec(deprecated)
#endif

namespace mir_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MirMoveBase_Result_
{
  using Type = MirMoveBase_Result_<ContainerAllocator>;

  explicit MirMoveBase_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : end_pose(_init),
    pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->end_state = 0;
      this->message = "";
    }
  }

  explicit MirMoveBase_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : end_pose(_alloc, _init),
    pose(_alloc, _init),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->end_state = 0;
      this->message = "";
    }
  }

  // field types and members
  using _end_state_type =
    int16_t;
  _end_state_type end_state;
  using _end_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _end_pose_type end_pose;
  using _pose_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _pose_type pose;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__end_state(
    const int16_t & _arg)
  {
    this->end_state = _arg;
    return *this;
  }
  Type & set__end_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->end_pose = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t UNDEFINED =
    0;
  static constexpr int16_t GOAL_REACHED =
    1;
  static constexpr int16_t FAILED =
    -1;
  static constexpr int16_t MARKER_VISIBLE =
    2;
  static constexpr int16_t FAILED_NO_PATH =
    -2;
  static constexpr int16_t FAILED_GOAL_IN_STATIC_OBSTACLE =
    -3;
  static constexpr int16_t FAILED_GOAL_IN_FORBIDDEN_AREA =
    -4;
  static constexpr int16_t FAILED_GOAL_IN_DYNAMIC_OBSTACLE =
    -5;
  static constexpr int16_t FAILED_ROBOT_IN_COLLISION =
    -6;
  static constexpr int16_t FAILED_ROBOT_IN_FORBIDDEN_AREA =
    -7;
  static constexpr int16_t FAILED_UNKNOWN_TRAILER =
    -8;
  static constexpr int16_t FAILED_TO_PASS_GLOBAL_PLAN =
    -9;
  static constexpr int16_t FAILED_NO_VALID_RECOVERY_CONTROL =
    -10;
  static constexpr int16_t FAILED_UNKNOWN_PLANNER_ERROR =
    -11;
  static constexpr int16_t FAILED_ROBOT_OSCILLATING =
    -12;
  static constexpr int16_t FAILED_SOFTWARE_ERROR =
    -13;
  static constexpr int16_t FAILED_TIMEOUT =
    -14;
  static constexpr int16_t FAILED_COLLISION =
    -15;
  static constexpr int16_t INVALID_GOAL =
    -16;
  static constexpr int16_t FAILED_MARKER_TRACKING_ERROR =
    -17;

  // pointer types
  using RawPtr =
    mir_actions::action::MirMoveBase_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_actions::action::MirMoveBase_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_actions::action::MirMoveBase_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_actions::action::MirMoveBase_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_actions::action::MirMoveBase_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_actions::action::MirMoveBase_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_actions::action::MirMoveBase_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_actions::action::MirMoveBase_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_actions::action::MirMoveBase_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_actions::action::MirMoveBase_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_actions__action__MirMoveBase_Result
    std::shared_ptr<mir_actions::action::MirMoveBase_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_actions__action__MirMoveBase_Result
    std::shared_ptr<mir_actions::action::MirMoveBase_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MirMoveBase_Result_ & other) const
  {
    if (this->end_state != other.end_state) {
      return false;
    }
    if (this->end_pose != other.end_pose) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MirMoveBase_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MirMoveBase_Result_

// alias to use template instance with default allocator
using MirMoveBase_Result =
  mir_actions::action::MirMoveBase_Result_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::UNDEFINED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::GOAL_REACHED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::MARKER_VISIBLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::FAILED_NO_PATH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::FAILED_GOAL_IN_STATIC_OBSTACLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::FAILED_GOAL_IN_FORBIDDEN_AREA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::FAILED_GOAL_IN_DYNAMIC_OBSTACLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::FAILED_ROBOT_IN_COLLISION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::FAILED_ROBOT_IN_FORBIDDEN_AREA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::FAILED_UNKNOWN_TRAILER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::FAILED_TO_PASS_GLOBAL_PLAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::FAILED_NO_VALID_RECOVERY_CONTROL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::FAILED_UNKNOWN_PLANNER_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::FAILED_ROBOT_OSCILLATING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::FAILED_SOFTWARE_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::FAILED_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::FAILED_COLLISION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::INVALID_GOAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MirMoveBase_Result_<ContainerAllocator>::FAILED_MARKER_TRACKING_ERROR;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace mir_actions


// Include directives for member types
// Member 'base_position'
// Member 'current_goal'
// Member 'dist_to_goal'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'pose'
// already included above
// #include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_actions__action__MirMoveBase_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__mir_actions__action__MirMoveBase_Feedback __declspec(deprecated)
#endif

namespace mir_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MirMoveBase_Feedback_
{
  using Type = MirMoveBase_Feedback_<ContainerAllocator>;

  explicit MirMoveBase_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_position(_init),
    current_goal(_init),
    dist_to_goal(_init),
    pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->marker_inversion = false;
    }
  }

  explicit MirMoveBase_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_position(_alloc, _init),
    current_goal(_alloc, _init),
    dist_to_goal(_alloc, _init),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->marker_inversion = false;
    }
  }

  // field types and members
  using _state_type =
    int8_t;
  _state_type state;
  using _base_position_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _base_position_type base_position;
  using _current_goal_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _current_goal_type current_goal;
  using _dist_to_goal_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _dist_to_goal_type dist_to_goal;
  using _pose_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _pose_type pose;
  using _marker_inversion_type =
    bool;
  _marker_inversion_type marker_inversion;

  // setters for named parameter idiom
  Type & set__state(
    const int8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__base_position(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->base_position = _arg;
    return *this;
  }
  Type & set__current_goal(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->current_goal = _arg;
    return *this;
  }
  Type & set__dist_to_goal(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->dist_to_goal = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__marker_inversion(
    const bool & _arg)
  {
    this->marker_inversion = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t NOT_READY =
    -1;
  static constexpr int8_t PLANNING =
    0;
  static constexpr int8_t CONTROLLING =
    1;
  static constexpr int8_t CLEARING =
    2;
  static constexpr int8_t DOCKING =
    3;
  static constexpr int8_t COLLISION =
    4;

  // pointer types
  using RawPtr =
    mir_actions::action::MirMoveBase_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_actions::action::MirMoveBase_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_actions::action::MirMoveBase_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_actions::action::MirMoveBase_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_actions::action::MirMoveBase_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_actions::action::MirMoveBase_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_actions::action::MirMoveBase_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_actions::action::MirMoveBase_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_actions::action::MirMoveBase_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_actions::action::MirMoveBase_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_actions__action__MirMoveBase_Feedback
    std::shared_ptr<mir_actions::action::MirMoveBase_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_actions__action__MirMoveBase_Feedback
    std::shared_ptr<mir_actions::action::MirMoveBase_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MirMoveBase_Feedback_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->base_position != other.base_position) {
      return false;
    }
    if (this->current_goal != other.current_goal) {
      return false;
    }
    if (this->dist_to_goal != other.dist_to_goal) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->marker_inversion != other.marker_inversion) {
      return false;
    }
    return true;
  }
  bool operator!=(const MirMoveBase_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MirMoveBase_Feedback_

// alias to use template instance with default allocator
using MirMoveBase_Feedback =
  mir_actions::action::MirMoveBase_Feedback_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MirMoveBase_Feedback_<ContainerAllocator>::NOT_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MirMoveBase_Feedback_<ContainerAllocator>::PLANNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MirMoveBase_Feedback_<ContainerAllocator>::CONTROLLING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MirMoveBase_Feedback_<ContainerAllocator>::CLEARING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MirMoveBase_Feedback_<ContainerAllocator>::DOCKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MirMoveBase_Feedback_<ContainerAllocator>::COLLISION;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace mir_actions


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "mir_actions/action/detail/mir_move_base__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_actions__action__MirMoveBase_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__mir_actions__action__MirMoveBase_SendGoal_Request __declspec(deprecated)
#endif

namespace mir_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MirMoveBase_SendGoal_Request_
{
  using Type = MirMoveBase_SendGoal_Request_<ContainerAllocator>;

  explicit MirMoveBase_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MirMoveBase_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    mir_actions::action::MirMoveBase_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const mir_actions::action::MirMoveBase_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_actions::action::MirMoveBase_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_actions::action::MirMoveBase_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_actions::action::MirMoveBase_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_actions::action::MirMoveBase_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_actions::action::MirMoveBase_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_actions::action::MirMoveBase_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_actions::action::MirMoveBase_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_actions::action::MirMoveBase_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_actions::action::MirMoveBase_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_actions::action::MirMoveBase_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_actions__action__MirMoveBase_SendGoal_Request
    std::shared_ptr<mir_actions::action::MirMoveBase_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_actions__action__MirMoveBase_SendGoal_Request
    std::shared_ptr<mir_actions::action::MirMoveBase_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MirMoveBase_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MirMoveBase_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MirMoveBase_SendGoal_Request_

// alias to use template instance with default allocator
using MirMoveBase_SendGoal_Request =
  mir_actions::action::MirMoveBase_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mir_actions


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_actions__action__MirMoveBase_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__mir_actions__action__MirMoveBase_SendGoal_Response __declspec(deprecated)
#endif

namespace mir_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MirMoveBase_SendGoal_Response_
{
  using Type = MirMoveBase_SendGoal_Response_<ContainerAllocator>;

  explicit MirMoveBase_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MirMoveBase_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_actions::action::MirMoveBase_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_actions::action::MirMoveBase_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_actions::action::MirMoveBase_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_actions::action::MirMoveBase_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_actions::action::MirMoveBase_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_actions::action::MirMoveBase_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_actions::action::MirMoveBase_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_actions::action::MirMoveBase_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_actions::action::MirMoveBase_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_actions::action::MirMoveBase_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_actions__action__MirMoveBase_SendGoal_Response
    std::shared_ptr<mir_actions::action::MirMoveBase_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_actions__action__MirMoveBase_SendGoal_Response
    std::shared_ptr<mir_actions::action::MirMoveBase_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MirMoveBase_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MirMoveBase_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MirMoveBase_SendGoal_Response_

// alias to use template instance with default allocator
using MirMoveBase_SendGoal_Response =
  mir_actions::action::MirMoveBase_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mir_actions

namespace mir_actions
{

namespace action
{

struct MirMoveBase_SendGoal
{
  using Request = mir_actions::action::MirMoveBase_SendGoal_Request;
  using Response = mir_actions::action::MirMoveBase_SendGoal_Response;
};

}  // namespace action

}  // namespace mir_actions


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_actions__action__MirMoveBase_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__mir_actions__action__MirMoveBase_GetResult_Request __declspec(deprecated)
#endif

namespace mir_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MirMoveBase_GetResult_Request_
{
  using Type = MirMoveBase_GetResult_Request_<ContainerAllocator>;

  explicit MirMoveBase_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MirMoveBase_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_actions::action::MirMoveBase_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_actions::action::MirMoveBase_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_actions::action::MirMoveBase_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_actions::action::MirMoveBase_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_actions::action::MirMoveBase_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_actions::action::MirMoveBase_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_actions::action::MirMoveBase_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_actions::action::MirMoveBase_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_actions::action::MirMoveBase_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_actions::action::MirMoveBase_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_actions__action__MirMoveBase_GetResult_Request
    std::shared_ptr<mir_actions::action::MirMoveBase_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_actions__action__MirMoveBase_GetResult_Request
    std::shared_ptr<mir_actions::action::MirMoveBase_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MirMoveBase_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MirMoveBase_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MirMoveBase_GetResult_Request_

// alias to use template instance with default allocator
using MirMoveBase_GetResult_Request =
  mir_actions::action::MirMoveBase_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mir_actions


// Include directives for member types
// Member 'result'
// already included above
// #include "mir_actions/action/detail/mir_move_base__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_actions__action__MirMoveBase_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__mir_actions__action__MirMoveBase_GetResult_Response __declspec(deprecated)
#endif

namespace mir_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MirMoveBase_GetResult_Response_
{
  using Type = MirMoveBase_GetResult_Response_<ContainerAllocator>;

  explicit MirMoveBase_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MirMoveBase_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    mir_actions::action::MirMoveBase_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const mir_actions::action::MirMoveBase_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_actions::action::MirMoveBase_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_actions::action::MirMoveBase_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_actions::action::MirMoveBase_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_actions::action::MirMoveBase_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_actions::action::MirMoveBase_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_actions::action::MirMoveBase_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_actions::action::MirMoveBase_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_actions::action::MirMoveBase_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_actions::action::MirMoveBase_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_actions::action::MirMoveBase_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_actions__action__MirMoveBase_GetResult_Response
    std::shared_ptr<mir_actions::action::MirMoveBase_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_actions__action__MirMoveBase_GetResult_Response
    std::shared_ptr<mir_actions::action::MirMoveBase_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MirMoveBase_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MirMoveBase_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MirMoveBase_GetResult_Response_

// alias to use template instance with default allocator
using MirMoveBase_GetResult_Response =
  mir_actions::action::MirMoveBase_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mir_actions

namespace mir_actions
{

namespace action
{

struct MirMoveBase_GetResult
{
  using Request = mir_actions::action::MirMoveBase_GetResult_Request;
  using Response = mir_actions::action::MirMoveBase_GetResult_Response;
};

}  // namespace action

}  // namespace mir_actions


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "mir_actions/action/detail/mir_move_base__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_actions__action__MirMoveBase_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__mir_actions__action__MirMoveBase_FeedbackMessage __declspec(deprecated)
#endif

namespace mir_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MirMoveBase_FeedbackMessage_
{
  using Type = MirMoveBase_FeedbackMessage_<ContainerAllocator>;

  explicit MirMoveBase_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MirMoveBase_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    mir_actions::action::MirMoveBase_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const mir_actions::action::MirMoveBase_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_actions::action::MirMoveBase_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_actions::action::MirMoveBase_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_actions::action::MirMoveBase_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_actions::action::MirMoveBase_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_actions::action::MirMoveBase_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_actions::action::MirMoveBase_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_actions::action::MirMoveBase_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_actions::action::MirMoveBase_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_actions::action::MirMoveBase_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_actions::action::MirMoveBase_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_actions__action__MirMoveBase_FeedbackMessage
    std::shared_ptr<mir_actions::action::MirMoveBase_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_actions__action__MirMoveBase_FeedbackMessage
    std::shared_ptr<mir_actions::action::MirMoveBase_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MirMoveBase_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MirMoveBase_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MirMoveBase_FeedbackMessage_

// alias to use template instance with default allocator
using MirMoveBase_FeedbackMessage =
  mir_actions::action::MirMoveBase_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mir_actions

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace mir_actions
{

namespace action
{

struct MirMoveBase
{
  /// The goal message defined in the action definition.
  using Goal = mir_actions::action::MirMoveBase_Goal;
  /// The result message defined in the action definition.
  using Result = mir_actions::action::MirMoveBase_Result;
  /// The feedback message defined in the action definition.
  using Feedback = mir_actions::action::MirMoveBase_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = mir_actions::action::MirMoveBase_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = mir_actions::action::MirMoveBase_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = mir_actions::action::MirMoveBase_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MirMoveBase MirMoveBase;

}  // namespace action

}  // namespace mir_actions

#endif  // MIR_ACTIONS__ACTION__DETAIL__MIR_MOVE_BASE__STRUCT_HPP_
