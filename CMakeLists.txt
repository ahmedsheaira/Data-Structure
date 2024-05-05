cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(DataStructure VERSION 1.0)

set(SRC_FILES_CXX
    main.cpp
    Array/array.cpp
    LinkedList/linked_list.cpp
    Queue/queue.cpp
    Stack/stack.cpp
    )

set(SRC_FILES_C
    main.c
    LinkedList/linked_list.c
    Queue/queue.c
    Stack/stack.c
    )

add_executable(datastructure_cpp ${SRC_FILES_CXX})

add_executable(datastructure_c ${SRC_FILES_C})

target_include_directories(datastructure_cpp PUBLIC Array/include LinkedList/include Queue/include Stack/include)
target_include_directories(datastructure_c PUBLIC Array/include LinkedList/include Queue/include Stack/include)