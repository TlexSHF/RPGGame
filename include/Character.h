#ifndef RPGSPILL_CHARACTER_H
#define RPGSPILL_CHARACTER_H

#include <string>
#include <vector>
#include "Attack.h"
#include "HP.h"

extern bool debugBoolean;

enum class GameClass : uint8_t{warrior, ranger, druid};
enum class PlayerType : uint8_t {PC, NPC};

class Character {
public:
    Character(std::string& name, GameClass gameClass, PlayerType);
    Character(const Character& other);    //CopyConstructor
    virtual ~Character();

    virtual void runTurn(std::vector<Character*>& pcs) = 0;

    /* Operator overloading */
    unsigned operator-=(unsigned amount);
    friend std::ostream& operator<<(std::ostream& outStream, const Character& pc);

    /* Getters */
    unsigned getHP();
    std::string getClass() const;
    PlayerType getPlayerType();

protected:
    std::string m_name;
    GameClass m_class;
    HP m_hitPoints;
    std::vector<Attack> m_attacks;
    PlayerType m_playerType;

    void attack(Character& player, Attack& atk);
};


#endif //RPGSPILL_CHARACTER_H
