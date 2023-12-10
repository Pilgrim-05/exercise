cmake_minimum_required(VERSION 3.5)

project(Pair LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADERS Pair1.h Pair2.h StringValuePair.h)
set(SRC main.cpp)

add_executable(Pair ${HEADERS} ${SRC})
