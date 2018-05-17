cmake_minimum_required(VERSION 3.10) #checking CMake version

project(lab5) #name of the project

include_directories(./include)

add_library(steps ./source/string_functions.cpp)

add_executable(step1 ./source/step1.cpp)
add_executable(step2 ./source/step2.cpp)

target_link_libraries(step1 steps)
target_link_libraries(step2 steps)
