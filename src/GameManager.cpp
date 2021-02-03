#include <iostream>
#include "../include/GameManager.h"

//TODO User input validation
// game actually only works for 2 players

void GameManager::startGame() {
    bool continueGame = true;
    std::cout << "Welcome to the Game! \n"
                 "Initializing 2 players ...\n"
                 "----------------------------" << std::endl;
    //Creating the players
    for(int i = 0; i < 2; i++) {
        createCharacter(i + 1);
    }
    std::cout << "Entering Arena...\n";
    //Running the game
    while(continueGame) {
        continueGame = runTurn();
    }
}

bool GameManager::runTurn() {
    static int round = 1;
    bool continueGame = true;
    //Print stats
    std::cout << "----------------------------\n"
                 "Round " << round << " - Stats:\n";
    for(PlayerCharacter pc : m_players) {
        std::cout << pc << " the " << pc.getClass() << ": " << pc.getHP() << " HP" << std::endl;
    }
    int pcSize = m_players.size();
    for(int i = 0; i < pcSize; i++) {
        m_players[i].runTurn(m_players);

        for(int j = 0; j < pcSize; j++) {
            if(m_players[j].getHP() == 0) {
                std::cout << m_players[j] << " died." << std::endl;
                continueGame = false;
                break;
            }
        }
    }
    round++;
    return continueGame;
}

void GameManager::createCharacter(int nPlayer) {
    int pClass = 0;
    std::string pName = {};

    std::cout << "Player Classes:\n"
                 "   1 - Warrior\n   2 - Ranger\n   3 - Druid\n"
                 "Pick player " << nPlayer << "'s class:";
    std::cin >> pClass;
    if (pClass == 1) {
        std::cout << "You chose Warrior!" << std::endl;
    } else if (pClass == 2) {
        std::cout << "You chose Ranger!" << std::endl;
    } else if(pClass == 3) {
        std::cout << "You chose Druid!" << std::endl;
    } else {
        std::cout << "Invalid class choice" << std::endl;
    } std::cout << "Write player " << nPlayer << "'s name:";
    std::cin >> pName;
    std::cout << "Hello " << pName
            << "\n----------------------------" << std::endl;

    pClass--; //Converts from 'user friendly' to 'enum/computer friendly'
    m_players.emplace_back(pName, (GameClass)pClass);
}

GameManager::GameManager() {
    //std::cout << "Constructing GameManager" << std::endl;
}

GameManager::~GameManager() {
    //std::cout << "Destructing GameManager" << std::endl;
}



