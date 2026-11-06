// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_msgs:msg/WheelLegCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_msgs/msg/wheel_leg_cmd.hpp"


#ifndef RM_MSGS__MSG__DETAIL__WHEEL_LEG_CMD__STRUCT_HPP_
#define RM_MSGS__MSG__DETAIL__WHEEL_LEG_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_msgs__msg__WheelLegCmd __attribute__((deprecated))
#else
# define DEPRECATED__rm_msgs__msg__WheelLegCmd __declspec(deprecated)
#endif

namespace rm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelLegCmd_
{
  using Type = WheelLegCmd_<ContainerAllocator>;

  explicit WheelLegCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_phi1 = 0.0;
      this->right_phi4 = 0.0;
      this->left_phi1 = 0.0;
      this->left_phi4 = 0.0;
      this->right_wheel = 0.0;
      this->left_wheel = 0.0;
    }
  }

  explicit WheelLegCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_phi1 = 0.0;
      this->right_phi4 = 0.0;
      this->left_phi1 = 0.0;
      this->left_phi4 = 0.0;
      this->right_wheel = 0.0;
      this->left_wheel = 0.0;
    }
  }

  // field types and members
  using _right_phi1_type =
    double;
  _right_phi1_type right_phi1;
  using _right_phi4_type =
    double;
  _right_phi4_type right_phi4;
  using _left_phi1_type =
    double;
  _left_phi1_type left_phi1;
  using _left_phi4_type =
    double;
  _left_phi4_type left_phi4;
  using _right_wheel_type =
    double;
  _right_wheel_type right_wheel;
  using _left_wheel_type =
    double;
  _left_wheel_type left_wheel;

  // setters for named parameter idiom
  Type & set__right_phi1(
    const double & _arg)
  {
    this->right_phi1 = _arg;
    return *this;
  }
  Type & set__right_phi4(
    const double & _arg)
  {
    this->right_phi4 = _arg;
    return *this;
  }
  Type & set__left_phi1(
    const double & _arg)
  {
    this->left_phi1 = _arg;
    return *this;
  }
  Type & set__left_phi4(
    const double & _arg)
  {
    this->left_phi4 = _arg;
    return *this;
  }
  Type & set__right_wheel(
    const double & _arg)
  {
    this->right_wheel = _arg;
    return *this;
  }
  Type & set__left_wheel(
    const double & _arg)
  {
    this->left_wheel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_msgs::msg::WheelLegCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_msgs::msg::WheelLegCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_msgs::msg::WheelLegCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_msgs::msg::WheelLegCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_msgs::msg::WheelLegCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_msgs::msg::WheelLegCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_msgs::msg::WheelLegCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_msgs::msg::WheelLegCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_msgs::msg::WheelLegCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_msgs::msg::WheelLegCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_msgs__msg__WheelLegCmd
    std::shared_ptr<rm_msgs::msg::WheelLegCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_msgs__msg__WheelLegCmd
    std::shared_ptr<rm_msgs::msg::WheelLegCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelLegCmd_ & other) const
  {
    if (this->right_phi1 != other.right_phi1) {
      return false;
    }
    if (this->right_phi4 != other.right_phi4) {
      return false;
    }
    if (this->left_phi1 != other.left_phi1) {
      return false;
    }
    if (this->left_phi4 != other.left_phi4) {
      return false;
    }
    if (this->right_wheel != other.right_wheel) {
      return false;
    }
    if (this->left_wheel != other.left_wheel) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelLegCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelLegCmd_

// alias to use template instance with default allocator
using WheelLegCmd =
  rm_msgs::msg::WheelLegCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__WHEEL_LEG_CMD__STRUCT_HPP_
