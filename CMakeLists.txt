cmake_minimum_required(VERSION 3.20)
project(dgap_second)

set(CMAKE_CXX_STANDARD 20)

add_executable(dgap_second main.cpp)
add_executable(associative associative.cpp)
add_executable(hetero heterogenous.cpp)
