cmake_minimum_required(VERSION 3.27)
project(dziedziczenie)

set(CMAKE_CXX_STANDARD 17)

add_executable(dziedziczenie main.cpp
        book.h
        book.cpp
        human.h
        human.cpp
        worker.cpp)
