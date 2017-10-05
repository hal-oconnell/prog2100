cmake_minimum_required(VERSION 3.7)
project(LifeConsole)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Life.cpp
        life.h
        LifeConsole.cpp
        utility.cpp
        utility.h)

add_executable(LifeConsole ${SOURCE_FILES})