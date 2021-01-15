#ifndef RPGSPILL_PLAYERCHARACTER_H
#define RPGSPILL_PLAYERCHARACTER_H

#include "Attack.h"
#include <string>

class PlayerCharacter {
private:
    std::string m_name = {};
    Attack m_attacks[2];
    int m_numAttacks = 0;
    int m_hitPoints = 0;

public:
    PlayerCharacter(std::string name, int hitPoints);
    void runTurn();
    void hit();
    void addAttack(std::string name, int damage, int cooldown);
    int getAttacks();
    int getHP();
};


#endif //RPGSPILL_PLAYERCHARACTER_H
