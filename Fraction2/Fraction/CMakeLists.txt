cmake_minimum_required(VERSION 3.5)

project(Fraction LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADERS fraction.h)
set(SRC fraction.cpp main.cpp)

add_executable(Fraction ${HEADERS} ${SRC})
