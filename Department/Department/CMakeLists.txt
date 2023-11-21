cmake_minimum_required(VERSION 3.5)

project(Department LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Department worker.h worker.cpp department.h department.cpp main.cpp)
