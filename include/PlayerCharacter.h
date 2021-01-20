#ifndef RPGSPILL_PLAYERCHARACTER_H
#define RPGSPILL_PLAYERCHARACTER_H

#include <string>
#include <vector>
#include "Attack.h"

enum class GameClass{warrior, ranger, druid};

class PlayerCharacter {
public:
    std::string getName();
    GameClass getClass();
    int getHP();
    int getMaxHP();
    Attack* getAttacks();
    void runTurn();
    void attack();
    PlayerCharacter();
    PlayerCharacter(std::string name, GameClass gameClass);
    ~PlayerCharacter();
private:
    std::string m_name;
    GameClass m_class;
    int m_hitPoints;
    int m_maxHP;
    std::vector<Attack> m_ptrAttacks;
};


#endif //RPGSPILL_PLAYERCHARACTER_H
