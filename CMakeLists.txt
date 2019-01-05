cmake_minimum_required(VERSION 3.0)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

project(a.out)
add_executable(
    a.out
    rectangle-main.cc
    rectangle.cc
)