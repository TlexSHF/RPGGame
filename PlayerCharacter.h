#ifndef RPGSPILL_PLAYERCHARACTER_H
#define RPGSPILL_PLAYERCHARACTER_H

#include "Attack.h"
#include <string>

class PlayerCharacter {
protected:
    std::string m_name = {};
    Attack m_attacks[2];
    int m_numAttacks = 0;
    int m_hitPoints = 0;

public:
    PlayerCharacter(std::string name);
    void runTurn();
    void hit();
    void addAttack(std::string name, int damage, int cooldown);
    int getAttacks();
    int getHP();
};


#endif //RPGSPILL_PLAYERCHARACTER_H
