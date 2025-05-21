// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chat4_interfaces:srv/FaceDector.idl
// generated code does not contain a copyright notice

#ifndef CHAT4_INTERFACES__SRV__DETAIL__FACE_DECTOR__BUILDER_HPP_
#define CHAT4_INTERFACES__SRV__DETAIL__FACE_DECTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chat4_interfaces/srv/detail/face_dector__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chat4_interfaces
{

namespace srv
{

namespace builder
{

class Init_FaceDector_Request_image
{
public:
  Init_FaceDector_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::chat4_interfaces::srv::FaceDector_Request image(::chat4_interfaces::srv::FaceDector_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chat4_interfaces::srv::FaceDector_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chat4_interfaces::srv::FaceDector_Request>()
{
  return chat4_interfaces::srv::builder::Init_FaceDector_Request_image();
}

}  // namespace chat4_interfaces


namespace chat4_interfaces
{

namespace srv
{

namespace builder
{

class Init_FaceDector_Response_left
{
public:
  explicit Init_FaceDector_Response_left(::chat4_interfaces::srv::FaceDector_Response & msg)
  : msg_(msg)
  {}
  ::chat4_interfaces::srv::FaceDector_Response left(::chat4_interfaces::srv::FaceDector_Response::_left_type arg)
  {
    msg_.left = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chat4_interfaces::srv::FaceDector_Response msg_;
};

class Init_FaceDector_Response_bottom
{
public:
  explicit Init_FaceDector_Response_bottom(::chat4_interfaces::srv::FaceDector_Response & msg)
  : msg_(msg)
  {}
  Init_FaceDector_Response_left bottom(::chat4_interfaces::srv::FaceDector_Response::_bottom_type arg)
  {
    msg_.bottom = std::move(arg);
    return Init_FaceDector_Response_left(msg_);
  }

private:
  ::chat4_interfaces::srv::FaceDector_Response msg_;
};

class Init_FaceDector_Response_right
{
public:
  explicit Init_FaceDector_Response_right(::chat4_interfaces::srv::FaceDector_Response & msg)
  : msg_(msg)
  {}
  Init_FaceDector_Response_bottom right(::chat4_interfaces::srv::FaceDector_Response::_right_type arg)
  {
    msg_.right = std::move(arg);
    return Init_FaceDector_Response_bottom(msg_);
  }

private:
  ::chat4_interfaces::srv::FaceDector_Response msg_;
};

class Init_FaceDector_Response_top
{
public:
  explicit Init_FaceDector_Response_top(::chat4_interfaces::srv::FaceDector_Response & msg)
  : msg_(msg)
  {}
  Init_FaceDector_Response_right top(::chat4_interfaces::srv::FaceDector_Response::_top_type arg)
  {
    msg_.top = std::move(arg);
    return Init_FaceDector_Response_right(msg_);
  }

private:
  ::chat4_interfaces::srv::FaceDector_Response msg_;
};

class Init_FaceDector_Response_use_time
{
public:
  explicit Init_FaceDector_Response_use_time(::chat4_interfaces::srv::FaceDector_Response & msg)
  : msg_(msg)
  {}
  Init_FaceDector_Response_top use_time(::chat4_interfaces::srv::FaceDector_Response::_use_time_type arg)
  {
    msg_.use_time = std::move(arg);
    return Init_FaceDector_Response_top(msg_);
  }

private:
  ::chat4_interfaces::srv::FaceDector_Response msg_;
};

class Init_FaceDector_Response_number
{
public:
  Init_FaceDector_Response_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceDector_Response_use_time number(::chat4_interfaces::srv::FaceDector_Response::_number_type arg)
  {
    msg_.number = std::move(arg);
    return Init_FaceDector_Response_use_time(msg_);
  }

private:
  ::chat4_interfaces::srv::FaceDector_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chat4_interfaces::srv::FaceDector_Response>()
{
  return chat4_interfaces::srv::builder::Init_FaceDector_Response_number();
}

}  // namespace chat4_interfaces

#endif  // CHAT4_INTERFACES__SRV__DETAIL__FACE_DECTOR__BUILDER_HPP_
