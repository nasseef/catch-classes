# Created by: Nasseef Abukamail
#       Date: January 4, 2019
# this file configures how to create a makefile
# for the project.

cmake_minimum_required(VERSION 3.0)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

project(a.out)
add_executable(
    a.out
    rectangle-main.cc
    rectangle.cc
)
