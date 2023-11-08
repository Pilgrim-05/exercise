cmake_minimum_required(VERSION 3.5)

project(Point LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADERS point.h)
set(SRC point.cpp main.cpp)
add_executable(Point ${HEADERS} ${SRC})
