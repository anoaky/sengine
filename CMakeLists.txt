cmake_minimum_required(VERSION 4.0)
project(sengine)

set(CMAKE_CXX_STANDARD 20)

find_package(SDL3 REQUIRED)

add_library(sengine STATIC sengine.cpp)
add_executable(sengine_test main.cpp)
target_link_libraries(sengine SDL3::SDL3)
target_link_libraries(sengine_test sengine)