cmake_minimum_required(VERSION 3.5)

project(MonsterHunter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADERS creature.h player.h monster.h)
set(SRC monster.cpp player.cpp creature.cpp main.cpp)

add_executable(MonsterHunter ${HEADERS} ${SRC})
