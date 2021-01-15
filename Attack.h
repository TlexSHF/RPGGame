#ifndef RPGSPILL_ATTACK_H
#define RPGSPILL_ATTACK_H


class Attack {
private:
    std::string m_name = {};
    int m_damage = 0;
    int m_cooldown = 0;
public:
    Attack();
    Attack(std::string name, int damage, int cooldown);
    ~Attack();
    void runAttack();
    bool isReady;

};


#endif //RPGSPILL_ATTACK_H
