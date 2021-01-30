#ifndef RPGSPILL_PLAYERCHARACTER_H
#define RPGSPILL_PLAYERCHARACTER_H

#include <string>
#include <vector>
#include "Attack.h"

enum class GameClass{warrior, ranger, druid};

class PlayerCharacter {
public:
    void runTurn(std::vector<PlayerCharacter> &pcs);
    void subtractHP(int amount);
    friend std::ostream& operator<<(std::ostream& outStream, const PlayerCharacter& pc);
    int getHP();
    int getMaxHP();
    PlayerCharacter(std::string& name, GameClass gameClass);
    ~PlayerCharacter();
private:
    std::string m_name;
    GameClass m_class;
    int m_hitPoints;
    int m_maxHP;
    std::vector<Attack> m_attacks;

    void attack(PlayerCharacter &pc, Attack &atk);
};


#endif //RPGSPILL_PLAYERCHARACTER_H
