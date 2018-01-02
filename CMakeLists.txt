cmake_minimum_required(VERSION 2.8)

project(bcache-recovery)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/Modules/" ${CMAKE_MODULE_PATH})

set(CMAKE_BUILD_TYPE Release)

#include (FindPkgConfig)

option(Build_O3 "Build with O3 optimization" ON )

if ( Build_O3 )
    set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS}  -O3")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")
endif( Build_O4 )

find_package(OpenMP)
if (OPENMP_FOUND)
    set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
endif()

set(
    CMAKE_RUNTIME_OUTPUT_DIRECTORY
    ${CMAKE_HOME_DIRECTORY}/bin
 )

add_subdirectory(src)

