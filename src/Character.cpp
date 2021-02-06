#include <iostream>
#include "../include/Character.h"

//TODO Later make classes for each of the 'classes'
// Druid should have healing abilities

/* Constructor */
Character::Character(std::string &name, GameClass gameClass)
        : m_name(name), m_class(gameClass), m_hitPoints() {

    if (gameClass == GameClass::warrior) {
        std::cout << "Constructing warrior...\n"
                     "Warriors have a natural Health of 100 HP, and an Armor Class of 20 AC" << std::endl;
        m_hitPoints = HP(100, 20);
        m_attacks.emplace_back("Slash", 20, 10);
        m_attacks.emplace_back("Cling", 40, 30);

    } else if (gameClass == GameClass::ranger) {
        std::cout << "Constructing ranger...\n"
                     "Rangers have a natural Health of 120 HP, and an Armor Class of 10 AC" << std::endl;
        m_hitPoints = HP(120, 10);
        m_attacks.emplace_back("Shoot", 10, 2);
        m_attacks.emplace_back("Fire Arrow", 30, 15);

    } else if (gameClass == GameClass::druid) {
        std::cout << "Constructing druid...\n"
                     "Druids have a natural Health of 160 HP, and an Armor Class of 5 AC" << std::endl;
        m_hitPoints = HP(160, 5);
        m_attacks.emplace_back("Cat Claw", 15, 5);
        m_attacks.emplace_back("Bear Stomp", 50, 20);
    } else {
        throw "Invalid GameClass for " + m_name + " in Constructor";
    }
    std::cout << "----------------------------" << std::endl;
}

/* Copy constructor */
Character::Character(const Character &other) :
    m_name(other.m_name), m_class(other.m_class), m_hitPoints(other.m_hitPoints), m_attacks(other.m_attacks) {
    if(debugBoolean) {
        std::cout << ">>>> copying Character" << std::endl;
    }
}

/* Destructor */
Character::~Character() {
    if(debugBoolean) {
        std::cout << ">>>> destructing Character" << std::endl;
    }
}


/* Operator overloading */
int Character::operator-=(int amount) {
    return m_hitPoints -= amount;
}
std::ostream &operator<<(std::ostream &outStream, const Character &pc) {
    return outStream << pc.m_name;
}

/* Getters */
int Character::getHP() {
    return m_hitPoints.getHP();
}

std::string Character::getClass() const {
    if (m_class == GameClass::warrior) {
        return "Warrior";
    } else if (m_class == GameClass::ranger) {
        return "Ranger";
    } else if (m_class == GameClass::druid) {
        return "Druid";
    } else {
        throw "Invalid GameClass for " + m_name + " in getClass();";
    }
}

/* Private */
void Character::attack(Character &pc, Attack &atk) {

    std::cout << m_name << " " << atk << "ed " << pc << std::endl;
    pc-=atk.getDamage();
}
