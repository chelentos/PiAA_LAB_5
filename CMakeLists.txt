cmake_minimum_required(VERSION 3.10) #checking CMake version

project(lab5) #name of the project

include_directories(./include)

add_library(str_funcs ./source/string_functions.cpp)
target_compile_features(str_funcs PRIVATE cxx_std_11)

add_library(vs_funcs ./source/KMP_vs_BROOT_FORCE.cpp)
target_compile_features(vs_funcs PRIVATE cxx_std_11)

add_executable(step1 ./source/step1.cpp)
add_executable(step2 ./source/step2.cpp)
add_executable(versus ./source/versus.cpp)
add_executable(vs_tests ./source/versus_test.cpp)

target_link_libraries(step1 str_funcs)
target_link_libraries(step2 str_funcs)
target_link_libraries(versus vs_funcs)
target_link_libraries(vs_tests vs_funcs)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
add_executable(G_tests ./gtests/tests.cpp)
target_link_libraries(G_tests ${GTEST_LIBRARIES} pthread str_funcs)
