cmake_minimum_required(VERSION 3.18.1)
project(Student_Lib)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS "-Wall -std=c++17")

include_directories(include)
file(GLOB SOURCES "src/*.cpp")

add_library(student_lib SHARED ${SOURCES})
