#include <iostream>
#include "../include/Attack.h"


std::string Attack::getInfo() {
    return m_name + ": damage: " + std::to_string(m_damage) + ", cooldown: " + std::to_string(m_cooldown);
}

int Attack::getDamage() {
    return m_damage;
}

std::ostream& operator<<(std::ostream& outStream, const Attack& atk) {
    return outStream << atk.m_name;
}

//Constructors
Attack::Attack(std::string name, int damage, int cooldown) :
    m_name(name), m_damage(damage), m_cooldown(cooldown){
    if(debugBoolean) {
        std::cout << ">>>> constructing Attack" << std::endl;
    }
}
//CopyConstructor
Attack::Attack(const Attack& other) :
        m_name(other.m_name), m_damage(other.m_damage), m_cooldown(other.m_cooldown), m_isReady(other.m_isReady) {
    if(debugBoolean) {
        std::cout << ">>>> copying Attack" << std::endl;
    }
};
//MoveConstructor
Attack::Attack(const Attack&& other) :
        m_name(other.m_name), m_damage(other.m_damage), m_cooldown(other.m_cooldown), m_isReady(other.m_isReady) {
    if(debugBoolean) {
        std::cout << ">>>> moving Attack" << std::endl;
    }
}

//Destructor
Attack::~Attack() {
    if(debugBoolean) {
        std::cout << ">>>> destructing Attack" << std::endl;
    }
}





