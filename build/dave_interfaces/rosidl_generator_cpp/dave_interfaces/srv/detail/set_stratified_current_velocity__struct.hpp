// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dave_interfaces:srv/SetStratifiedCurrentVelocity.idl
// generated code does not contain a copyright notice

#ifndef DAVE_INTERFACES__SRV__DETAIL__SET_STRATIFIED_CURRENT_VELOCITY__STRUCT_HPP_
#define DAVE_INTERFACES__SRV__DETAIL__SET_STRATIFIED_CURRENT_VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dave_interfaces__srv__SetStratifiedCurrentVelocity_Request __attribute__((deprecated))
#else
# define DEPRECATED__dave_interfaces__srv__SetStratifiedCurrentVelocity_Request __declspec(deprecated)
#endif

namespace dave_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetStratifiedCurrentVelocity_Request_
{
  using Type = SetStratifiedCurrentVelocity_Request_<ContainerAllocator>;

  explicit SetStratifiedCurrentVelocity_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->layer = 0;
      this->velocity = 0.0;
      this->horizontal_angle = 0.0;
      this->vertical_angle = 0.0;
    }
  }

  explicit SetStratifiedCurrentVelocity_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->layer = 0;
      this->velocity = 0.0;
      this->horizontal_angle = 0.0;
      this->vertical_angle = 0.0;
    }
  }

  // field types and members
  using _layer_type =
    uint16_t;
  _layer_type layer;
  using _velocity_type =
    double;
  _velocity_type velocity;
  using _horizontal_angle_type =
    double;
  _horizontal_angle_type horizontal_angle;
  using _vertical_angle_type =
    double;
  _vertical_angle_type vertical_angle;

  // setters for named parameter idiom
  Type & set__layer(
    const uint16_t & _arg)
  {
    this->layer = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__horizontal_angle(
    const double & _arg)
  {
    this->horizontal_angle = _arg;
    return *this;
  }
  Type & set__vertical_angle(
    const double & _arg)
  {
    this->vertical_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dave_interfaces::srv::SetStratifiedCurrentVelocity_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dave_interfaces::srv::SetStratifiedCurrentVelocity_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dave_interfaces::srv::SetStratifiedCurrentVelocity_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dave_interfaces::srv::SetStratifiedCurrentVelocity_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::srv::SetStratifiedCurrentVelocity_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::srv::SetStratifiedCurrentVelocity_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::srv::SetStratifiedCurrentVelocity_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::srv::SetStratifiedCurrentVelocity_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dave_interfaces::srv::SetStratifiedCurrentVelocity_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dave_interfaces::srv::SetStratifiedCurrentVelocity_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dave_interfaces__srv__SetStratifiedCurrentVelocity_Request
    std::shared_ptr<dave_interfaces::srv::SetStratifiedCurrentVelocity_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dave_interfaces__srv__SetStratifiedCurrentVelocity_Request
    std::shared_ptr<dave_interfaces::srv::SetStratifiedCurrentVelocity_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetStratifiedCurrentVelocity_Request_ & other) const
  {
    if (this->layer != other.layer) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->horizontal_angle != other.horizontal_angle) {
      return false;
    }
    if (this->vertical_angle != other.vertical_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetStratifiedCurrentVelocity_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetStratifiedCurrentVelocity_Request_

// alias to use template instance with default allocator
using SetStratifiedCurrentVelocity_Request =
  dave_interfaces::srv::SetStratifiedCurrentVelocity_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dave_interfaces


#ifndef _WIN32
# define DEPRECATED__dave_interfaces__srv__SetStratifiedCurrentVelocity_Response __attribute__((deprecated))
#else
# define DEPRECATED__dave_interfaces__srv__SetStratifiedCurrentVelocity_Response __declspec(deprecated)
#endif

namespace dave_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetStratifiedCurrentVelocity_Response_
{
  using Type = SetStratifiedCurrentVelocity_Response_<ContainerAllocator>;

  explicit SetStratifiedCurrentVelocity_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetStratifiedCurrentVelocity_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dave_interfaces::srv::SetStratifiedCurrentVelocity_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dave_interfaces::srv::SetStratifiedCurrentVelocity_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dave_interfaces::srv::SetStratifiedCurrentVelocity_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dave_interfaces::srv::SetStratifiedCurrentVelocity_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::srv::SetStratifiedCurrentVelocity_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::srv::SetStratifiedCurrentVelocity_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::srv::SetStratifiedCurrentVelocity_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::srv::SetStratifiedCurrentVelocity_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dave_interfaces::srv::SetStratifiedCurrentVelocity_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dave_interfaces::srv::SetStratifiedCurrentVelocity_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dave_interfaces__srv__SetStratifiedCurrentVelocity_Response
    std::shared_ptr<dave_interfaces::srv::SetStratifiedCurrentVelocity_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dave_interfaces__srv__SetStratifiedCurrentVelocity_Response
    std::shared_ptr<dave_interfaces::srv::SetStratifiedCurrentVelocity_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetStratifiedCurrentVelocity_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetStratifiedCurrentVelocity_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetStratifiedCurrentVelocity_Response_

// alias to use template instance with default allocator
using SetStratifiedCurrentVelocity_Response =
  dave_interfaces::srv::SetStratifiedCurrentVelocity_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dave_interfaces

namespace dave_interfaces
{

namespace srv
{

struct SetStratifiedCurrentVelocity
{
  using Request = dave_interfaces::srv::SetStratifiedCurrentVelocity_Request;
  using Response = dave_interfaces::srv::SetStratifiedCurrentVelocity_Response;
};

}  // namespace srv

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__SRV__DETAIL__SET_STRATIFIED_CURRENT_VELOCITY__STRUCT_HPP_
