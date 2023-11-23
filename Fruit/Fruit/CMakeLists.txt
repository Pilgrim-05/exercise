cmake_minimum_required(VERSION 3.5)

project(Fruit LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADERS fruit.h apple.h banana.h)
set(SRC fruit.cpp apple.cpp banana.cpp main.cpp)

add_executable(Fruit ${HEADERS} ${SRC})
