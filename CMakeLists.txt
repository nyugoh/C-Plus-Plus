cmake_minimum_required(VERSION 3.14)
project(C_Plus_Plus)

set(CMAKE_CXX_STANDARD 14)

include_directories(exercises/data-types)
include_directories(exercises/include)
include_directories(STL)

add_executable(C_Plus_Plus hacker-rank/compare_triplets.cpp)
