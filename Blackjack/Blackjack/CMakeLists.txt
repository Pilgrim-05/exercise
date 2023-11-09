cmake_minimum_required(VERSION 3.5)

project(Blackjack LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADERS card.h deck.h)
set(SRC main.cpp card.cpp deck.cpp)

add_executable(Blackjack ${HEADERS} ${SRC})
