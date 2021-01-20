#include <iostream>
#include "../include/Attack.h"


std::string Attack::getInfo() {
    return m_name + ": damage: " + std::to_string(m_damage) + ", cooldown: " + std::to_string(m_cooldown);
}

void Attack::runAttack() {
    std::cout << "Running attack" << std::endl;
}

//Constructors
Attack::Attack(std::string name, int damage, int cooldown) :
    m_name(name), m_damage(damage), m_cooldown(cooldown){
    /*std::cout << "Creating Attack " << name << " with "
    << damage << " damage, and "
    << cooldown << " seconds cooldown" << std::endl;*/
}
//CopyConstructor
Attack::Attack(const Attack& other) :
        m_name(other.m_name), m_damage(other.m_damage), m_cooldown(other.m_cooldown), m_isReady(other.m_isReady) {
    //std::cout << "Copying " << m_name << std::endl;
};
//MoveConstructor
Attack::Attack(const Attack &&other) :
        m_name(other.m_name), m_damage(other.m_damage), m_cooldown(other.m_cooldown), m_isReady(other.m_isReady) {
}

//Destructor
Attack::~Attack() {
    //std::cout << "Destructing Attack" << m_name << std::endl;
}





