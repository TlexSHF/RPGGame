#ifndef RPGSPILL_PLAYERCHARACTER_H
#define RPGSPILL_PLAYERCHARACTER_H

#include "Attack.h"
#include <string>

enum class GameClass{warrior, ranger, druid};

class PlayerCharacter {
public:
    void runTurn();
    void hit();
    int getAttacks();
    int getHP();
    PlayerCharacter();
    PlayerCharacter(std::string name, GameClass gameClass);
    ~PlayerCharacter();
protected:
    std::string m_name;
    GameClass m_class;
    int m_hitPoints;
    Attack* m_attacks;
};


#endif //RPGSPILL_PLAYERCHARACTER_H
