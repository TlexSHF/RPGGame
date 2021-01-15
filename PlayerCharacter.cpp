#include <iostream>
#include "PlayerCharacter.h"

//TODO Later make classes for each of the 'classes'

PlayerCharacter::PlayerCharacter(std::string name) : m_name(name) {

}

void PlayerCharacter::runTurn() {
    std::cout << "It is players turn (gets some choices)" << std::endl;
}

void PlayerCharacter::hit() {
    std::cout << "Player hit" << std::endl;
}

void PlayerCharacter::addAttack(std::string name, int damage, int cooldown) {
    if(m_numAttacks < 2) {
        m_attacks[m_numAttacks] = Attack(name, damage, cooldown);   //Oppretter på stack
        m_numAttacks++;
        std::cout << "Added attack " << name << " to class" << std::endl;
    } else {
        std::cout << "No more attacks allowed to add" << std::endl;
    }
}

int PlayerCharacter::getAttacks() {
    return 0;
}

int PlayerCharacter::getHP() {
    return 0;
}