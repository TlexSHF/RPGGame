cmake_minimum_required(VERSION 3.17)
project(RPGSpill)

set(CMAKE_CXX_STANDARD 17)

add_executable(RPGSpill main.cpp PlayerCharacter.cpp PlayerCharacter.h Attack.cpp Attack.h GameManager.cpp GameManager.h Druid.cpp Druid.h)