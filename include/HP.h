#ifndef RPGSPILL_HP_H
#define RPGSPILL_HP_H

#include <iostream>

extern bool debugBoolean;

template <typename T>
class HP {
public:
    HP();
    HP(T HP, T AC); //using templates
    HP(const HP& other);    //CopyConstructor
    ~HP();

    /* Changing HP */
    unsigned operator-=(int dmg); //DAMAGE: damage - AC. HP - restDmg (AC is subtracted first)
    unsigned operator+=(unsigned heal); //HEALING: heals the HP for max the start amount

    /* Getter */
    unsigned getHP() const;

    /* Comparing with int */
    //All operators that take two parameters must be 'friends' to gain access correctly
    //This means they are not part of the class, will not be initialized with 'type HP::name'
    bool operator==(int num) const; //(HP == int) --> b.equals(a);
    //friend bool operator==(int num, const HP<T>& hp); //(int == HP) --> equals(a, b);
    /*bool operator<(int num) const; //(HP < int)
    friend bool operator<(int num, const HP<T>& hp); //(int < HP)
    bool operator>(int num) const; //(HP > int)
    friend bool operator>(int num, const HP<T>& hp); //(int > HP)
    bool operator<=(int num) const; //(HP <= int)
    friend bool operator<=(int num, const HP<T>& hp); //(int <= HP)
    bool operator>=(int num) const; //(HP >= int)
    friend bool operator>=(int num, const HP<T>& hp); //(int >= HP)

    /* Comparing with double */
    /*bool operator==(double num) const; //(HP == int) --> b.equals(a);
    friend bool operator==(double num, const HP& hp); //(int == HP) --> equals(a, b);
    bool operator<(double num) const; //(HP < int)
    friend bool operator<(double num, const HP& hp); //(int < HP)
    bool operator>(double num) const; //(HP > int)
    friend bool operator>(double num, const HP& hp); //(int > HP)
    bool operator<=(double num) const; //(HP <= int)
    friend bool operator<=(double num, const HP& hp); //(int <= HP)
    bool operator>=(double num) const; //(HP >= int)
    friend bool operator>=(double num, const HP& hp); //(int >= HP)*/

    /* Comparing with another HP */
    /*bool operator<(HP<T>& hp) const; //(myHP < HP)
    friend bool operator<(HP<T>& hp, const HP<T>& myHp); //(HP < myHP)
    bool operator>(HP<T>& hp) const; //(myHP > HP)
    friend bool operator>(HP<T>& hp, const HP<T>& myHp); //(HP > myHP)
    bool operator<=(HP<T>& hp) const; //(myHP <= HP)
    friend bool operator<=(HP<T>& hp, const HP<T>& myHp); //(HP <= myHP)
    bool operator>=(HP<T>& hp) const; //(myHP >= HP)
    friend bool operator>=(HP<T>& hp, const HP<T>& myHp); //(HP >= myHP)

    /* Ostream */
    friend std::ostream& operator<<(std::ostream& out, const HP& hp);

private:
    T m_maxHP;
    T m_hitPoints;
    T m_armorPoints;
};


#endif //RPGSPILL_HP_H
