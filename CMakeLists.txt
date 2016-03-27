cmake_minimum_required(VERSION 3.3)
project(OnLineCoding)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES HackerRank/save-the-prisoner.cpp)
add_executable(OnLineCoding ${SOURCE_FILES})