#include <iostream>
#include "../include/PlayerCharacter.h"

//TODO Later make classes for each of the 'classes'



void PlayerCharacter::runTurn() {
    std::cout << "It is players turn (gets some choices)" << std::endl;
}

void PlayerCharacter::hit() {
    std::cout << "Player hit" << std::endl;
}

int PlayerCharacter::getAttacks() {
    return 0;
}

int PlayerCharacter::getHP() {
    return 0;
}
PlayerCharacter::PlayerCharacter()
    : m_name{""}, m_attacks{new Attack[2]}, m_hitPoints{0} {
    std::cout << "Constructing PlayerCharacter" << std::endl;
}
PlayerCharacter::PlayerCharacter(std::string name, GameClass gameClass)
    : m_name(name), m_class(gameClass) {
    if(gameClass == GameClass::warrior) {
        std::cout << "Constructing warrior" << std::endl;
        m_hitPoints = 500; //TODO Unsure if this acts as planned:
        m_attacks[0] = Attack("slash", 20, 10);
        m_attacks[1] = Attack("cling", 40, 30);
    } else if(gameClass == GameClass::ranger) {
        std::cout << "Constructing ranger" << std::endl;
        m_hitPoints = 200;
        m_attacks[0] = Attack("shoot", 10, 2);
        m_attacks[1] = Attack("fireArrow", 30, 15);
    } else {
        std::cout << "Constructing druid" << std::endl;
        m_hitPoints = 100; //TODO Druid should have healing abilities
        m_attacks[0] = Attack("catClaw", 15, 5);
        m_attacks[1] = Attack("bearStomp", 50, 20);
    }
}
PlayerCharacter::~PlayerCharacter() {
    std::cout << "Destructing PlayerCharacter" << std::endl;
}