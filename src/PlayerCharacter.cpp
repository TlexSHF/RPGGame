#include <iostream>
#include "../include/PlayerCharacter.h"

//TODO Later make classes for each of the 'classes'

void PlayerCharacter::attack(PlayerCharacter& pc, Attack atk) {
    std::cout << m_name << atk << "ing " << pc <<std::endl;
    pc.subtractHP(atk.getDamage());
}
void PlayerCharacter::runTurn(std::vector<PlayerCharacter> pcs) {
    int action = 0;
    int pcToAtk = 0;
    int pcSize = pcs.size();
    int atkSize = m_attacks.size();

    std::cout << "----------------------------\n"
                 "It is " << m_name << "'s turn. Pick an action: \n";
    for(int i = 0; i < atkSize; i++)
            std::cout << i+1 << ": "<< m_attacks.at(i).getInfo() << std::endl;
    std::cin >> action;

    std::cout << "Who do you want to attack?\n";

    for(int i = 0; i < pcSize; i++) {
        std::cout << i << ": " << pcs[i] << std::endl;
    }
    std::cin >> pcToAtk;

    attack(pcs[pcToAtk], m_attacks[action]);
}

std::ostream &operator<<(std::ostream &outStream, const PlayerCharacter &pc) {
    return outStream << pc.m_name;
}

PlayerCharacter::PlayerCharacter(std::string& name, GameClass gameClass)
    : m_name(name), m_class(gameClass) {
    if(gameClass == GameClass::warrior) {
        std::cout << "Constructing warrior" << std::endl;
        m_maxHP = 500;
        m_hitPoints = m_maxHP;
        m_attacks.emplace_back("Slash", 20, 10);
        m_attacks.emplace_back("Cling", 40, 30);
    } else if(gameClass == GameClass::ranger) {
        std::cout << "Constructing ranger" << std::endl;
        m_maxHP = 200;
        m_hitPoints = m_maxHP;
        m_attacks.emplace_back("Shoot", 10, 2);
        m_attacks.emplace_back("Fire Arrow", 30, 15);
    } else {
        std::cout << "Constructing druid" << std::endl;
        m_maxHP = 100;
        m_hitPoints = m_maxHP; //TODO Druid should have healing abilities
        m_attacks.emplace_back("Cat Claw", 15, 5);
        m_attacks.emplace_back("Bear Stomp", 50, 20);
    }

}
int PlayerCharacter::getHP() {
    return m_hitPoints;
}
int PlayerCharacter::getMaxHP() {
    return m_maxHP;
}
void PlayerCharacter::subtractHP(int amount) {
    m_hitPoints -= amount;
}

PlayerCharacter::~PlayerCharacter() {
    //std::cout << "Destructing PlayerCharacter" << std::endl;
}
