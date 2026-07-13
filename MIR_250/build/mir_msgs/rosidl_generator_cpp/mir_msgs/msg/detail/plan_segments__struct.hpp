// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_msgs:msg/PlanSegments.idl
// generated code does not contain a copyright notice

#ifndef MIR_MSGS__MSG__DETAIL__PLAN_SEGMENTS__STRUCT_HPP_
#define MIR_MSGS__MSG__DETAIL__PLAN_SEGMENTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'p_segments'
#include "mir_msgs/msg/detail/plan_segment__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_msgs__msg__PlanSegments __attribute__((deprecated))
#else
# define DEPRECATED__mir_msgs__msg__PlanSegments __declspec(deprecated)
#endif

namespace mir_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanSegments_
{
  using Type = PlanSegments_<ContainerAllocator>;

  explicit PlanSegments_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PlanSegments_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _p_segments_type =
    std::vector<mir_msgs::msg::PlanSegment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mir_msgs::msg::PlanSegment_<ContainerAllocator>>>;
  _p_segments_type p_segments;

  // setters for named parameter idiom
  Type & set__p_segments(
    const std::vector<mir_msgs::msg::PlanSegment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mir_msgs::msg::PlanSegment_<ContainerAllocator>>> & _arg)
  {
    this->p_segments = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_msgs::msg::PlanSegments_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_msgs::msg::PlanSegments_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_msgs::msg::PlanSegments_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_msgs::msg::PlanSegments_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::PlanSegments_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::PlanSegments_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_msgs::msg::PlanSegments_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_msgs::msg::PlanSegments_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_msgs::msg::PlanSegments_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_msgs::msg::PlanSegments_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_msgs__msg__PlanSegments
    std::shared_ptr<mir_msgs::msg::PlanSegments_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_msgs__msg__PlanSegments
    std::shared_ptr<mir_msgs::msg::PlanSegments_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanSegments_ & other) const
  {
    if (this->p_segments != other.p_segments) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanSegments_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanSegments_

// alias to use template instance with default allocator
using PlanSegments =
  mir_msgs::msg::PlanSegments_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__PLAN_SEGMENTS__STRUCT_HPP_
