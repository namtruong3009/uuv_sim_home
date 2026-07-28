// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dave_interfaces:srv/SetCurrentDirection.idl
// generated code does not contain a copyright notice

#ifndef DAVE_INTERFACES__SRV__DETAIL__SET_CURRENT_DIRECTION__BUILDER_HPP_
#define DAVE_INTERFACES__SRV__DETAIL__SET_CURRENT_DIRECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dave_interfaces/srv/detail/set_current_direction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dave_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCurrentDirection_Request_angle
{
public:
  Init_SetCurrentDirection_Request_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dave_interfaces::srv::SetCurrentDirection_Request angle(::dave_interfaces::srv::SetCurrentDirection_Request::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::srv::SetCurrentDirection_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::srv::SetCurrentDirection_Request>()
{
  return dave_interfaces::srv::builder::Init_SetCurrentDirection_Request_angle();
}

}  // namespace dave_interfaces


namespace dave_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCurrentDirection_Response_success
{
public:
  Init_SetCurrentDirection_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dave_interfaces::srv::SetCurrentDirection_Response success(::dave_interfaces::srv::SetCurrentDirection_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::srv::SetCurrentDirection_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::srv::SetCurrentDirection_Response>()
{
  return dave_interfaces::srv::builder::Init_SetCurrentDirection_Response_success();
}

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__SRV__DETAIL__SET_CURRENT_DIRECTION__BUILDER_HPP_
