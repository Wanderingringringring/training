// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_msgs:msg/WheelLegCmd.idl
// generated code does not contain a copyright notice
#include "rm_msgs/msg/detail/wheel_leg_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rm_msgs__msg__WheelLegCmd__init(rm_msgs__msg__WheelLegCmd * msg)
{
  if (!msg) {
    return false;
  }
  // right_phi1
  // right_phi4
  // left_phi1
  // left_phi4
  // right_wheel
  // left_wheel
  return true;
}

void
rm_msgs__msg__WheelLegCmd__fini(rm_msgs__msg__WheelLegCmd * msg)
{
  if (!msg) {
    return;
  }
  // right_phi1
  // right_phi4
  // left_phi1
  // left_phi4
  // right_wheel
  // left_wheel
}

bool
rm_msgs__msg__WheelLegCmd__are_equal(const rm_msgs__msg__WheelLegCmd * lhs, const rm_msgs__msg__WheelLegCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // right_phi1
  if (lhs->right_phi1 != rhs->right_phi1) {
    return false;
  }
  // right_phi4
  if (lhs->right_phi4 != rhs->right_phi4) {
    return false;
  }
  // left_phi1
  if (lhs->left_phi1 != rhs->left_phi1) {
    return false;
  }
  // left_phi4
  if (lhs->left_phi4 != rhs->left_phi4) {
    return false;
  }
  // right_wheel
  if (lhs->right_wheel != rhs->right_wheel) {
    return false;
  }
  // left_wheel
  if (lhs->left_wheel != rhs->left_wheel) {
    return false;
  }
  return true;
}

bool
rm_msgs__msg__WheelLegCmd__copy(
  const rm_msgs__msg__WheelLegCmd * input,
  rm_msgs__msg__WheelLegCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // right_phi1
  output->right_phi1 = input->right_phi1;
  // right_phi4
  output->right_phi4 = input->right_phi4;
  // left_phi1
  output->left_phi1 = input->left_phi1;
  // left_phi4
  output->left_phi4 = input->left_phi4;
  // right_wheel
  output->right_wheel = input->right_wheel;
  // left_wheel
  output->left_wheel = input->left_wheel;
  return true;
}

rm_msgs__msg__WheelLegCmd *
rm_msgs__msg__WheelLegCmd__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__WheelLegCmd * msg = (rm_msgs__msg__WheelLegCmd *)allocator.allocate(sizeof(rm_msgs__msg__WheelLegCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_msgs__msg__WheelLegCmd));
  bool success = rm_msgs__msg__WheelLegCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_msgs__msg__WheelLegCmd__destroy(rm_msgs__msg__WheelLegCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_msgs__msg__WheelLegCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_msgs__msg__WheelLegCmd__Sequence__init(rm_msgs__msg__WheelLegCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__WheelLegCmd * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(rm_msgs__msg__WheelLegCmd)) {
      return false;
    }
    data = (rm_msgs__msg__WheelLegCmd *)allocator.zero_allocate(size, sizeof(rm_msgs__msg__WheelLegCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_msgs__msg__WheelLegCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_msgs__msg__WheelLegCmd__fini(&data[i - 1]);
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
rm_msgs__msg__WheelLegCmd__Sequence__fini(rm_msgs__msg__WheelLegCmd__Sequence * array)
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
      rm_msgs__msg__WheelLegCmd__fini(&array->data[i]);
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

rm_msgs__msg__WheelLegCmd__Sequence *
rm_msgs__msg__WheelLegCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__WheelLegCmd__Sequence * array = (rm_msgs__msg__WheelLegCmd__Sequence *)allocator.allocate(sizeof(rm_msgs__msg__WheelLegCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_msgs__msg__WheelLegCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_msgs__msg__WheelLegCmd__Sequence__destroy(rm_msgs__msg__WheelLegCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_msgs__msg__WheelLegCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_msgs__msg__WheelLegCmd__Sequence__are_equal(const rm_msgs__msg__WheelLegCmd__Sequence * lhs, const rm_msgs__msg__WheelLegCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_msgs__msg__WheelLegCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_msgs__msg__WheelLegCmd__Sequence__copy(
  const rm_msgs__msg__WheelLegCmd__Sequence * input,
  rm_msgs__msg__WheelLegCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(rm_msgs__msg__WheelLegCmd)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(rm_msgs__msg__WheelLegCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_msgs__msg__WheelLegCmd * data =
      (rm_msgs__msg__WheelLegCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_msgs__msg__WheelLegCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_msgs__msg__WheelLegCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_msgs__msg__WheelLegCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
