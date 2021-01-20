#ifndef RPGSPILL_PLAYERCHARACTER_H
#define RPGSPILL_PLAYERCHARACTER_H

#include <string>
#include <vector>
#include "Attack.h"

enum class GameClass{warrior, ranger, druid};

class PlayerCharacter {
public:
    void runTurn();
    void attack();
    PlayerCharacter(std::string& name, GameClass gameClass);
    std::string getName();
    GameClass getClass();
    int getHP();
    int getMaxHP();
    ~PlayerCharacter();
private:
    std::string m_name;
    GameClass m_class;
    int m_hitPoints;
    int m_maxHP;
    std::vector<Attack> m_Attacks;
};


#endif //RPGSPILL_PLAYERCHARACTER_H
