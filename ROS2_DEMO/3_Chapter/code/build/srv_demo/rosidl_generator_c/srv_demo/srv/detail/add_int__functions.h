// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from srv_demo:srv/AddInt.idl
// generated code does not contain a copyright notice

#ifndef SRV_DEMO__SRV__DETAIL__ADD_INT__FUNCTIONS_H_
#define SRV_DEMO__SRV__DETAIL__ADD_INT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "srv_demo/msg/rosidl_generator_c__visibility_control.h"

#include "srv_demo/srv/detail/add_int__struct.h"

/// Initialize srv/AddInt message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * srv_demo__srv__AddInt_Request
 * )) before or use
 * srv_demo__srv__AddInt_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
bool
srv_demo__srv__AddInt_Request__init(srv_demo__srv__AddInt_Request * msg);

/// Finalize srv/AddInt message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
void
srv_demo__srv__AddInt_Request__fini(srv_demo__srv__AddInt_Request * msg);

/// Create srv/AddInt message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * srv_demo__srv__AddInt_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
srv_demo__srv__AddInt_Request *
srv_demo__srv__AddInt_Request__create();

/// Destroy srv/AddInt message.
/**
 * It calls
 * srv_demo__srv__AddInt_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
void
srv_demo__srv__AddInt_Request__destroy(srv_demo__srv__AddInt_Request * msg);

/// Check for srv/AddInt message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
bool
srv_demo__srv__AddInt_Request__are_equal(const srv_demo__srv__AddInt_Request * lhs, const srv_demo__srv__AddInt_Request * rhs);

/// Copy a srv/AddInt message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
bool
srv_demo__srv__AddInt_Request__copy(
  const srv_demo__srv__AddInt_Request * input,
  srv_demo__srv__AddInt_Request * output);

/// Initialize array of srv/AddInt messages.
/**
 * It allocates the memory for the number of elements and calls
 * srv_demo__srv__AddInt_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
bool
srv_demo__srv__AddInt_Request__Sequence__init(srv_demo__srv__AddInt_Request__Sequence * array, size_t size);

/// Finalize array of srv/AddInt messages.
/**
 * It calls
 * srv_demo__srv__AddInt_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
void
srv_demo__srv__AddInt_Request__Sequence__fini(srv_demo__srv__AddInt_Request__Sequence * array);

/// Create array of srv/AddInt messages.
/**
 * It allocates the memory for the array and calls
 * srv_demo__srv__AddInt_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
srv_demo__srv__AddInt_Request__Sequence *
srv_demo__srv__AddInt_Request__Sequence__create(size_t size);

/// Destroy array of srv/AddInt messages.
/**
 * It calls
 * srv_demo__srv__AddInt_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
void
srv_demo__srv__AddInt_Request__Sequence__destroy(srv_demo__srv__AddInt_Request__Sequence * array);

/// Check for srv/AddInt message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
bool
srv_demo__srv__AddInt_Request__Sequence__are_equal(const srv_demo__srv__AddInt_Request__Sequence * lhs, const srv_demo__srv__AddInt_Request__Sequence * rhs);

/// Copy an array of srv/AddInt messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
bool
srv_demo__srv__AddInt_Request__Sequence__copy(
  const srv_demo__srv__AddInt_Request__Sequence * input,
  srv_demo__srv__AddInt_Request__Sequence * output);

/// Initialize srv/AddInt message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * srv_demo__srv__AddInt_Response
 * )) before or use
 * srv_demo__srv__AddInt_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
bool
srv_demo__srv__AddInt_Response__init(srv_demo__srv__AddInt_Response * msg);

/// Finalize srv/AddInt message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
void
srv_demo__srv__AddInt_Response__fini(srv_demo__srv__AddInt_Response * msg);

/// Create srv/AddInt message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * srv_demo__srv__AddInt_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
srv_demo__srv__AddInt_Response *
srv_demo__srv__AddInt_Response__create();

/// Destroy srv/AddInt message.
/**
 * It calls
 * srv_demo__srv__AddInt_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
void
srv_demo__srv__AddInt_Response__destroy(srv_demo__srv__AddInt_Response * msg);

/// Check for srv/AddInt message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
bool
srv_demo__srv__AddInt_Response__are_equal(const srv_demo__srv__AddInt_Response * lhs, const srv_demo__srv__AddInt_Response * rhs);

/// Copy a srv/AddInt message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
bool
srv_demo__srv__AddInt_Response__copy(
  const srv_demo__srv__AddInt_Response * input,
  srv_demo__srv__AddInt_Response * output);

/// Initialize array of srv/AddInt messages.
/**
 * It allocates the memory for the number of elements and calls
 * srv_demo__srv__AddInt_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
bool
srv_demo__srv__AddInt_Response__Sequence__init(srv_demo__srv__AddInt_Response__Sequence * array, size_t size);

/// Finalize array of srv/AddInt messages.
/**
 * It calls
 * srv_demo__srv__AddInt_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
void
srv_demo__srv__AddInt_Response__Sequence__fini(srv_demo__srv__AddInt_Response__Sequence * array);

/// Create array of srv/AddInt messages.
/**
 * It allocates the memory for the array and calls
 * srv_demo__srv__AddInt_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
srv_demo__srv__AddInt_Response__Sequence *
srv_demo__srv__AddInt_Response__Sequence__create(size_t size);

/// Destroy array of srv/AddInt messages.
/**
 * It calls
 * srv_demo__srv__AddInt_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
void
srv_demo__srv__AddInt_Response__Sequence__destroy(srv_demo__srv__AddInt_Response__Sequence * array);

/// Check for srv/AddInt message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
bool
srv_demo__srv__AddInt_Response__Sequence__are_equal(const srv_demo__srv__AddInt_Response__Sequence * lhs, const srv_demo__srv__AddInt_Response__Sequence * rhs);

/// Copy an array of srv/AddInt messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_demo
bool
srv_demo__srv__AddInt_Response__Sequence__copy(
  const srv_demo__srv__AddInt_Response__Sequence * input,
  srv_demo__srv__AddInt_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SRV_DEMO__SRV__DETAIL__ADD_INT__FUNCTIONS_H_
