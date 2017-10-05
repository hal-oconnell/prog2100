cmake_minimum_required(VERSION 3.8)
project(arrays)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        PassingArraysSource.cpp)

add_executable(arrays ${SOURCE_FILES})