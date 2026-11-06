// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_msgs:msg/ChassisCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_msgs/msg/chassis_cmd.hpp"


#ifndef RM_MSGS__MSG__DETAIL__CHASSIS_CMD__STRUCT_HPP_
#define RM_MSGS__MSG__DETAIL__CHASSIS_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_msgs__msg__ChassisCmd __attribute__((deprecated))
#else
# define DEPRECATED__rm_msgs__msg__ChassisCmd __declspec(deprecated)
#endif

namespace rm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChassisCmd_
{
  using Type = ChassisCmd_<ContainerAllocator>;

  explicit ChassisCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vx = 0.0;
      this->vy = 0.0;
      this->wz = 0.0;
    }
  }

  explicit ChassisCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vx = 0.0;
      this->vy = 0.0;
      this->wz = 0.0;
    }
  }

  // field types and members
  using _vx_type =
    double;
  _vx_type vx;
  using _vy_type =
    double;
  _vy_type vy;
  using _wz_type =
    double;
  _wz_type wz;

  // setters for named parameter idiom
  Type & set__vx(
    const double & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const double & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__wz(
    const double & _arg)
  {
    this->wz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_msgs::msg::ChassisCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_msgs::msg::ChassisCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_msgs::msg::ChassisCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_msgs::msg::ChassisCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_msgs::msg::ChassisCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_msgs::msg::ChassisCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_msgs::msg::ChassisCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_msgs::msg::ChassisCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_msgs::msg::ChassisCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_msgs::msg::ChassisCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_msgs__msg__ChassisCmd
    std::shared_ptr<rm_msgs::msg::ChassisCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_msgs__msg__ChassisCmd
    std::shared_ptr<rm_msgs::msg::ChassisCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChassisCmd_ & other) const
  {
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->wz != other.wz) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChassisCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChassisCmd_

// alias to use template instance with default allocator
using ChassisCmd =
  rm_msgs::msg::ChassisCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__CHASSIS_CMD__STRUCT_HPP_
