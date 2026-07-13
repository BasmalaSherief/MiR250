// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/PlanSegment.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PLAN_SEGMENT__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__PLAN_SEGMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'path'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__PlanSegment __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__PlanSegment __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanSegment_
{
  using Type = PlanSegment_<ContainerAllocator>;

  explicit PlanSegment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->forward_motion = false;
      this->start_idx = 0l;
      this->length = 0.0;
      this->remaining_length = 0.0;
    }
  }

  explicit PlanSegment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->forward_motion = false;
      this->start_idx = 0l;
      this->length = 0.0;
      this->remaining_length = 0.0;
    }
  }

  // field types and members
  using _forward_motion_type =
    bool;
  _forward_motion_type forward_motion;
  using _start_idx_type =
    int32_t;
  _start_idx_type start_idx;
  using _length_type =
    double;
  _length_type length;
  using _remaining_length_type =
    double;
  _remaining_length_type remaining_length;
  using _path_type =
    std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>>;
  _path_type path;

  // setters for named parameter idiom
  Type & set__forward_motion(
    const bool & _arg)
  {
    this->forward_motion = _arg;
    return *this;
  }
  Type & set__start_idx(
    const int32_t & _arg)
  {
    this->start_idx = _arg;
    return *this;
  }
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__remaining_length(
    const double & _arg)
  {
    this->remaining_length = _arg;
    return *this;
  }
  Type & set__path(
    const std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>> & _arg)
  {
    this->path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::PlanSegment_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::PlanSegment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::PlanSegment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::PlanSegment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::PlanSegment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::PlanSegment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::PlanSegment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::PlanSegment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::PlanSegment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::PlanSegment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__PlanSegment
    std::shared_ptr<mir_msgs::msg::PlanSegment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__PlanSegment
    std::shared_ptr<mir_msgs::msg::PlanSegment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanSegment_ & other) const
  {
    if (this->forward_motion != other.forward_motion) {
      return false;
    }
    if (this->start_idx != other.start_idx) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->remaining_length != other.remaining_length) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanSegment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanSegment_

// alias to use template instance with default allocator
using PlanSegment =
  mir_msgs::msg::PlanSegment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__PLAN_SEGMENT__STRUCT_HPP_
