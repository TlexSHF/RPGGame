#ifndef RPGSPILL_PLAYERCHARACTER_H
#define RPGSPILL_PLAYERCHARACTER_H

#include <string>
#include <vector>
#include "Attack.h"
#include "HP.h"

enum class GameClass{warrior, ranger, druid};

class PlayerCharacter {
public:
    PlayerCharacter(std::string& name, GameClass gameClass);
    ~PlayerCharacter();
    void runTurn(std::vector<PlayerCharacter>& pcs);

    /* Operator overloading */
    int operator-=(int amount);
    friend std::ostream& operator<<(std::ostream& outStream, const PlayerCharacter& pc);

    /* Getters */
    int getHP();
    std::string getClass() const;

private:
    std::string m_name;
    GameClass m_class;
    HP* m_hitPoints;
    std::vector<Attack> m_attacks;

    void attack(PlayerCharacter& pc, Attack& atk);
};


#endif //RPGSPILL_PLAYERCHARACTER_H
