// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dave_interfaces:srv/SetCurrentDirection.idl
// generated code does not contain a copyright notice

#ifndef DAVE_INTERFACES__SRV__DETAIL__SET_CURRENT_DIRECTION__TRAITS_HPP_
#define DAVE_INTERFACES__SRV__DETAIL__SET_CURRENT_DIRECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dave_interfaces/srv/detail/set_current_direction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dave_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCurrentDirection_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCurrentDirection_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCurrentDirection_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dave_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dave_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dave_interfaces::srv::SetCurrentDirection_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dave_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dave_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dave_interfaces::srv::SetCurrentDirection_Request & msg)
{
  return dave_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dave_interfaces::srv::SetCurrentDirection_Request>()
{
  return "dave_interfaces::srv::SetCurrentDirection_Request";
}

template<>
inline const char * name<dave_interfaces::srv::SetCurrentDirection_Request>()
{
  return "dave_interfaces/srv/SetCurrentDirection_Request";
}

template<>
struct has_fixed_size<dave_interfaces::srv::SetCurrentDirection_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dave_interfaces::srv::SetCurrentDirection_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dave_interfaces::srv::SetCurrentDirection_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dave_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCurrentDirection_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCurrentDirection_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCurrentDirection_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dave_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dave_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dave_interfaces::srv::SetCurrentDirection_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dave_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dave_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dave_interfaces::srv::SetCurrentDirection_Response & msg)
{
  return dave_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dave_interfaces::srv::SetCurrentDirection_Response>()
{
  return "dave_interfaces::srv::SetCurrentDirection_Response";
}

template<>
inline const char * name<dave_interfaces::srv::SetCurrentDirection_Response>()
{
  return "dave_interfaces/srv/SetCurrentDirection_Response";
}

template<>
struct has_fixed_size<dave_interfaces::srv::SetCurrentDirection_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dave_interfaces::srv::SetCurrentDirection_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dave_interfaces::srv::SetCurrentDirection_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dave_interfaces::srv::SetCurrentDirection>()
{
  return "dave_interfaces::srv::SetCurrentDirection";
}

template<>
inline const char * name<dave_interfaces::srv::SetCurrentDirection>()
{
  return "dave_interfaces/srv/SetCurrentDirection";
}

template<>
struct has_fixed_size<dave_interfaces::srv::SetCurrentDirection>
  : std::integral_constant<
    bool,
    has_fixed_size<dave_interfaces::srv::SetCurrentDirection_Request>::value &&
    has_fixed_size<dave_interfaces::srv::SetCurrentDirection_Response>::value
  >
{
};

template<>
struct has_bounded_size<dave_interfaces::srv::SetCurrentDirection>
  : std::integral_constant<
    bool,
    has_bounded_size<dave_interfaces::srv::SetCurrentDirection_Request>::value &&
    has_bounded_size<dave_interfaces::srv::SetCurrentDirection_Response>::value
  >
{
};

template<>
struct is_service<dave_interfaces::srv::SetCurrentDirection>
  : std::true_type
{
};

template<>
struct is_service_request<dave_interfaces::srv::SetCurrentDirection_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dave_interfaces::srv::SetCurrentDirection_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DAVE_INTERFACES__SRV__DETAIL__SET_CURRENT_DIRECTION__TRAITS_HPP_
