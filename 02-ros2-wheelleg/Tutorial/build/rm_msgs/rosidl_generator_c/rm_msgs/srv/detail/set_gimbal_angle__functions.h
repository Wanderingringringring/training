// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rm_msgs:srv/SetGimbalAngle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_msgs/srv/set_gimbal_angle.h"


#ifndef RM_MSGS__SRV__DETAIL__SET_GIMBAL_ANGLE__FUNCTIONS_H_
#define RM_MSGS__SRV__DETAIL__SET_GIMBAL_ANGLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "rm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rm_msgs/srv/detail/set_gimbal_angle__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_type_hash_t *
rm_msgs__srv__SetGimbalAngle__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_runtime_c__type_description__TypeDescription *
rm_msgs__srv__SetGimbalAngle__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_runtime_c__type_description__TypeSource *
rm_msgs__srv__SetGimbalAngle__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_msgs__srv__SetGimbalAngle__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/SetGimbalAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rm_msgs__srv__SetGimbalAngle_Request
 * )) before or use
 * rm_msgs__srv__SetGimbalAngle_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
bool
rm_msgs__srv__SetGimbalAngle_Request__init(rm_msgs__srv__SetGimbalAngle_Request * msg);

/// Finalize srv/SetGimbalAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
void
rm_msgs__srv__SetGimbalAngle_Request__fini(rm_msgs__srv__SetGimbalAngle_Request * msg);

/// Create srv/SetGimbalAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rm_msgs__srv__SetGimbalAngle_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
rm_msgs__srv__SetGimbalAngle_Request *
rm_msgs__srv__SetGimbalAngle_Request__create(void);

/// Destroy srv/SetGimbalAngle message.
/**
 * It calls
 * rm_msgs__srv__SetGimbalAngle_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
void
rm_msgs__srv__SetGimbalAngle_Request__destroy(rm_msgs__srv__SetGimbalAngle_Request * msg);

/// Check for srv/SetGimbalAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
bool
rm_msgs__srv__SetGimbalAngle_Request__are_equal(const rm_msgs__srv__SetGimbalAngle_Request * lhs, const rm_msgs__srv__SetGimbalAngle_Request * rhs);

/// Copy a srv/SetGimbalAngle message.
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
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
bool
rm_msgs__srv__SetGimbalAngle_Request__copy(
  const rm_msgs__srv__SetGimbalAngle_Request * input,
  rm_msgs__srv__SetGimbalAngle_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_type_hash_t *
rm_msgs__srv__SetGimbalAngle_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_runtime_c__type_description__TypeDescription *
rm_msgs__srv__SetGimbalAngle_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_runtime_c__type_description__TypeSource *
rm_msgs__srv__SetGimbalAngle_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_msgs__srv__SetGimbalAngle_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetGimbalAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * rm_msgs__srv__SetGimbalAngle_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
bool
rm_msgs__srv__SetGimbalAngle_Request__Sequence__init(rm_msgs__srv__SetGimbalAngle_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetGimbalAngle messages.
/**
 * It calls
 * rm_msgs__srv__SetGimbalAngle_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
void
rm_msgs__srv__SetGimbalAngle_Request__Sequence__fini(rm_msgs__srv__SetGimbalAngle_Request__Sequence * array);

/// Create array of srv/SetGimbalAngle messages.
/**
 * It allocates the memory for the array and calls
 * rm_msgs__srv__SetGimbalAngle_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
rm_msgs__srv__SetGimbalAngle_Request__Sequence *
rm_msgs__srv__SetGimbalAngle_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetGimbalAngle messages.
/**
 * It calls
 * rm_msgs__srv__SetGimbalAngle_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
void
rm_msgs__srv__SetGimbalAngle_Request__Sequence__destroy(rm_msgs__srv__SetGimbalAngle_Request__Sequence * array);

/// Check for srv/SetGimbalAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
bool
rm_msgs__srv__SetGimbalAngle_Request__Sequence__are_equal(const rm_msgs__srv__SetGimbalAngle_Request__Sequence * lhs, const rm_msgs__srv__SetGimbalAngle_Request__Sequence * rhs);

/// Copy an array of srv/SetGimbalAngle messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
bool
rm_msgs__srv__SetGimbalAngle_Request__Sequence__copy(
  const rm_msgs__srv__SetGimbalAngle_Request__Sequence * input,
  rm_msgs__srv__SetGimbalAngle_Request__Sequence * output);

/// Initialize srv/SetGimbalAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rm_msgs__srv__SetGimbalAngle_Response
 * )) before or use
 * rm_msgs__srv__SetGimbalAngle_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
bool
rm_msgs__srv__SetGimbalAngle_Response__init(rm_msgs__srv__SetGimbalAngle_Response * msg);

/// Finalize srv/SetGimbalAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
void
rm_msgs__srv__SetGimbalAngle_Response__fini(rm_msgs__srv__SetGimbalAngle_Response * msg);

/// Create srv/SetGimbalAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rm_msgs__srv__SetGimbalAngle_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
rm_msgs__srv__SetGimbalAngle_Response *
rm_msgs__srv__SetGimbalAngle_Response__create(void);

/// Destroy srv/SetGimbalAngle message.
/**
 * It calls
 * rm_msgs__srv__SetGimbalAngle_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
void
rm_msgs__srv__SetGimbalAngle_Response__destroy(rm_msgs__srv__SetGimbalAngle_Response * msg);

/// Check for srv/SetGimbalAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
bool
rm_msgs__srv__SetGimbalAngle_Response__are_equal(const rm_msgs__srv__SetGimbalAngle_Response * lhs, const rm_msgs__srv__SetGimbalAngle_Response * rhs);

/// Copy a srv/SetGimbalAngle message.
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
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
bool
rm_msgs__srv__SetGimbalAngle_Response__copy(
  const rm_msgs__srv__SetGimbalAngle_Response * input,
  rm_msgs__srv__SetGimbalAngle_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_type_hash_t *
rm_msgs__srv__SetGimbalAngle_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_runtime_c__type_description__TypeDescription *
rm_msgs__srv__SetGimbalAngle_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_runtime_c__type_description__TypeSource *
rm_msgs__srv__SetGimbalAngle_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_msgs__srv__SetGimbalAngle_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetGimbalAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * rm_msgs__srv__SetGimbalAngle_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
bool
rm_msgs__srv__SetGimbalAngle_Response__Sequence__init(rm_msgs__srv__SetGimbalAngle_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetGimbalAngle messages.
/**
 * It calls
 * rm_msgs__srv__SetGimbalAngle_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
void
rm_msgs__srv__SetGimbalAngle_Response__Sequence__fini(rm_msgs__srv__SetGimbalAngle_Response__Sequence * array);

/// Create array of srv/SetGimbalAngle messages.
/**
 * It allocates the memory for the array and calls
 * rm_msgs__srv__SetGimbalAngle_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
rm_msgs__srv__SetGimbalAngle_Response__Sequence *
rm_msgs__srv__SetGimbalAngle_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetGimbalAngle messages.
/**
 * It calls
 * rm_msgs__srv__SetGimbalAngle_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
void
rm_msgs__srv__SetGimbalAngle_Response__Sequence__destroy(rm_msgs__srv__SetGimbalAngle_Response__Sequence * array);

/// Check for srv/SetGimbalAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
bool
rm_msgs__srv__SetGimbalAngle_Response__Sequence__are_equal(const rm_msgs__srv__SetGimbalAngle_Response__Sequence * lhs, const rm_msgs__srv__SetGimbalAngle_Response__Sequence * rhs);

/// Copy an array of srv/SetGimbalAngle messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
bool
rm_msgs__srv__SetGimbalAngle_Response__Sequence__copy(
  const rm_msgs__srv__SetGimbalAngle_Response__Sequence * input,
  rm_msgs__srv__SetGimbalAngle_Response__Sequence * output);

/// Initialize srv/SetGimbalAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rm_msgs__srv__SetGimbalAngle_Event
 * )) before or use
 * rm_msgs__srv__SetGimbalAngle_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
bool
rm_msgs__srv__SetGimbalAngle_Event__init(rm_msgs__srv__SetGimbalAngle_Event * msg);

/// Finalize srv/SetGimbalAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
void
rm_msgs__srv__SetGimbalAngle_Event__fini(rm_msgs__srv__SetGimbalAngle_Event * msg);

/// Create srv/SetGimbalAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rm_msgs__srv__SetGimbalAngle_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
rm_msgs__srv__SetGimbalAngle_Event *
rm_msgs__srv__SetGimbalAngle_Event__create(void);

/// Destroy srv/SetGimbalAngle message.
/**
 * It calls
 * rm_msgs__srv__SetGimbalAngle_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
void
rm_msgs__srv__SetGimbalAngle_Event__destroy(rm_msgs__srv__SetGimbalAngle_Event * msg);

/// Check for srv/SetGimbalAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
bool
rm_msgs__srv__SetGimbalAngle_Event__are_equal(const rm_msgs__srv__SetGimbalAngle_Event * lhs, const rm_msgs__srv__SetGimbalAngle_Event * rhs);

/// Copy a srv/SetGimbalAngle message.
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
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
bool
rm_msgs__srv__SetGimbalAngle_Event__copy(
  const rm_msgs__srv__SetGimbalAngle_Event * input,
  rm_msgs__srv__SetGimbalAngle_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_type_hash_t *
rm_msgs__srv__SetGimbalAngle_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_runtime_c__type_description__TypeDescription *
rm_msgs__srv__SetGimbalAngle_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_runtime_c__type_description__TypeSource *
rm_msgs__srv__SetGimbalAngle_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_msgs__srv__SetGimbalAngle_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetGimbalAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * rm_msgs__srv__SetGimbalAngle_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
bool
rm_msgs__srv__SetGimbalAngle_Event__Sequence__init(rm_msgs__srv__SetGimbalAngle_Event__Sequence * array, size_t size);

/// Finalize array of srv/SetGimbalAngle messages.
/**
 * It calls
 * rm_msgs__srv__SetGimbalAngle_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
void
rm_msgs__srv__SetGimbalAngle_Event__Sequence__fini(rm_msgs__srv__SetGimbalAngle_Event__Sequence * array);

/// Create array of srv/SetGimbalAngle messages.
/**
 * It allocates the memory for the array and calls
 * rm_msgs__srv__SetGimbalAngle_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
rm_msgs__srv__SetGimbalAngle_Event__Sequence *
rm_msgs__srv__SetGimbalAngle_Event__Sequence__create(size_t size);

/// Destroy array of srv/SetGimbalAngle messages.
/**
 * It calls
 * rm_msgs__srv__SetGimbalAngle_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
void
rm_msgs__srv__SetGimbalAngle_Event__Sequence__destroy(rm_msgs__srv__SetGimbalAngle_Event__Sequence * array);

/// Check for srv/SetGimbalAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
bool
rm_msgs__srv__SetGimbalAngle_Event__Sequence__are_equal(const rm_msgs__srv__SetGimbalAngle_Event__Sequence * lhs, const rm_msgs__srv__SetGimbalAngle_Event__Sequence * rhs);

/// Copy an array of srv/SetGimbalAngle messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rm_msgs
bool
rm_msgs__srv__SetGimbalAngle_Event__Sequence__copy(
  const rm_msgs__srv__SetGimbalAngle_Event__Sequence * input,
  rm_msgs__srv__SetGimbalAngle_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // RM_MSGS__SRV__DETAIL__SET_GIMBAL_ANGLE__FUNCTIONS_H_
