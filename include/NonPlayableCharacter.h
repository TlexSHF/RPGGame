#ifndef RPGSPILL_NONPLAYABLECHARACTER_H
#define RPGSPILL_NONPLAYABLECHARACTER_H

#include "Character.h"

class NonPlayableCharacter : public Character{
public:
    NonPlayableCharacter(std::string&name, GameClass gameClass, PlayerType playerType);
    NonPlayableCharacter(const Character& other); //CopyConstructor
    ~NonPlayableCharacter();

    void runTurn(std::vector<Character*> &pcs) override;
};


#endif //RPGSPILL_NONPLAYABLECHARACTER_H
