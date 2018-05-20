cmake_minimum_required(VERSION 3.10) #checking CMake version

project(lab5) #name of the project

set(CMAKE_CXX_FLAGS "-Wall -std=c++11")

include_directories(./include)

add_library(str_funcs ./source/string_functions.cpp)
target_compile_features(str_funcs PRIVATE cxx_std_11)

add_library(vs_funcs ./source/KMP_vs_BROOT_FORCE.cpp)
target_compile_features(vs_funcs PRIVATE cxx_std_11)

add_executable(kmp ./source/kmp.cpp)
add_executable(shift ./source/shift.cpp)
add_executable(versus ./source/versus.cpp)
add_executable(vs_tests ./source/versus_test.cpp)

target_link_libraries(kmp str_funcs)
target_link_libraries(shift str_funcs)
target_link_libraries(versus vs_funcs)
target_link_libraries(vs_tests vs_funcs)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
add_executable(kmp_gtests ./gtests/kmp_tests.cpp)
add_executable(shift_gtests ./gtests/shift_tests.cpp)
target_link_libraries(kmp_gtests ${GTEST_LIBRARIES} pthread str_funcs)
target_link_libraries(shift_gtests ${GTEST_LIBRARIES} pthread str_funcs)
