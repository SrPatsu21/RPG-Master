#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "./AbstractMob.hpp"

class Character : public AbstractMob
{
public:
    Character(HitBox* hitbox, int maxlife = 10, float range = 1.f, float damage = 1, int life = 10);
    //* affect by behavior
    virtual void receiveDamage(AbstractMob* Enemy, float damage);
    //* creat a projectile to deal damage
    virtual void attack();
    virtual void tick();
};

#endif