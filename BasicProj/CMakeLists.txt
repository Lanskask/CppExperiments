cmake_minimum_required(VERSION 2.8)

project(BasicProj)

file(GLOB helloworld_SRC
    "*.h"
    "*.cpp"
#    "*.c"
)

add_executable(${PROJECT_NAME} ${helloworld_SRC})
