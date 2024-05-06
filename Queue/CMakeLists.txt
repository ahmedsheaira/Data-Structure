cmake_minimum_required(VERSION 3.22)

message(STATUS "This is Queue Data Structure based on Linked List")

add_library(queue_cpp
            queue.cpp
            include/queue.hpp)

add_library(queue_c
            queue.c
            include/queue.h)

target_include_directories(queue_cpp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(queue_c PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

message(STATUS "The Queue Library is generated successfully")
