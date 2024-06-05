#ifndef LIVINGENTITY_HPP
#define LIVINGENTITY_HPP

#include "./AbstractCollisionableEntity.hpp"

class LivingEntity : public AbstractCollisionableEntity
{
private:
    int maxlife;
    int life;
    float damage;
    float range;
protected:
    virtual void setMaxLife(int maxlife);
public:
    LivingEntity(HitBox* hitbox, int maxlife = 10, float range = 1.f);
    ~LivingEntity();
    int getMaxLife();
    void setLife(int life);
    int getLife();
    void setRange(float range);
    float getRange();
    virtual void heal(int amount);
    void setDamage(float damage);
    float getDamage();
    virtual void move();
    virtual void tick();
};

#endif