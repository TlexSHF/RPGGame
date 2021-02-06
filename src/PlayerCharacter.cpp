#include "../include/PlayerCharacter.h"

/* Constructor */
PlayerCharacter::PlayerCharacter(std::string &name, GameClass gameClass) :
        Character(name, gameClass) {
}
/* CopyConstructor */
PlayerCharacter::PlayerCharacter(const Character &other) :
        Character(other) {
}
/* Destructor */
PlayerCharacter::~PlayerCharacter() {
    if(debugBoolean) {
        std::cout << ">>>> destructing PlayerCharacter" << std::endl;
    }
}

/* Actions */
void PlayerCharacter::runTurn(std::vector<Character>& pcs) {
    int action = 0;
    int pcToAtk = 0;
    int pcSize = pcs.size();
    int atkSize = m_attacks.size();

    std::cout << "----------------------------\n"
                 "It is " << m_name << "'s turn. Pick an action: \n";
    for (int i = 0; i < atkSize; i++)
        std::cout << i << ": " << m_attacks.at(i).getInfo() << std::endl;
    std::cin >> action;
    std::cout << "Who do you want to attack?\n";
    for (int i = 0; i < pcSize; i++) {
        std::cout << i << ": " << pcs[i] << std::endl;
    }
    std::cin >> pcToAtk;
    attack(pcs[pcToAtk], m_attacks[action]);
}
