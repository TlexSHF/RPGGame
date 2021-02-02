#ifndef RPGSPILL_HP_H
#define RPGSPILL_HP_H


class HP {
public:
    HP(int HP, int AC);
    /* Changing HP */
    void operator-=(int num); //DAMAGE: damage - AC. HP - restDmg (AC is subtracted first)
    void operator+=(int num); //HEALING: heals the HP for max the start amount
    /* Comparing with int */
    bool operator==(int num); //(HP == int)
    bool operator==(int num, const HP &hp); //(int == HP)           //Maybe all of these long ones needs to be friend
    bool operator<(int num); //(HP < int)
    bool operator<(int num, const HP &hp); //(int < HP)
    bool operator>(int num); //(HP > int)
    bool operator>(int num, const HP &hp); //(int > HP)
    bool operator<=(int num); //(HP <= int)
    bool operator<=(int num, const HP &hp); //(int <= HP)
    bool operator>=(int num); //(HP >= int)
    bool operator>=(int num, const HP &hp); //(int >= HP)
    /* Comparing with another HP */
    bool operator<(HP &hp); //(HP < int)
    bool operator<(HP &hp, const HP &myHp); //(int < HP)
    bool operator>(HP &hp); //(HP > int)
    bool operator>(HP &hp, const HP &myHp); //(int > HP)
    bool operator<=(HP &hp); //(HP <= int)
    bool operator<=(HP &hp, const HP &myHp); //(int <= HP)
    bool operator>=(HP &hp); //(HP >= int)
    bool operator>=(HP &hp, const HP &myHp); //(int >= HP)
private:
    int m_hitPoints;
    int m_armorPoints;
};


#endif //RPGSPILL_HP_H
