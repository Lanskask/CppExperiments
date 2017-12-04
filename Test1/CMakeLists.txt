cmake_minimum_required(VERSION 3.9)
project(Test1)

set(CMAKE_CXX_STANDARD 17)

#add_executable(Test1 main.cpp main2.cpp main2.h)
add_executable(Test1 #[[main.cpp]] main2.cpp #[[main2.h]])