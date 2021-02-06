cmake_minimum_required(VERSION 3.17)
project(RPGSpill)

set(CMAKE_CXX_STANDARD 17)

add_executable(RPGSpill src/main.cpp src/Character.cpp include/Character.h src/Attack.cpp include/Attack.h src/GameManager.cpp include/GameManager.h src/HP.cpp include/HP.h src/PlayerCharacter.cpp include/PlayerCharacter.h)