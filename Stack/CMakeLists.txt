cmake_minimum_required(VERSION 3.22)

message(STATUS "This is Stack Data Structure based on Linked List")

add_library(stack_cpp
    stack.cpp
    include/stack.hpp
)

add_library(stack_c
    stack.c
    include/stack.h
)

target_include_directories(stack_cpp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(stack_c PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

message(STATUS "The Stack Library is generated successfully")