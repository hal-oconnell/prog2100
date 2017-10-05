cmake_minimum_required(VERSION 3.8)
project(minheritor_2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        animal.cpp
        animal.h
        cat.cpp
        cat.h
        fish.cpp
        fish.h
        human.cpp
        human.h
        main.cpp mammal.cpp mammal.h)

add_executable(minheritor_2 ${SOURCE_FILES})