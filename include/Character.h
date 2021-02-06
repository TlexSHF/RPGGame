#ifndef RPGSPILL_CHARACTER_H
#define RPGSPILL_CHARACTER_H

#include <string>
#include <vector>
#include "Attack.h"
#include "HP.h"

extern bool debugBoolean;

enum class GameClass{warrior, ranger, druid};

class Character {
public:
    Character(std::string& name, GameClass gameClass);
    Character(const Character& other);    //CopyConstructor
    ~Character();

    virtual void runTurn(std::vector<Character>& pcs) = 0;

    /* Operator overloading */
    int operator-=(int amount);
    friend std::ostream& operator<<(std::ostream& outStream, const Character& pc);

    /* Getters */
    int getHP();
    std::string getClass() const;

protected:
    std::string m_name;
    GameClass m_class;
    HP m_hitPoints;
    std::vector<Attack> m_attacks;

    void attack(Character& pc, Attack& atk);
};


#endif //RPGSPILL_CHARACTER_H
