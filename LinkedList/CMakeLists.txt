cmake_minimum_required(VERSION 3.22)

message(STATUS "This is Linked List Data Structure")

add_library(linked_list_cpp
    linked_list.cpp
    include/linked_list.hpp
)

add_library(linked_list_c
    linked_list.c
    include/linked_list.h
)

target_include_directories(linked_list_cpp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(linked_list_c PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

message(STATUS "The Linked List Library is generated successfully")
