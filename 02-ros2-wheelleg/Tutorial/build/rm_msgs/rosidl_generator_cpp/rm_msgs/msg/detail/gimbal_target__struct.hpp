// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_msgs:msg/GimbalTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_msgs/msg/gimbal_target.hpp"


#ifndef RM_MSGS__MSG__DETAIL__GIMBAL_TARGET__STRUCT_HPP_
#define RM_MSGS__MSG__DETAIL__GIMBAL_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_msgs__msg__GimbalTarget __attribute__((deprecated))
#else
# define DEPRECATED__rm_msgs__msg__GimbalTarget __declspec(deprecated)
#endif

namespace rm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GimbalTarget_
{
  using Type = GimbalTarget_<ContainerAllocator>;

  explicit GimbalTarget_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->pitch = 0.0;
    }
  }

  explicit GimbalTarget_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->pitch = 0.0;
    }
  }

  // field types and members
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _pitch_type =
    double;
  _pitch_type pitch;

  // setters for named parameter idiom
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_msgs::msg::GimbalTarget_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_msgs::msg::GimbalTarget_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_msgs::msg::GimbalTarget_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_msgs::msg::GimbalTarget_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_msgs::msg::GimbalTarget_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_msgs::msg::GimbalTarget_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_msgs::msg::GimbalTarget_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_msgs::msg::GimbalTarget_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_msgs::msg::GimbalTarget_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_msgs::msg::GimbalTarget_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_msgs__msg__GimbalTarget
    std::shared_ptr<rm_msgs::msg::GimbalTarget_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_msgs__msg__GimbalTarget
    std::shared_ptr<rm_msgs::msg::GimbalTarget_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GimbalTarget_ & other) const
  {
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    return true;
  }
  bool operator!=(const GimbalTarget_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GimbalTarget_

// alias to use template instance with default allocator
using GimbalTarget =
  rm_msgs::msg::GimbalTarget_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__GIMBAL_TARGET__STRUCT_HPP_
