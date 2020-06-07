cmake_minimum_required(VERSION 3.7)
project(Test1)

set(CMAKE_CXX_STANDARD 14)

#add_executable(MyMoney_APP main.cpp main2.cpp main2.h)
#add_executable(MyMoney_APP #[[main.cpp]] main2.cpp #[[main2.h]] Distance.cpp)
add_executable(Test1 main2.cpp Distance.cpp)