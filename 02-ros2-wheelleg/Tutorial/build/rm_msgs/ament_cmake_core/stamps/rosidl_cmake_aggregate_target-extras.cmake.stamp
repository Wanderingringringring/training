# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target rm_msgs::rm_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${rm_msgs_TARGETS}.
if(rm_msgs_TARGETS AND NOT TARGET rm_msgs::rm_msgs)
  add_library(rm_msgs::rm_msgs INTERFACE IMPORTED)
  set_target_properties(rm_msgs::rm_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${rm_msgs_TARGETS}")
endif()
