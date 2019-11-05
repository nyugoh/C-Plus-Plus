cmake_minimum_required(VERSION 3.7)
project(C-Plus-Plus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES boost/test_setup.cpp)
find_package(Boost 1.69.0 COMPONENTS filesystem)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(C-Plus-Plus ${SOURCE_FILES})
    target_link_libraries(C-Plus-Plus ${Boost_LIBRARIES})
endif()
