cmake_minimum_required(VERSION 3.7)
project(C-Plus-Plus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(C-Plus-Plus DS/queue/linked-list-queue.cpp)
