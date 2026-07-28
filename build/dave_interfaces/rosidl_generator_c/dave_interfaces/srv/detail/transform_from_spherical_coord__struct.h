// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dave_interfaces:srv/TransformFromSphericalCoord.idl
// generated code does not contain a copyright notice

#ifndef DAVE_INTERFACES__SRV__DETAIL__TRANSFORM_FROM_SPHERICAL_COORD__STRUCT_H_
#define DAVE_INTERFACES__SRV__DETAIL__TRANSFORM_FROM_SPHERICAL_COORD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TransformFromSphericalCoord in the package dave_interfaces.
typedef struct dave_interfaces__srv__TransformFromSphericalCoord_Request
{
  /// Latitude. Positive is north of equator; negative is south.
  double latitude_deg;
  /// Longitude. Positive is east of prime meridian; negative is west.
  double longitude_deg;
  /// Altitude. Positive is above the WGS 84 ellipsoid
  double altitude;
} dave_interfaces__srv__TransformFromSphericalCoord_Request;

// Struct for a sequence of dave_interfaces__srv__TransformFromSphericalCoord_Request.
typedef struct dave_interfaces__srv__TransformFromSphericalCoord_Request__Sequence
{
  dave_interfaces__srv__TransformFromSphericalCoord_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dave_interfaces__srv__TransformFromSphericalCoord_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'output'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in srv/TransformFromSphericalCoord in the package dave_interfaces.
typedef struct dave_interfaces__srv__TransformFromSphericalCoord_Response
{
  geometry_msgs__msg__Vector3 output;
} dave_interfaces__srv__TransformFromSphericalCoord_Response;

// Struct for a sequence of dave_interfaces__srv__TransformFromSphericalCoord_Response.
typedef struct dave_interfaces__srv__TransformFromSphericalCoord_Response__Sequence
{
  dave_interfaces__srv__TransformFromSphericalCoord_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dave_interfaces__srv__TransformFromSphericalCoord_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAVE_INTERFACES__SRV__DETAIL__TRANSFORM_FROM_SPHERICAL_COORD__STRUCT_H_
