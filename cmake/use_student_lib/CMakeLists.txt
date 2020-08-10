cmake_minimum_required(VERSION 3.18.1)
project(Student)

set(CMAKE_CXX_FLAGS "-Wall -std=c++17")
set(PROJECT_LINK_LIBS libstudent_lib.dylib)
link_directories(../student_lib/build/)

include_directories(../student_lib/include)

add_executable(student main.cpp)
target_link_libraries(student ${PROJECT_LINK_LIBS})
