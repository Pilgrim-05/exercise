cmake_minimum_required(VERSION 3.5)

project(Friends LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#set(HEADERS vector3D.h point3D.h)
set(SRC main.cpp )#vector3D.cpp point3D.cpp

add_executable(Friends ${SRC} ${HEADERS})
