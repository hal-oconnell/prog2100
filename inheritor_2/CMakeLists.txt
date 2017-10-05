cmake_minimum_required(VERSION 3.8)
project(inheritor_2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp animal.h fish.h cat.h animal.cpp fish.cpp cat.cpp human.cpp human.h)

add_executable(inheritor_2 ${SOURCE_FILES})