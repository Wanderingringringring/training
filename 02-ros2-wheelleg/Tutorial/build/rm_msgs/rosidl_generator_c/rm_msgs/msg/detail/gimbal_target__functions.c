// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_msgs:msg/GimbalTarget.idl
// generated code does not contain a copyright notice
#include "rm_msgs/msg/detail/gimbal_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rm_msgs__msg__GimbalTarget__init(rm_msgs__msg__GimbalTarget * msg)
{
  if (!msg) {
    return false;
  }
  // yaw
  // pitch
  return true;
}

void
rm_msgs__msg__GimbalTarget__fini(rm_msgs__msg__GimbalTarget * msg)
{
  if (!msg) {
    return;
  }
  // yaw
  // pitch
}

bool
rm_msgs__msg__GimbalTarget__are_equal(const rm_msgs__msg__GimbalTarget * lhs, const rm_msgs__msg__GimbalTarget * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  return true;
}

bool
rm_msgs__msg__GimbalTarget__copy(
  const rm_msgs__msg__GimbalTarget * input,
  rm_msgs__msg__GimbalTarget * output)
{
  if (!input || !output) {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // pitch
  output->pitch = input->pitch;
  return true;
}

rm_msgs__msg__GimbalTarget *
rm_msgs__msg__GimbalTarget__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__GimbalTarget * msg = (rm_msgs__msg__GimbalTarget *)allocator.allocate(sizeof(rm_msgs__msg__GimbalTarget), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_msgs__msg__GimbalTarget));
  bool success = rm_msgs__msg__GimbalTarget__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_msgs__msg__GimbalTarget__destroy(rm_msgs__msg__GimbalTarget * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_msgs__msg__GimbalTarget__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_msgs__msg__GimbalTarget__Sequence__init(rm_msgs__msg__GimbalTarget__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__GimbalTarget * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(rm_msgs__msg__GimbalTarget)) {
      return false;
    }
    data = (rm_msgs__msg__GimbalTarget *)allocator.zero_allocate(size, sizeof(rm_msgs__msg__GimbalTarget), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_msgs__msg__GimbalTarget__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_msgs__msg__GimbalTarget__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rm_msgs__msg__GimbalTarget__Sequence__fini(rm_msgs__msg__GimbalTarget__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_msgs__msg__GimbalTarget__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rm_msgs__msg__GimbalTarget__Sequence *
rm_msgs__msg__GimbalTarget__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__GimbalTarget__Sequence * array = (rm_msgs__msg__GimbalTarget__Sequence *)allocator.allocate(sizeof(rm_msgs__msg__GimbalTarget__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_msgs__msg__GimbalTarget__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_msgs__msg__GimbalTarget__Sequence__destroy(rm_msgs__msg__GimbalTarget__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_msgs__msg__GimbalTarget__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_msgs__msg__GimbalTarget__Sequence__are_equal(const rm_msgs__msg__GimbalTarget__Sequence * lhs, const rm_msgs__msg__GimbalTarget__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_msgs__msg__GimbalTarget__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_msgs__msg__GimbalTarget__Sequence__copy(
  const rm_msgs__msg__GimbalTarget__Sequence * input,
  rm_msgs__msg__GimbalTarget__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(rm_msgs__msg__GimbalTarget)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(rm_msgs__msg__GimbalTarget);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_msgs__msg__GimbalTarget * data =
      (rm_msgs__msg__GimbalTarget *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_msgs__msg__GimbalTarget__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_msgs__msg__GimbalTarget__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_msgs__msg__GimbalTarget__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
