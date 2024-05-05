cmake_minimum_required(VERSION 3.22)

message(STATUS "This is Array Abstract Data Structure")

add_library(array_cpp
            array.cpp
            include/array.hpp)

target_include_directories(array_cpp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include())

message(STATUS "The Array Abstract Data Structure is generated successfully")
