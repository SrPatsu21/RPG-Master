#ifndef ABSTRACTPROJECTILE_HPP
#define ABSTRACTPROJECTILE_HPP

#include "AbstractMob.hpp"
#include "./AbstractCollisionableEntity.hpp"

class AbstractProjectile : public AbstractCollisionableEntity
{
private:
    AbstractMob* owner;
    float damage;
protected:
    int lifetime;
public:
    AbstractProjectile(HitBox* hitbox, AbstractMob* owner = NULL, float damage = 0, int lifetime = 1);
    void setOwner();
    AbstractMob* getOwner();
    void setDamage(float damage);
    float getDamage();
    int getLifeTime();
    void onCollision();
    virtual void setLifeTime(int lifetime);
    virtual void setPosition(double x, double y);
    virtual void setDirection(float direction);
    virtual void setDirection(float direction, float scale);
    virtual void move();
    virtual void tick();
};

#endif