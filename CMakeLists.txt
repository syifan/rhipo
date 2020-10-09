cmake_minimum_required(VERSION 3.2)

project(rhipo)

# Include other files
list(APPEND CMAKE_MODULE_PATH
  "${PROJECT_SOURCE_DIR}/cmake")
message(${CMAKE_MODULE_PATH})
include(curl)

# Enable C++ 11
# ADD_DEFINITIONS(-std=gnu11)

# Add warning related flags
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

# Put results in bin/lib folder
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Inlcuding from root as default
include_directories(${CMAKE_BINARY_DIR})
include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/include)

add_definitions(-D__HIP_PLATFORM_HCC__)

# Include sub directories
set(SUB_DIRS src)
foreach (DIR ${SUB_DIRS})
  add_subdirectory(${DIR})
endforeach (DIR)

# coverage_evaluate()