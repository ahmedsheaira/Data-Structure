cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(DataStructure VERSION 1.0)

set(SRC_FILES
    main.cpp
    Array/array.cpp
    LinkedList/linked_list.cpp
    Queue/queue.cpp
    Stack/stack.cpp
    )

add_executable(datastructure ${SRC_FILES})

target_include_directories(datastructure PUBLIC Array/include LinkedList/include Queue/include Stack/include)