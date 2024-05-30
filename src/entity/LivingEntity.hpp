#ifndef LIVINGENTITY_HPP
#define LIVINGENTITY_HPP

#include "./AbstractCollisionableEntity.hpp"

class LivingEntity : AbstractCollisionableEntity
{
private:
    int maxlife;
    int life;
    float damage;
protected:
 void setMaxLife(int maxlife);
public:
    LivingEntity(HitBox* hitbox, int maxlife);
    ~LivingEntity();
    int getMaxLife();
    void setLife(int life);
    int getLife();
    virtual void heal(int amount);
    void setDamage(float damage);
    float getDamage();
    virtual void move();
    virtual void tick();
};

#endif