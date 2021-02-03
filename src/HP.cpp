#include "../include/HP.h"

/* Constructor */
//HP::HP() : m_maxHP(0), m_hitPoints(0), m_armorPoints(0) {}
HP::HP(int HP, int AC) : m_hitPoints(HP), m_maxHP(HP), m_armorPoints(AC) {}

/* Changing HP */
int HP::operator-=(int dmg) {
    //cannot go lower than 0 -- ac subtracted from damage
    if(m_hitPoints - (dmg - m_armorPoints) < 0) {
        std::cout << ">>>> " << m_hitPoints << " - (" << dmg << " - " << m_armorPoints << ") < 0\n";
        m_hitPoints = 0;
    } else {
        std::cout << ">>>> " << m_hitPoints << " - (" << dmg << " - " << m_armorPoints << ") >= 0\n";
        m_hitPoints -= (dmg - m_armorPoints);
    }
    return m_hitPoints;
}
int HP::operator+=(int heal) {
    //cannot go higher than max hp
    if(m_hitPoints + heal > m_maxHP) {
        m_hitPoints = m_maxHP;
    } else {
        m_hitPoints += heal;
    }
    return m_hitPoints;
}

/* Comparing with int */
bool HP::operator==(int num) const {
    return m_hitPoints == num;
}
bool operator==(int num, const HP& hp) {
    return num == hp.m_hitPoints;
}
bool HP::operator<(int num) const {
    return m_hitPoints < num;
}
bool operator<(int num, const HP& hp) {
    return num < hp.m_hitPoints;
}
bool HP::operator>(int num) const {
    return m_hitPoints > num;
}
bool operator>(int num, const HP& hp) {
    return num > hp.m_hitPoints;
}
bool HP::operator<=(int num) const {
    return m_hitPoints <= num;
}
bool operator<=(int num, const HP& hp) {
    return num <= hp.m_hitPoints;
}
bool HP::operator>=(int num) const {
    return m_hitPoints >= num;;
}
bool operator>=(int num, const HP& hp) {
    return num >= hp.m_hitPoints;
}

/* Comparing with another HP */
bool HP::operator<(HP& hp) const {
    return m_hitPoints < hp.m_hitPoints;
}
bool operator<(HP& hp, const HP& myHp) {
    return hp.m_hitPoints < myHp.m_hitPoints;
}
bool HP::operator>(HP& hp) const {
    return m_hitPoints > hp.m_hitPoints;
}
bool operator>(HP& hp, const HP& myHp) {
    return hp.m_hitPoints > myHp.m_hitPoints;
}
bool HP::operator<=(HP& hp) const {
    return m_hitPoints <= hp.m_hitPoints;;
}
bool operator<=(HP& hp, const HP& myHp) {
    return hp.m_hitPoints <= myHp.m_hitPoints;
}
bool HP::operator>=(HP& hp) const {
    return m_hitPoints >= hp.m_hitPoints;;
}
bool operator>=(HP& hp, const HP& myHp) {
    return hp.m_hitPoints >= myHp.m_hitPoints;
}

/* Ostream */
std::ostream& operator<<(std::ostream& out, const HP& hp) {
    return out << hp.m_hitPoints;
}

/* Get */
int HP::getHP() const {
    return m_hitPoints;
}
