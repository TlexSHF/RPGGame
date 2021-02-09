#include "../include/NonPlayableCharacter.h"

/* Constructor */
NonPlayableCharacter::NonPlayableCharacter(std::string &name, GameClass gameClass, PlayerType playerType) :
        Character(name, gameClass, playerType) {
}
/* Copy Constructor */
NonPlayableCharacter::NonPlayableCharacter(const Character &other) :
        Character(other) {

}
/* Destructor */
NonPlayableCharacter::~NonPlayableCharacter() {
    if(debugBoolean) {
        std::cout << ">>>> destructing NonPlayableCharacter" << std::endl;
    }
}
/* Actions */
void NonPlayableCharacter::runTurn(std::vector<Character *> &pcs) {
    int action = 0;
    int pcToAtk = 0;
    int pcSize = pcs.size();
    int atkSize = m_attacks.size();

    //TODO Repetetive code here and PlayerCharacter

    std::cout << "----------------------------\n"
                 "It is " << m_name << "'s turn. Pick an action: \n";
    for (int i = 0; i < atkSize; i++)
        std::cout << i << ": " << m_attacks.at(i).getInfo() << std::endl;
    //Chose random action between zero and max attacks
    action = rand() % atkSize;
    std::cout << "Who do you want to attack?\n";
    for (int i = 0; i < pcSize; i++) {
        std::cout << i << ": " << *pcs[i] << std::endl;
    }
    //Chose random oponent (or self) between 0 and max players in game
    pcToAtk = rand() % pcSize;
    attack(*pcs[pcToAtk], m_attacks[action]);
}
