// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_msgs:msg/ChassisCmd.idl
// generated code does not contain a copyright notice
#include "rm_msgs/msg/detail/chassis_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rm_msgs__msg__ChassisCmd__init(rm_msgs__msg__ChassisCmd * msg)
{
  if (!msg) {
    return false;
  }
  // vx
  // vy
  // wz
  return true;
}

void
rm_msgs__msg__ChassisCmd__fini(rm_msgs__msg__ChassisCmd * msg)
{
  if (!msg) {
    return;
  }
  // vx
  // vy
  // wz
}

bool
rm_msgs__msg__ChassisCmd__are_equal(const rm_msgs__msg__ChassisCmd * lhs, const rm_msgs__msg__ChassisCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vx
  if (lhs->vx != rhs->vx) {
    return false;
  }
  // vy
  if (lhs->vy != rhs->vy) {
    return false;
  }
  // wz
  if (lhs->wz != rhs->wz) {
    return false;
  }
  return true;
}

bool
rm_msgs__msg__ChassisCmd__copy(
  const rm_msgs__msg__ChassisCmd * input,
  rm_msgs__msg__ChassisCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // vx
  output->vx = input->vx;
  // vy
  output->vy = input->vy;
  // wz
  output->wz = input->wz;
  return true;
}

rm_msgs__msg__ChassisCmd *
rm_msgs__msg__ChassisCmd__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__ChassisCmd * msg = (rm_msgs__msg__ChassisCmd *)allocator.allocate(sizeof(rm_msgs__msg__ChassisCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_msgs__msg__ChassisCmd));
  bool success = rm_msgs__msg__ChassisCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_msgs__msg__ChassisCmd__destroy(rm_msgs__msg__ChassisCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_msgs__msg__ChassisCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_msgs__msg__ChassisCmd__Sequence__init(rm_msgs__msg__ChassisCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__ChassisCmd * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(rm_msgs__msg__ChassisCmd)) {
      return false;
    }
    data = (rm_msgs__msg__ChassisCmd *)allocator.zero_allocate(size, sizeof(rm_msgs__msg__ChassisCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_msgs__msg__ChassisCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_msgs__msg__ChassisCmd__fini(&data[i - 1]);
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
rm_msgs__msg__ChassisCmd__Sequence__fini(rm_msgs__msg__ChassisCmd__Sequence * array)
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
      rm_msgs__msg__ChassisCmd__fini(&array->data[i]);
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

rm_msgs__msg__ChassisCmd__Sequence *
rm_msgs__msg__ChassisCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__ChassisCmd__Sequence * array = (rm_msgs__msg__ChassisCmd__Sequence *)allocator.allocate(sizeof(rm_msgs__msg__ChassisCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_msgs__msg__ChassisCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_msgs__msg__ChassisCmd__Sequence__destroy(rm_msgs__msg__ChassisCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_msgs__msg__ChassisCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_msgs__msg__ChassisCmd__Sequence__are_equal(const rm_msgs__msg__ChassisCmd__Sequence * lhs, const rm_msgs__msg__ChassisCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_msgs__msg__ChassisCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_msgs__msg__ChassisCmd__Sequence__copy(
  const rm_msgs__msg__ChassisCmd__Sequence * input,
  rm_msgs__msg__ChassisCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(rm_msgs__msg__ChassisCmd)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(rm_msgs__msg__ChassisCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_msgs__msg__ChassisCmd * data =
      (rm_msgs__msg__ChassisCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_msgs__msg__ChassisCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_msgs__msg__ChassisCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_msgs__msg__ChassisCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
