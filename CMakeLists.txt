cmake_minimum_required(VERSION 3.12)
project(Cheaters_)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Cheaters_
        dir_help.cpp
        HashMap.cpp
        HashMap.h
        plagiarismCatcher.cpp)
