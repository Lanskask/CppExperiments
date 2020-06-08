cmake_minimum_required(VERSION 3.15)
project(TestProj1)

set(CMAKE_CXX_STANDARD 14)

file(GLOB source_files
    "in_dir/*.cpp"
)

file(GLOB Person
    "Person/*.cpp"
    "Person/*.h"
)

#add_executable(OOP_Proj main.cpp in_dir/Car.cpp in_dir/Car.h in_dir/Monster.cpp in_dir/Monster.h)
#add_executable(OOP_Proj main.cpp ${source_files} Person.cpp Person.h Address.h)
#add_executable(OOP_Proj main.cpp Person.cpp Person.h Address.h MainOop.cpp MainOop.h)

add_executable(Oop MainOop.cpp
        common.h
        ${oop_classes}
    )

add_executable(MemoryManagement MainMemoryManagement.cpp
        common.h
)

add_executable(Templates TemplatesMain.cpp
        templates_common.h
)

add_executable(StdLybraryMain StdCollectionsMain.cpp
        stdlyb_common.h
)

add_executable(StdAlgorithmsMain StdAlgorithmsMain.cpp
        stdlyb_common.h
)

add_executable(StdStreamsMain StdStreamsMain.cpp
        stdlyb_common.h
)

add_executable(StdNumericsMain StdNumericsMain.cpp
        stdlyb_common.h
)