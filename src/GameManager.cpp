#include <iostream>
#include <sstream>
#include "../include/GameManager.h"
#include "../include/PlayerCharacter.h"
#include "../include/NonPlayableCharacter.h"

bool debugBoolean = false;

//TODO User input validation
// game actually only works for 2 players

void GameManager::startGame() {
    bool continueGame = true;
    std::cout << "Welcome to the Game! \n"
                 "Initializing 2 players ...\n"
                 "----------------------------" << std::endl;
    //Creating the players
    //for(int i = 0; i < 2; i++) {
    //TODO Just hardcoding this atm
    createPC(1);
    createNPC(2);
    //}
    std::cout << "Entering Arena...\n";
    //Running the game
    while(continueGame) {
        continueGame = runTurn();
    }
}
//TODO There are one HP that is being deleted at wrong time. It happens inside the "createPC"
bool GameManager::runTurn() {
    static unsigned round = 1;
    bool continueGame = true;
    //Print stats
    std::cout << "----------------------------\n"
                 "Round " << round << std::endl;
    uint8_t nOPlayers = m_players.size();
    for(uint8_t i = 0; i < nOPlayers; i++) {
        std::cout << " - Stats:\n";
        for(uint8_t k = 0; k < nOPlayers; k++) {
            std::cout << *m_players[k] << " the " << m_players[k]->getClass()
                        << ": " << m_players[k]->getHP() << " HP" << std::endl;
        }

        //TODO This is where all goes wrong
        // because: Character.runTurn is virtual
        // however: PlayerCharacter.runTurn is implemented
        // some say: Array m_players should be of pointers
        /*if(m_players[i]->getPlayerType() == PlayerType::PC) {
            dynamic_cast<PlayerCharacter*>(m_players[i])->runTurn(m_players);
        }*/
        m_players[i]->runTurn(m_players);

        for(uint8_t j = 0; j < nOPlayers; j++) {
            if(m_players[j]->getHP() == 0) {
                std::cout << *m_players[j] << " died." << std::endl; //TODO Little bug here making it go one round before anyone dies
                continueGame = false;                               // It prints: player died, but does not exit the loop until one turn
                break;
            }
        }
    }
    round++;
    return continueGame;
}

void GameManager::createPC(unsigned nPlayer) {
    int pClass = 0;
    std::string pName = {};

    std::cout << "Player Classes:\n"
                 "   0 - Warrior\n   1 - Ranger\n   2 - Druid\n"
                 "Pick player " << nPlayer << "'s class:";
    std::cin >> pClass;
    if (pClass == 0 ) {
        std::cout << "You chose Warrior!" << std::endl;
    } else if (pClass == 1) {
        std::cout << "You chose Ranger!" << std::endl;
    } else if(pClass == 2) {
        std::cout << "You chose Druid!" << std::endl;
    } else {
        std::cout << "Invalid class choice" << std::endl;
    } std::cout << "Write player " << nPlayer << "'s name:";
    std::cin >> pName;
    std::cout << "Hello " << pName
            << "\n----------------------------" << std::endl;

    m_players.push_back(new PlayerCharacter(pName, (GameClass)pClass, PlayerType::PC));
}
void GameManager::createNPC(unsigned nPlayer) {
    int pClass = 0;
    std::string pName = {};

    std::cout << "Player " << nPlayer << "'s class and name will be chosen\n";
    pClass = rand() % 3;
    pName = generateRdmName();
    std::cout << "Welcome " << pName << std::endl;
    m_players.push_back(new NonPlayableCharacter(pName, (GameClass)pClass, PlayerType::NPC));
}

std::string GameManager::generateRdmName() {
    std::ostringstream name;
    name << (char) (65 + (rand() % 26));
    name << (char) (97 + (rand() % 26));
    name << (char) (97 + (rand() % 26));
    name << (char) (97 + (rand() % 26));
    name << (char) (97 + (rand() % 26));


    return name.str();
}

GameManager::GameManager() {
    if(debugBoolean) {
        std::cout << ">>>> constructing GameManager" << std::endl;
    }
}
GameManager::~GameManager() {
    if(debugBoolean) {
        std::cout << ">>>> destructing GameManager" << std::endl;
    }
    for(Character* player : m_players) {
        delete player;
    }
}





