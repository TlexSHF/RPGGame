#include <iostream>
#include "../include/Attack.h"


std::string Attack::getInfo() {
    return m_name + ": damage: " + std::to_string(m_damage) + ", cooldown: " + std::to_string(m_cooldown);
}

void Attack::runAttack() {
    std::cout << "Running attack" << std::endl;
}

//Constructors
Attack::Attack() : m_name(""), m_damage{0}, m_cooldown{0}, isReady{false}{
    std::cout << "Constructing Attack" << std::endl;
}
Attack::Attack(std::string name, int damage, int cooldown) {
    std::cout << "Creating Attack " << name << " with "
    << damage << " damage, and "
    << cooldown << " seconds cooldown" << std::endl;
}

//Destructor
Attack::~Attack() {
    std::cout << "Destructing Attack" << m_name << std::endl;
}



