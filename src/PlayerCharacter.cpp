#include <iostream>
#include "../include/PlayerCharacter.h"

//TODO Later make classes for each of the 'classes'
// Druid should have healing abilities

/* Constructor */
PlayerCharacter::PlayerCharacter(std::string &name, GameClass gameClass)
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
PlayerCharacter::PlayerCharacter(const PlayerCharacter &other) :
    m_name(other.m_name), m_class(other.m_class), m_hitPoints(other.m_hitPoints), m_attacks(other.m_attacks) {
    if(debugBoolean) {
        std::cout << ">>>> copying PlayerCharacter" << std::endl;
    }
}

/* Destructor */
PlayerCharacter::~PlayerCharacter() {
    if(debugBoolean) {
        std::cout << ">>>> destructing PlayerCharacter" << std::endl;
    }
}

/* Actions */
void PlayerCharacter::runTurn(std::vector<PlayerCharacter>& pcs) {
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

/* Operator overloading */
int PlayerCharacter::operator-=(int amount) {
    return m_hitPoints -= amount;
}
std::ostream &operator<<(std::ostream &outStream, const PlayerCharacter &pc) {
    return outStream << pc.m_name;
}

/* Getters */
int PlayerCharacter::getHP() {
    return m_hitPoints.getHP();
}

std::string PlayerCharacter::getClass() const {
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
void PlayerCharacter::attack(PlayerCharacter &pc, Attack &atk) {

    std::cout << m_name << " " << atk << "ing " << pc << std::endl;
    pc-=atk.getDamage();
}
