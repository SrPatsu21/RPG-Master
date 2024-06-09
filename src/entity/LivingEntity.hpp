#ifndef LIVINGENTITY_HPP
#define LIVINGENTITY_HPP

#include "./AbstractCollisionableEntity.hpp"

class LivingEntity : public AbstractCollisionableEntity
{
private:

protected:
    int maxlife;
    int life;
    float damage;
    float range;
    virtual void setMaxLife(int maxlife);
public:
    LivingEntity(HitBox* hitbox, int maxlife = 10, float range = 1.f, float damage = 1, int life = 10);
    ~LivingEntity();
    int getMaxLife();
    void setLife(int life);
    int getLife();
    void setRange(float range);
    float getRange();
    void setDamage(float damage);
    float getDamage();
    virtual void move();
    virtual void tick();
};

#endif