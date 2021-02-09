#ifndef RPGSPILL_ATTACK_H
#define RPGSPILL_ATTACK_H

#include <string>

extern bool debugBoolean;

class Attack {
public:
    bool m_isReady;
    std::string getInfo();
    unsigned getDamage() const;
    friend std::ostream& operator<<(std::ostream& outStream, const Attack& atk);
    Attack(std::string name, int damage, int cooldown);
    Attack(const Attack& other);    //CopyConstructor
    Attack(const Attack&& other);   //MoveConstructor
    ~Attack();

private:
    std::string m_name;
    unsigned m_damage;
    unsigned m_cooldown;
};


#endif //RPGSPILL_ATTACK_H
