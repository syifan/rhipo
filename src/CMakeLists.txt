cmake_minimum_required(VERSION 3.2)

# Subdirectories
set(SUB_DIRS)
foreach (DIR ${SUB_DIRS})
  add_subdirectory(${DIR})
endforeach (DIR)

# The library that is shared by the driver and runtime implementation
set(SRC
    device.cc
    internal.h
    internal.cc
    kernel.cc
    memory.cc)
add_library(client STATIC ${SRC})
add_library(amdhip64 SHARED ${SRC})
set_target_properties(amdhip64
    PROPERTIES VERSION 3)
set_property(TARGET client
    PROPERTY COMPILE_FLAGS "-fPIC")