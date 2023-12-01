cmake_minimum_required(VERSION 3.5)

project(Shapes LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(HEADERS Shape.h triangle.h circle.h point.h)
set(SRC triangle.cpp circle.cpp point.cpp main.cpp)


add_executable(Shapes ${HEADERS} ${SRC})
