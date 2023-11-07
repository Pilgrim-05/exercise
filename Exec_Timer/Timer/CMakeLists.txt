cmake_minimum_required(VERSION 3.5)

project(Timer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(HEADERS timer.h)
set(SRC timer.cpp main.cpp)
add_executable(Timer ${HEADERS} ${SRC})
