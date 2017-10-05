cmake_minimum_required(VERSION 3.7)
project(DynamicArrays)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        DynamicArrays.cpp)

add_executable(DynamicArrays ${SOURCE_FILES})