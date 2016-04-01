cmake_minimum_required(VERSION 3.3)
project(OnLineCoding)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES HackerEarth/CodeNation/HackerEarth_2014_Intern/geeko-and-tree-2.cpp GeeksForGeeks/Dynamic/Factorial.cpp HackerRank/private-factorial-set.cpp)
add_executable(OnLineCoding ${SOURCE_FILES})