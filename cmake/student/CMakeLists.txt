cmake_minimum_required(VERSION 3.18.1)
project(Student)

set(CMAKE_CXX_FLAGS "-Wall -std=c++17")

include_directories(include)
file(GLOB SOURCES "src/*.cpp")

add_executable(student ${SOURCES})
