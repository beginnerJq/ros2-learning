// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from chat4_interfaces:srv/FaceDector.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "chat4_interfaces/srv/detail/face_dector__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace chat4_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void FaceDector_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) chat4_interfaces::srv::FaceDector_Request(_init);
}

void FaceDector_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<chat4_interfaces::srv::FaceDector_Request *>(message_memory);
  typed_message->~FaceDector_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FaceDector_Request_message_member_array[1] = {
  {
    "image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chat4_interfaces::srv::FaceDector_Request, image),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FaceDector_Request_message_members = {
  "chat4_interfaces::srv",  // message namespace
  "FaceDector_Request",  // message name
  1,  // number of fields
  sizeof(chat4_interfaces::srv::FaceDector_Request),
  FaceDector_Request_message_member_array,  // message members
  FaceDector_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FaceDector_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FaceDector_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FaceDector_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace chat4_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chat4_interfaces::srv::FaceDector_Request>()
{
  return &::chat4_interfaces::srv::rosidl_typesupport_introspection_cpp::FaceDector_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chat4_interfaces, srv, FaceDector_Request)() {
  return &::chat4_interfaces::srv::rosidl_typesupport_introspection_cpp::FaceDector_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "chat4_interfaces/srv/detail/face_dector__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace chat4_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void FaceDector_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) chat4_interfaces::srv::FaceDector_Response(_init);
}

void FaceDector_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<chat4_interfaces::srv::FaceDector_Response *>(message_memory);
  typed_message->~FaceDector_Response();
}

size_t size_function__FaceDector_Response__top(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FaceDector_Response__top(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__FaceDector_Response__top(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__FaceDector_Response__top(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__FaceDector_Response__top(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__FaceDector_Response__top(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__FaceDector_Response__top(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__FaceDector_Response__top(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FaceDector_Response__right(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FaceDector_Response__right(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__FaceDector_Response__right(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__FaceDector_Response__right(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__FaceDector_Response__right(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__FaceDector_Response__right(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__FaceDector_Response__right(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__FaceDector_Response__right(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FaceDector_Response__bottom(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FaceDector_Response__bottom(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__FaceDector_Response__bottom(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__FaceDector_Response__bottom(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__FaceDector_Response__bottom(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__FaceDector_Response__bottom(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__FaceDector_Response__bottom(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__FaceDector_Response__bottom(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FaceDector_Response__left(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FaceDector_Response__left(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__FaceDector_Response__left(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__FaceDector_Response__left(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__FaceDector_Response__left(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__FaceDector_Response__left(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__FaceDector_Response__left(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__FaceDector_Response__left(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FaceDector_Response_message_member_array[6] = {
  {
    "number",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chat4_interfaces::srv::FaceDector_Response, number),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "use_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chat4_interfaces::srv::FaceDector_Response, use_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "top",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chat4_interfaces::srv::FaceDector_Response, top),  // bytes offset in struct
    nullptr,  // default value
    size_function__FaceDector_Response__top,  // size() function pointer
    get_const_function__FaceDector_Response__top,  // get_const(index) function pointer
    get_function__FaceDector_Response__top,  // get(index) function pointer
    fetch_function__FaceDector_Response__top,  // fetch(index, &value) function pointer
    assign_function__FaceDector_Response__top,  // assign(index, value) function pointer
    resize_function__FaceDector_Response__top  // resize(index) function pointer
  },
  {
    "right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chat4_interfaces::srv::FaceDector_Response, right),  // bytes offset in struct
    nullptr,  // default value
    size_function__FaceDector_Response__right,  // size() function pointer
    get_const_function__FaceDector_Response__right,  // get_const(index) function pointer
    get_function__FaceDector_Response__right,  // get(index) function pointer
    fetch_function__FaceDector_Response__right,  // fetch(index, &value) function pointer
    assign_function__FaceDector_Response__right,  // assign(index, value) function pointer
    resize_function__FaceDector_Response__right  // resize(index) function pointer
  },
  {
    "bottom",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chat4_interfaces::srv::FaceDector_Response, bottom),  // bytes offset in struct
    nullptr,  // default value
    size_function__FaceDector_Response__bottom,  // size() function pointer
    get_const_function__FaceDector_Response__bottom,  // get_const(index) function pointer
    get_function__FaceDector_Response__bottom,  // get(index) function pointer
    fetch_function__FaceDector_Response__bottom,  // fetch(index, &value) function pointer
    assign_function__FaceDector_Response__bottom,  // assign(index, value) function pointer
    resize_function__FaceDector_Response__bottom  // resize(index) function pointer
  },
  {
    "left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chat4_interfaces::srv::FaceDector_Response, left),  // bytes offset in struct
    nullptr,  // default value
    size_function__FaceDector_Response__left,  // size() function pointer
    get_const_function__FaceDector_Response__left,  // get_const(index) function pointer
    get_function__FaceDector_Response__left,  // get(index) function pointer
    fetch_function__FaceDector_Response__left,  // fetch(index, &value) function pointer
    assign_function__FaceDector_Response__left,  // assign(index, value) function pointer
    resize_function__FaceDector_Response__left  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FaceDector_Response_message_members = {
  "chat4_interfaces::srv",  // message namespace
  "FaceDector_Response",  // message name
  6,  // number of fields
  sizeof(chat4_interfaces::srv::FaceDector_Response),
  FaceDector_Response_message_member_array,  // message members
  FaceDector_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FaceDector_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FaceDector_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FaceDector_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace chat4_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chat4_interfaces::srv::FaceDector_Response>()
{
  return &::chat4_interfaces::srv::rosidl_typesupport_introspection_cpp::FaceDector_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chat4_interfaces, srv, FaceDector_Response)() {
  return &::chat4_interfaces::srv::rosidl_typesupport_introspection_cpp::FaceDector_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "chat4_interfaces/srv/detail/face_dector__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace chat4_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers FaceDector_service_members = {
  "chat4_interfaces::srv",  // service namespace
  "FaceDector",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<chat4_interfaces::srv::FaceDector>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t FaceDector_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FaceDector_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace chat4_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<chat4_interfaces::srv::FaceDector>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::chat4_interfaces::srv::rosidl_typesupport_introspection_cpp::FaceDector_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::chat4_interfaces::srv::FaceDector_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::chat4_interfaces::srv::FaceDector_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chat4_interfaces, srv, FaceDector)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<chat4_interfaces::srv::FaceDector>();
}

#ifdef __cplusplus
}
#endif
