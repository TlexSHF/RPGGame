#include <iostream>
#include "../include/PlayerCharacter.h"

//TODO Later make classes for each of the 'classes'

std::string PlayerCharacter::getName() {
    return m_name;
}
GameClass PlayerCharacter::getClass() {
    return m_class;
}
int PlayerCharacter::getHP() {
    return m_hitPoints;
}
int PlayerCharacter::getMaxHP() {
    return m_maxHP;
}
Attack* PlayerCharacter::getAttacks() {
    return 0;
}
void PlayerCharacter::attack() {
    std::cout << "Player hit" << std::endl;
}
void PlayerCharacter::runTurn() {
    std::cout << "It is " << m_name << "'s round. Pick an action: \n";
    for(int i = 0; i < 2; i++)
            std::cout << m_attacks[i]->getInfo();
}
PlayerCharacter::PlayerCharacter()
    : m_name{""}/*, m_attacks{new Attack[2]}*/, m_hitPoints{0}, m_maxHP{0} {
    std::cout << "Constructing PlayerCharacter" << std::endl;
}
PlayerCharacter::PlayerCharacter(std::string name, GameClass gameClass)
    : m_name(name), m_class(gameClass)/*, m_attacks{ new Attack[2] }*/ {
    if(gameClass == GameClass::warrior) {
        std::cout << "Constructing warrior" << std::endl;
        m_maxHP = 500;
        m_hitPoints = m_maxHP;
        //TODO This does not go as planned. As they are created on stack, they are removed when going out of stack
        // 'new' needs to be added at front, but maybe we need a 2d array for this?
        m_attacks[0] = new Attack("slash", 20, 10);
        m_attacks[1] = new Attack("cling", 40, 30);
    } else if(gameClass == GameClass::ranger) {
        std::cout << "Constructing ranger" << std::endl;
        m_maxHP = 200;
        m_hitPoints = m_maxHP;
        m_attacks[0] = new Attack("shoot", 10, 2);
        m_attacks[1] = new Attack("fireArrow", 30, 15);
    } else {
        std::cout << "Constructing druid" << std::endl;
        m_maxHP = 100;
        m_hitPoints = m_maxHP; //TODO Druid should have healing abilities
        m_attacks[0] = new Attack("catClaw", 15, 5);
        m_attacks[1] = new Attack("bearStomp", 50, 20);
    }
}
PlayerCharacter::~PlayerCharacter() {
    std::cout << "Destructing PlayerCharacter" << std::endl;
}
