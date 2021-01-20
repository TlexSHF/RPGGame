#include <iostream>
#include "../include/PlayerCharacter.h"

//TODO Later make classes for each of the 'classes'

void PlayerCharacter::attack() {
    std::cout << "Player hit" << std::endl;
}
void PlayerCharacter::runTurn() {
    int action = 0;
    std::cout << "It is " << m_name << "'s turn. Pick an action: \n";
    for(int i = 0; i < 2; i++)
            std::cout << i+1 << ": "<< m_Attacks.at(i).getInfo() << std::endl;
    std::cin >> action;

}
PlayerCharacter::PlayerCharacter(std::string& name, GameClass gameClass)
    : m_name(name), m_class(gameClass) {
    if(gameClass == GameClass::warrior) {
        std::cout << "Constructing warrior" << std::endl;
        m_maxHP = 500;
        m_hitPoints = m_maxHP;
        //TODO This does not go as planned. As they are created on stack, they are removed when going out of stack
        // 'new' needs to be added at front, but maybe we need a 2d array for this?
        m_Attacks.emplace_back("slash", 20, 10);
        m_Attacks.emplace_back("cling", 40, 30);
    } else if(gameClass == GameClass::ranger) {
        std::cout << "Constructing ranger" << std::endl;
        m_maxHP = 200;
        m_hitPoints = m_maxHP;
        m_Attacks.emplace_back("shoot", 10, 2);
        m_Attacks.emplace_back("fireArrow", 30, 15);
    } else {
        std::cout << "Constructing druid" << std::endl;
        m_maxHP = 100;
        m_hitPoints = m_maxHP; //TODO Druid should have healing abilities
        m_Attacks.emplace_back("catClaw", 15, 5);
        m_Attacks.emplace_back("bearStomp", 50, 20);
    }

}

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


PlayerCharacter::~PlayerCharacter() {
    //std::cout << "Destructing PlayerCharacter" << std::endl;
}
