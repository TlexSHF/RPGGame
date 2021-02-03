#ifndef RPGSPILL_HP_H
#define RPGSPILL_HP_H

#include <iostream>

class HP {
public:
    //HP();
    HP(int HP, int AC);

    /* Changing HP */
    int operator-=(int dmg); //DAMAGE: damage - AC. HP - restDmg (AC is subtracted first)
    int operator+=(int heal); //HEALING: heals the HP for max the start amount

    /* Comparing with int */
    //All operators that take two parameters must be 'friends' to gain access correctly
    //This means they are not part of the class, will not be initialized with 'type HP::name'
    bool operator==(int num) const; //(HP == int) --> b.equals(a);
    friend bool operator==(int num, const HP& hp); //(int == HP) --> equals(a, b);
    bool operator<(int num) const; //(HP < int)
    friend bool operator<(int num, const HP& hp); //(int < HP)
    bool operator>(int num) const; //(HP > int)
    friend bool operator>(int num, const HP& hp); //(int > HP)
    bool operator<=(int num) const; //(HP <= int)
    friend bool operator<=(int num, const HP& hp); //(int <= HP)
    bool operator>=(int num) const; //(HP >= int)
    friend bool operator>=(int num, const HP& hp); //(int >= HP)

    /* Comparing with another HP */
    bool operator<(HP& hp) const; //(myHP < HP)
    friend bool operator<(HP& hp, const HP& myHp); //(HP < myHP)
    bool operator>(HP& hp) const; //(myHP > HP)
    friend bool operator>(HP& hp, const HP& myHp); //(HP > myHP)
    bool operator<=(HP& hp) const; //(myHP <= HP)
    friend bool operator<=(HP& hp, const HP& myHp); //(HP <= myHP)
    bool operator>=(HP& hp) const; //(myHP >= HP)
    friend bool operator>=(HP& hp, const HP& myHp); //(HP >= myHP)

    /* Ostream */
    friend std::ostream& operator<<(std::ostream& out, const HP& hp);

    /* Getter */
    int getHP() const;

private:
    int m_maxHP;
    int m_hitPoints;
    int m_armorPoints;
};


#endif //RPGSPILL_HP_H
