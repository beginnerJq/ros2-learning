// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chat4_interfaces:srv/FaceDector.idl
// generated code does not contain a copyright notice

#ifndef CHAT4_INTERFACES__SRV__DETAIL__FACE_DECTOR__STRUCT_H_
#define CHAT4_INTERFACES__SRV__DETAIL__FACE_DECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/FaceDector in the package chat4_interfaces.
typedef struct chat4_interfaces__srv__FaceDector_Request
{
  /// 人脸图像
  sensor_msgs__msg__Image image;
} chat4_interfaces__srv__FaceDector_Request;

// Struct for a sequence of chat4_interfaces__srv__FaceDector_Request.
typedef struct chat4_interfaces__srv__FaceDector_Request__Sequence
{
  chat4_interfaces__srv__FaceDector_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chat4_interfaces__srv__FaceDector_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'top'
// Member 'right'
// Member 'bottom'
// Member 'left'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/FaceDector in the package chat4_interfaces.
typedef struct chat4_interfaces__srv__FaceDector_Response
{
  int16_t number;
  float use_time;
  rosidl_runtime_c__int32__Sequence top;
  rosidl_runtime_c__int32__Sequence right;
  rosidl_runtime_c__int32__Sequence bottom;
  rosidl_runtime_c__int32__Sequence left;
} chat4_interfaces__srv__FaceDector_Response;

// Struct for a sequence of chat4_interfaces__srv__FaceDector_Response.
typedef struct chat4_interfaces__srv__FaceDector_Response__Sequence
{
  chat4_interfaces__srv__FaceDector_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chat4_interfaces__srv__FaceDector_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHAT4_INTERFACES__SRV__DETAIL__FACE_DECTOR__STRUCT_H_
