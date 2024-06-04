#ifndef LIVINGENTITY_HPP
#define LIVINGENTITY_HPP

#include "./AbstractCollisionableEntity.hpp"

class LivingEntity : public AbstractCollisionableEntity
{
private:
    int maxlife;
    int life;
    float damage;
protected:
    virtual void setMaxLife(int maxlife);
public:
    LivingEntity(HitBox* hitbox, int maxlife = 10);
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