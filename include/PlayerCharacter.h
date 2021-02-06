#ifndef RPGSPILL_PLAYERCHARACTER_H
#define RPGSPILL_PLAYERCHARACTER_H

#include "Character.h"

class PlayerCharacter : public Character{
public:
    PlayerCharacter(std::string& name, GameClass gameClass);
    PlayerCharacter(const Character& other);    //CopyConstructor
    ~PlayerCharacter();

    void runTurn(std::vector<Character> &pcs) override;
};


#endif //RPGSPILL_PLAYERCHARACTER_H
