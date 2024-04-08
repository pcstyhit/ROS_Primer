// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from student_msg:msg/Student.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "student_msg/msg/detail/student__rosidl_typesupport_introspection_c.h"
#include "student_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "student_msg/msg/detail/student__functions.h"
#include "student_msg/msg/detail/student__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void student_msg__msg__Student__rosidl_typesupport_introspection_c__Student_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  student_msg__msg__Student__init(message_memory);
}

void student_msg__msg__Student__rosidl_typesupport_introspection_c__Student_fini_function(void * message_memory)
{
  student_msg__msg__Student__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember student_msg__msg__Student__rosidl_typesupport_introspection_c__Student_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(student_msg__msg__Student, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "exam",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(student_msg__msg__Student, exam),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(student_msg__msg__Student, score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers student_msg__msg__Student__rosidl_typesupport_introspection_c__Student_message_members = {
  "student_msg__msg",  // message namespace
  "Student",  // message name
  3,  // number of fields
  sizeof(student_msg__msg__Student),
  student_msg__msg__Student__rosidl_typesupport_introspection_c__Student_message_member_array,  // message members
  student_msg__msg__Student__rosidl_typesupport_introspection_c__Student_init_function,  // function to initialize message memory (memory has to be allocated)
  student_msg__msg__Student__rosidl_typesupport_introspection_c__Student_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t student_msg__msg__Student__rosidl_typesupport_introspection_c__Student_message_type_support_handle = {
  0,
  &student_msg__msg__Student__rosidl_typesupport_introspection_c__Student_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_student_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, student_msg, msg, Student)() {
  if (!student_msg__msg__Student__rosidl_typesupport_introspection_c__Student_message_type_support_handle.typesupport_identifier) {
    student_msg__msg__Student__rosidl_typesupport_introspection_c__Student_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &student_msg__msg__Student__rosidl_typesupport_introspection_c__Student_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
