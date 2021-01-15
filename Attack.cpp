#include <iostream>
#include "Attack.h"

void Attack::runAttack() {
    std::cout << "Running attack" << std::endl;
}

//Constructors
Attack::Attack() {}
Attack::Attack(std::string name, int damage, int cooldown) {
    std::cout << "Creating Attack " << name << " with " << damage << " damage, and " << cooldown << " seconds cooldown" << std::endl;
}

//Destructor
Attack::~Attack() {
    std::cout << "Destructing " << m_name << std::endl;
}



