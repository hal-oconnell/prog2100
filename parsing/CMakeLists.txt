cmake_minimum_required(VERSION 3.8)
project(parsing)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Source.cpp)

add_executable(parsing ${SOURCE_FILES})