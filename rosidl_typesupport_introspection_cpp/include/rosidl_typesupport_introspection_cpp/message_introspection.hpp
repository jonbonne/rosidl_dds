#ifndef __rosidl_typesupport_introspection_cpp__MessageIntrospection__h__
#define __rosidl_typesupport_introspection_cpp__MessageIntrospection__h__

#include <cstddef>
#include <cstdint>

#include <rosidl_generator_c/message_type_support.h>
#include <rosidl_generator_c/visibility_control.h>

namespace rosidl_typesupport_introspection_cpp
{

struct ROSIDL_PUBLIC MessageMembers;

typedef struct ROSIDL_PUBLIC MessageMember
{
  const char * name_;
  uint8_t type_id_;
  size_t string_upper_bound_;
  const rosidl_message_type_support_t * members_;
  bool is_array_;
  size_t array_size_;
  bool is_upper_bound_;
  unsigned long offset_;
  const void * default_value_;
} MessageMember;

typedef struct ROSIDL_PUBLIC MessageMembers
{
  const char * package_name_;
  const char * message_name_;
  unsigned long member_count_;
  const MessageMember * members_;
} MessageMembers;

}  // namespace rosidl_typesupport_introspection_cpp

#endif  // __rosidl_typesupport_introspection_cpp__MessageIntrospection__h__