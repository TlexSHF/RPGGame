#ifndef RPGSPILL_ATTACK_H
#define RPGSPILL_ATTACK_H

#include <string>

class Attack {
public:
    bool isReady;
    Attack();
    Attack(std::string name, int damage, int cooldown);
    ~Attack();
    void runAttack();
private:
    std::string m_name;
    int m_damage;
    int m_cooldown;
};


#endif //RPGSPILL_ATTACK_H
