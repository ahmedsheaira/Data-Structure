cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(DataStructure VERSION 1.0)

set(SRC_FILES_CXX
    main.cpp
    Array/array.cpp
    Queue/queue.cpp
    Stack/stack.cpp)

set(SRC_FILES_C
    main.c
    Queue/queue.c
    Stack/stack.c)

add_subdirectory(${CMAKE_SOURCE_DIR}/LinkedList)
add_subdirectory(${CMAKE_SOURCE_DIR}/Array)
add_subdirectory(${CMAKE_SOURCE_DIR}/Queue)


add_executable(datastructure_cpp ${SRC_FILES_CXX})

add_executable(datastructure_c ${SRC_FILES_C})

target_include_directories(datastructure_cpp PUBLIC Stack/include/)

target_link_libraries(datastructure_cpp PUBLIC linked_list_cpp array_cpp queue_cpp)

target_include_directories(datastructure_c PUBLIC Stack/include/)

target_link_libraries(datastructure_c PUBLIC linked_list_c queue_c)
