cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(155_MinStack VERSION 1.0.0)

set(SRC_FILES src/stack.cpp src/node.cpp)
add_executable(155_MinStack src/main.cpp ${SRC_FILES})

target_include_directories(155_MinStack PUBLIC inc)

