#include <iostream>
#include "../include/GameManager.h"

//TODO User input validation
// game actually only works for 2 players

void GameManager::startGame() {
    std::cout << "Welcome to the Game! \n"
                 "Initializing 2 players ...\n"
                 "----------------------------" << std::endl;
    for(int i = 0; i < 2; i++) {
        createCharacter(i + 1);
    }
    for(int i = 0; i < 2; i++) {
        runTurn(i + 1);
    }
}

void GameManager::runTurn(int n) {
    std::cout << "Entering Arena\n"
                 "Round 1 - Stats:\n";
    for(PlayerCharacter pc : m_Players) {
        std::cout << pc.getName() << ": " << pc.getHP() << '/' << pc.getMaxHP() << std::endl;
    }

    for(PlayerCharacter pc : m_Players) {
        pc.runTurn();
    }
}

void GameManager::createCharacter(int nPlayer) {
    int pClass = 0;
    std::string pName = {};

    std::cout << "Player Classes:\n"
                 "   1 - Warrior\n   2 - Ranger\n   3 - Druid\n"
                 "Pick player " << nPlayer << "'s class:";
    std::cin >> pClass;
    if(pClass == 1)
        std::cout << "You chose Warrior!" << std::endl;
    else if(pClass == 2)
        std::cout << "You chose Ranger!" << std::endl;
    else if(pClass == 3)
        std::cout << "You chose Druid!" << std::endl;
    else
        std::cout << "Invalid class choice" << std::endl;
    std::cout << "Write player " << nPlayer << "'s name:";
    std::cin >> pName;
    std::cout << "Hello " << pName
                << "\n----------------------------" << std::endl;

    pClass--; //Converts from 'user friendly' to 'enum/computer friendly'
    m_Players.emplace_back( pName, (GameClass)pClass);
}

GameManager::GameManager() {
    //std::cout << "Constructing GameManager" << std::endl;
}

GameManager::~GameManager() {
    //std::cout << "Destructing GameManager" << std::endl;
}



