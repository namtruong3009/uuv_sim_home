// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dave_interfaces:msg/StratifiedCurrentDatabase.idl
// generated code does not contain a copyright notice
#include "dave_interfaces/msg/detail/stratified_current_database__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dave_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dave_interfaces/msg/detail/stratified_current_database__struct.h"
#include "dave_interfaces/msg/detail/stratified_current_database__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/vector3__functions.h"  // velocities
#include "rosidl_runtime_c/primitives_sequence.h"  // depths, tidevelocities, time_gmt_day, time_gmt_hour, time_gmt_minute, time_gmt_month, time_gmt_year
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // depths, tidevelocities, time_gmt_day, time_gmt_hour, time_gmt_minute, time_gmt_month, time_gmt_year

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dave_interfaces
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dave_interfaces
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dave_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();


using _StratifiedCurrentDatabase__ros_msg_type = dave_interfaces__msg__StratifiedCurrentDatabase;

static bool _StratifiedCurrentDatabase__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StratifiedCurrentDatabase__ros_msg_type * ros_message = static_cast<const _StratifiedCurrentDatabase__ros_msg_type *>(untyped_ros_message);
  // Field name: depths
  {
    size_t size = ros_message->depths.size;
    auto array_ptr = ros_message->depths.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: velocities
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    size_t size = ros_message->velocities.size;
    auto array_ptr = ros_message->velocities.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: time_gmt_year
  {
    size_t size = ros_message->time_gmt_year.size;
    auto array_ptr = ros_message->time_gmt_year.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: time_gmt_month
  {
    size_t size = ros_message->time_gmt_month.size;
    auto array_ptr = ros_message->time_gmt_month.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: time_gmt_day
  {
    size_t size = ros_message->time_gmt_day.size;
    auto array_ptr = ros_message->time_gmt_day.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: time_gmt_hour
  {
    size_t size = ros_message->time_gmt_hour.size;
    auto array_ptr = ros_message->time_gmt_hour.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: time_gmt_minute
  {
    size_t size = ros_message->time_gmt_minute.size;
    auto array_ptr = ros_message->time_gmt_minute.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tidevelocities
  {
    size_t size = ros_message->tidevelocities.size;
    auto array_ptr = ros_message->tidevelocities.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tideconstituents
  {
    cdr << (ros_message->tideconstituents ? true : false);
  }

  // Field name: m2_amp
  {
    cdr << ros_message->m2_amp;
  }

  // Field name: m2_phase
  {
    cdr << ros_message->m2_phase;
  }

  // Field name: m2_speed
  {
    cdr << ros_message->m2_speed;
  }

  // Field name: s2_amp
  {
    cdr << ros_message->s2_amp;
  }

  // Field name: s2_phase
  {
    cdr << ros_message->s2_phase;
  }

  // Field name: s2_speed
  {
    cdr << ros_message->s2_speed;
  }

  // Field name: n2_amp
  {
    cdr << ros_message->n2_amp;
  }

  // Field name: n2_phase
  {
    cdr << ros_message->n2_phase;
  }

  // Field name: n2_speed
  {
    cdr << ros_message->n2_speed;
  }

  // Field name: ebb_direction
  {
    cdr << ros_message->ebb_direction;
  }

  // Field name: flood_direction
  {
    cdr << ros_message->flood_direction;
  }

  // Field name: world_start_time_year
  {
    cdr << ros_message->world_start_time_year;
  }

  // Field name: world_start_time_month
  {
    cdr << ros_message->world_start_time_month;
  }

  // Field name: world_start_time_day
  {
    cdr << ros_message->world_start_time_day;
  }

  // Field name: world_start_time_hour
  {
    cdr << ros_message->world_start_time_hour;
  }

  // Field name: world_start_time_minute
  {
    cdr << ros_message->world_start_time_minute;
  }

  return true;
}

static bool _StratifiedCurrentDatabase__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StratifiedCurrentDatabase__ros_msg_type * ros_message = static_cast<_StratifiedCurrentDatabase__ros_msg_type *>(untyped_ros_message);
  // Field name: depths
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->depths.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->depths);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->depths, size)) {
      fprintf(stderr, "failed to create array for field 'depths'");
      return false;
    }
    auto array_ptr = ros_message->depths.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: velocities
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->velocities.data) {
      geometry_msgs__msg__Vector3__Sequence__fini(&ros_message->velocities);
    }
    if (!geometry_msgs__msg__Vector3__Sequence__init(&ros_message->velocities, size)) {
      fprintf(stderr, "failed to create array for field 'velocities'");
      return false;
    }
    auto array_ptr = ros_message->velocities.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: time_gmt_year
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->time_gmt_year.data) {
      rosidl_runtime_c__int16__Sequence__fini(&ros_message->time_gmt_year);
    }
    if (!rosidl_runtime_c__int16__Sequence__init(&ros_message->time_gmt_year, size)) {
      fprintf(stderr, "failed to create array for field 'time_gmt_year'");
      return false;
    }
    auto array_ptr = ros_message->time_gmt_year.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: time_gmt_month
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->time_gmt_month.data) {
      rosidl_runtime_c__int16__Sequence__fini(&ros_message->time_gmt_month);
    }
    if (!rosidl_runtime_c__int16__Sequence__init(&ros_message->time_gmt_month, size)) {
      fprintf(stderr, "failed to create array for field 'time_gmt_month'");
      return false;
    }
    auto array_ptr = ros_message->time_gmt_month.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: time_gmt_day
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->time_gmt_day.data) {
      rosidl_runtime_c__int16__Sequence__fini(&ros_message->time_gmt_day);
    }
    if (!rosidl_runtime_c__int16__Sequence__init(&ros_message->time_gmt_day, size)) {
      fprintf(stderr, "failed to create array for field 'time_gmt_day'");
      return false;
    }
    auto array_ptr = ros_message->time_gmt_day.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: time_gmt_hour
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->time_gmt_hour.data) {
      rosidl_runtime_c__int16__Sequence__fini(&ros_message->time_gmt_hour);
    }
    if (!rosidl_runtime_c__int16__Sequence__init(&ros_message->time_gmt_hour, size)) {
      fprintf(stderr, "failed to create array for field 'time_gmt_hour'");
      return false;
    }
    auto array_ptr = ros_message->time_gmt_hour.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: time_gmt_minute
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->time_gmt_minute.data) {
      rosidl_runtime_c__int16__Sequence__fini(&ros_message->time_gmt_minute);
    }
    if (!rosidl_runtime_c__int16__Sequence__init(&ros_message->time_gmt_minute, size)) {
      fprintf(stderr, "failed to create array for field 'time_gmt_minute'");
      return false;
    }
    auto array_ptr = ros_message->time_gmt_minute.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tidevelocities
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->tidevelocities.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->tidevelocities);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->tidevelocities, size)) {
      fprintf(stderr, "failed to create array for field 'tidevelocities'");
      return false;
    }
    auto array_ptr = ros_message->tidevelocities.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tideconstituents
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tideconstituents = tmp ? true : false;
  }

  // Field name: m2_amp
  {
    cdr >> ros_message->m2_amp;
  }

  // Field name: m2_phase
  {
    cdr >> ros_message->m2_phase;
  }

  // Field name: m2_speed
  {
    cdr >> ros_message->m2_speed;
  }

  // Field name: s2_amp
  {
    cdr >> ros_message->s2_amp;
  }

  // Field name: s2_phase
  {
    cdr >> ros_message->s2_phase;
  }

  // Field name: s2_speed
  {
    cdr >> ros_message->s2_speed;
  }

  // Field name: n2_amp
  {
    cdr >> ros_message->n2_amp;
  }

  // Field name: n2_phase
  {
    cdr >> ros_message->n2_phase;
  }

  // Field name: n2_speed
  {
    cdr >> ros_message->n2_speed;
  }

  // Field name: ebb_direction
  {
    cdr >> ros_message->ebb_direction;
  }

  // Field name: flood_direction
  {
    cdr >> ros_message->flood_direction;
  }

  // Field name: world_start_time_year
  {
    cdr >> ros_message->world_start_time_year;
  }

  // Field name: world_start_time_month
  {
    cdr >> ros_message->world_start_time_month;
  }

  // Field name: world_start_time_day
  {
    cdr >> ros_message->world_start_time_day;
  }

  // Field name: world_start_time_hour
  {
    cdr >> ros_message->world_start_time_hour;
  }

  // Field name: world_start_time_minute
  {
    cdr >> ros_message->world_start_time_minute;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dave_interfaces
size_t get_serialized_size_dave_interfaces__msg__StratifiedCurrentDatabase(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StratifiedCurrentDatabase__ros_msg_type * ros_message = static_cast<const _StratifiedCurrentDatabase__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name depths
  {
    size_t array_size = ros_message->depths.size;
    auto array_ptr = ros_message->depths.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocities
  {
    size_t array_size = ros_message->velocities.size;
    auto array_ptr = ros_message->velocities.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name time_gmt_year
  {
    size_t array_size = ros_message->time_gmt_year.size;
    auto array_ptr = ros_message->time_gmt_year.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_gmt_month
  {
    size_t array_size = ros_message->time_gmt_month.size;
    auto array_ptr = ros_message->time_gmt_month.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_gmt_day
  {
    size_t array_size = ros_message->time_gmt_day.size;
    auto array_ptr = ros_message->time_gmt_day.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_gmt_hour
  {
    size_t array_size = ros_message->time_gmt_hour.size;
    auto array_ptr = ros_message->time_gmt_hour.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_gmt_minute
  {
    size_t array_size = ros_message->time_gmt_minute.size;
    auto array_ptr = ros_message->time_gmt_minute.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tidevelocities
  {
    size_t array_size = ros_message->tidevelocities.size;
    auto array_ptr = ros_message->tidevelocities.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tideconstituents
  {
    size_t item_size = sizeof(ros_message->tideconstituents);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name m2_amp
  {
    size_t item_size = sizeof(ros_message->m2_amp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name m2_phase
  {
    size_t item_size = sizeof(ros_message->m2_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name m2_speed
  {
    size_t item_size = sizeof(ros_message->m2_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name s2_amp
  {
    size_t item_size = sizeof(ros_message->s2_amp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name s2_phase
  {
    size_t item_size = sizeof(ros_message->s2_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name s2_speed
  {
    size_t item_size = sizeof(ros_message->s2_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name n2_amp
  {
    size_t item_size = sizeof(ros_message->n2_amp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name n2_phase
  {
    size_t item_size = sizeof(ros_message->n2_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name n2_speed
  {
    size_t item_size = sizeof(ros_message->n2_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ebb_direction
  {
    size_t item_size = sizeof(ros_message->ebb_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flood_direction
  {
    size_t item_size = sizeof(ros_message->flood_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name world_start_time_year
  {
    size_t item_size = sizeof(ros_message->world_start_time_year);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name world_start_time_month
  {
    size_t item_size = sizeof(ros_message->world_start_time_month);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name world_start_time_day
  {
    size_t item_size = sizeof(ros_message->world_start_time_day);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name world_start_time_hour
  {
    size_t item_size = sizeof(ros_message->world_start_time_hour);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name world_start_time_minute
  {
    size_t item_size = sizeof(ros_message->world_start_time_minute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StratifiedCurrentDatabase__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dave_interfaces__msg__StratifiedCurrentDatabase(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dave_interfaces
size_t max_serialized_size_dave_interfaces__msg__StratifiedCurrentDatabase(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: depths
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocities
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: time_gmt_year
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: time_gmt_month
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: time_gmt_day
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: time_gmt_hour
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: time_gmt_minute
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: tidevelocities
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tideconstituents
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: m2_amp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: m2_phase
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: m2_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: s2_amp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: s2_phase
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: s2_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: n2_amp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: n2_phase
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: n2_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ebb_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: flood_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: world_start_time_year
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: world_start_time_month
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: world_start_time_day
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: world_start_time_hour
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: world_start_time_minute
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dave_interfaces__msg__StratifiedCurrentDatabase;
    is_plain =
      (
      offsetof(DataType, world_start_time_minute) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _StratifiedCurrentDatabase__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dave_interfaces__msg__StratifiedCurrentDatabase(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StratifiedCurrentDatabase = {
  "dave_interfaces::msg",
  "StratifiedCurrentDatabase",
  _StratifiedCurrentDatabase__cdr_serialize,
  _StratifiedCurrentDatabase__cdr_deserialize,
  _StratifiedCurrentDatabase__get_serialized_size,
  _StratifiedCurrentDatabase__max_serialized_size
};

static rosidl_message_type_support_t _StratifiedCurrentDatabase__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StratifiedCurrentDatabase,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dave_interfaces, msg, StratifiedCurrentDatabase)() {
  return &_StratifiedCurrentDatabase__type_support;
}

#if defined(__cplusplus)
}
#endif
