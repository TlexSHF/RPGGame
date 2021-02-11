#include "../include/HP.h"

/* Constructors */
template <typename T>
HP<T>::HP() : m_maxHP(0), m_hitPoints(0), m_armorPoints(0) {
    if(debugBoolean) {
        std::cout << ">>>> default constructing HP" << std::endl;
    }
}
template <typename T>
HP<T>::HP(T HP, T AC) : m_hitPoints(HP), m_maxHP(HP), m_armorPoints(AC) {
    if(debugBoolean) {
        std::cout << ">>>> constructing HP" << std::endl;
    }
}
template <typename T>
HP<T>::HP(const HP &other) : m_maxHP(other.m_hitPoints), m_hitPoints(other.m_hitPoints), m_armorPoints(other.m_armorPoints) {
    if(debugBoolean) {
        std::cout << ">>>> copying HP" << std::endl;
    }
}
template <typename T>
HP<T>::~HP() {
    if(debugBoolean) {
        std::cout << ">>>> destructing HP" << std::endl;
    }
}

/* Changing HP */
template <typename T>
unsigned HP<T>::operator-=(int dmg) {
    //cannot go lower than 0 -- ac subtracted from damage
    int damage = dmg - m_armorPoints; //TODO An error occurs here when dmg - armorPoints drop to lower than damage
                                        //Quick fix by changing dmg and m_armorPoints to ints
    if(damage < 0)
        damage = 0;

    std::cout << "With an AC of " << m_armorPoints << ", " << damage << " damage was taken" << std::endl;

    if(m_hitPoints - damage < 0) {
        m_hitPoints = 0;
    } else {
        m_hitPoints -= damage;
    }
    return m_hitPoints;
}
template <typename T>
unsigned HP<T>::operator+=(unsigned heal) {
    //cannot go higher than max hp
    if(m_hitPoints + heal > m_maxHP) {
        m_hitPoints = m_maxHP;
    } else {
        m_hitPoints += heal;
    }
    return m_hitPoints;
}

/* Get */
template <typename T>
unsigned HP<T>::getHP() const {
    return m_hitPoints;
}

/* Comparing with int */
template <typename T>
bool HP<T>::operator==(int num) const {
    return m_hitPoints == num;
}
/*
template <typename T>
bool operator==(int num, const HP<T>& hp) {
    return num == hp.m_hitPoints;
}*/
/*
template <typename T>
bool HP<T>::operator<(int num) const {
    return m_hitPoints < num;
}
template <typename T>
bool operator<(int num, const HP<T>& hp) {
    return num < hp.m_hitPoints;
}
template <typename T>
bool HP<T>::operator>(int num) const {
    return m_hitPoints > num;
}
template <typename T>
bool operator>(int num, const HP<T>& hp) {
    return num > hp.m_hitPoints;
}
template<typename T>
bool HP<T>::operator<=(int num) const {
    return m_hitPoints <= num;
}
template<typename T>
bool operator<=(int num, const HP<T>& hp) {
    return num <= hp.m_hitPoints;
}
template<typename T>
bool HP<T>::operator>=(int num) const {
    return m_hitPoints >= num;;
}
template<typename T>
bool operator>=(int num, const HP<T>& hp) {
    return num >= hp.m_hitPoints;
}

/* Comparing with another HP *//*
template<typename T>
bool HP<T>::operator<(HP& hp) const {
    return m_hitPoints < hp.m_hitPoints;
}
template<typename T>
bool operator<(HP<T>& hp, const HP<T>& myHp) {
    return hp.m_hitPoints < myHp.m_hitPoints;
}
template<typename T>
bool HP<T>::operator>(HP& hp) const {
    return m_hitPoints > hp.m_hitPoints;
}
template<typename T>
bool operator>(HP<T>& hp, const HP<T>& myHp) {
    return hp.m_hitPoints > myHp.m_hitPoints;
}
template<typename T>
bool HP<T>::operator<=(HP& hp) const {
    return m_hitPoints <= hp.m_hitPoints;;
}
template<typename T>
bool operator<=(HP<T>& hp, const HP<T>& myHp) {
    return hp.m_hitPoints <= myHp.m_hitPoints;
}
template<typename T>
bool HP<T>::operator>=(HP& hp) const {
    return m_hitPoints >= hp.m_hitPoints;;
}
template<typename T>
bool operator>=(HP<T>& hp, const HP<T>& myHp) {
    return hp.m_hitPoints >= myHp.m_hitPoints;
}

/* Ostream */
template<typename T>
std::ostream& operator<<(std::ostream& out, const HP<T>& hp) {
    return out << hp.m_hitPoints;
}

/* Comparing with double *//*
template<typename T>
bool HP<T>::operator==(double num) const {
    return false;
}
template<typename T>
bool operator==(double num, const HP<T> &hp) {
    return false;
}
template<typename T>
bool HP<T>::operator<(double num) const {
    return false;
}
template<typename T>
bool operator<(double num, const HP<T> &hp) {
    return false;
}
template<typename T>
bool HP<T>::operator>(double num) const {
    return false;
}
template<typename T>
bool operator>(double num, const HP<T> &hp) {
    return false;
}
template<typename T>
bool HP<T>::operator<=(double num) const {
    return false;
}
template<typename T>
bool operator<=(double num, const HP<T> &hp) {
    return false;
}
template<typename T>
bool HP<T>::operator>=(double num) const {
    return false;
}
template<typename T>
bool operator>=(double num, const HP<T> &hp) {
    return false;
}*/
