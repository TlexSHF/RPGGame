#ifndef RPGSPILL_GAMEMANAGER_H
#define RPGSPILL_GAMEMANAGER_H

#include <vector>
#include "PlayerCharacter.h"

//TODO i set a max on players, this too needs to be fixed
//This class should ideally be a <<Singleton>>

class GameManager {
public:
    GameManager();
    ~GameManager();
    void startGame();
private:
    std::vector<PlayerCharacter> m_Players; //Vector
    void runTurn(int n);
    void createCharacter(int nPlayer);
};


/*std::ostream& operator<<(std::ostream& os, GameClass gc) {
    switch(gc) {
        case GameClass::warrior:
            return os<<"warrior";
    }
}*/


#endif //RPGSPILL_GAMEMANAGER_H
