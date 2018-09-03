cmake_minimum_required (VERSION 2.6)

project (CppCMakePr1)

# add_executable(CppCMakePr1 CppCMakePr1.cpp)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_executable (
	sample
	main.cpp
)
