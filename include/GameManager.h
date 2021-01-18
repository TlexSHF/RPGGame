#ifndef RPGSPILL_GAMEMANAGER_H
#define RPGSPILL_GAMEMANAGER_H

#include "PlayerCharacter.h"

//TODO i set a max on players, this too needs to be fixed
//This class should ideally be a <<Singleton>>

class GameManager {
private:
    PlayerCharacter* m_players;
    void startGame();
    PlayerCharacter* createCharacter(int nPlayer);
public:
    GameManager();
    ~GameManager();
    void run();

};


/*std::ostream& operator<<(std::ostream& os, GameClass gc) {
    switch(gc) {
        case GameClass::warrior:
            return os<<"warrior";
    }
}*/


#endif //RPGSPILL_GAMEMANAGER_H
