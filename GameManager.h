#ifndef RPGSPILL_GAMEMANAGER_H
#define RPGSPILL_GAMEMANAGER_H

#include "PlayerCharacter.h"

//TODO i set a max on players, this too needs to be fixed
//This class should ideally be a <<Singleton>>
class GameManager {
private:
    PlayerCharacter m_players[3];
    void startGame();
    void createCharacter(int nPlayer);
public:
    void run();

};


#endif //RPGSPILL_GAMEMANAGER_H
