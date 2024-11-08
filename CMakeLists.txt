cmake_minimum_required(VERSION 3.10)
project(SequenceLibrary)

set(CMAKE_CXX_STANDARD 17)

add_library(sequence SHARED Sequence.cpp)

add_executable(main main.cpp)

target_link_libraries(main sequence)
