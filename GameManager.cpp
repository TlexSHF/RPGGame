//
// Created by Simone Hoem Frøyset on 15/01/2021.
//

//TODO User input validation


#include <iostream>
#include "GameManager.h"
void GameManager::startGame() {

}

void GameManager::createCharacter(int nPlayer) {
    int pClass = 0;
    std::string pName = {};

    std::cout << "Player Classes:" << std::endl
              << "   1 - Warrior" << std::endl << "   2 - Ranger" << std::endl << "   3 - Druid" << std::endl
              << "Pick player " << nPlayer << "'s class:";
    std::cin >> pClass;
    std::cout << "You chose " << pClass << std::endl;
    std::cout << "Write player " << nPlayer << "'s name:";
    std::cin >> pName;
    std::cout << "Hello " << pName << std::endl;
    std::cout << "----------------------------" << std::endl;
}

void GameManager::run() {
    int nPlayers = 0;
    int i = 0;

    std::cout << "Welcome to the Game!" << std::endl
              << "Enter number of players:";
    std::cin >> nPlayers;
    std::cout << "Initializing " << nPlayers << " players ..." << std::endl
              << "----------------------------" << std::endl;

    for(; i < nPlayers; i++) {
        createCharacter(i+1);
        m_players =
    }





    startGame();
}






