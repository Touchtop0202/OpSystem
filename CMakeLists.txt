cmake_minimum_required(VERSION 3.16)
project(dynamic_memory_manage)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(dynamic_memory_manage
        include/memory_manage.h
        src/memory_manage.cpp
        src/test.cpp)
