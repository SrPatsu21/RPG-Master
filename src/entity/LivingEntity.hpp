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
    LivingEntity(HitBox* hitbox);
    ~LivingEntity();
    int getMaxLife();
    void setLife(int life);
    int getLife();
    virtual void heal();
    void setDamage(float damage);
    float getDamage();
    virtual void move();
    virtual void tick();
};

LivingEntity::LivingEntity(HitBox* hitbox)
: AbstractCollisionableEntity(hitbox)
{

}

LivingEntity::~LivingEntity()
{

}
int LivingEntity::getMaxLife()
{
    return this->maxlife;
};
void LivingEntity::setLife(int life)
{
    this->life = life;
};
int LivingEntity::getLife()
{
    return this->life;
};
void LivingEntity::setDamage(float damage)
{
    this->damage = damage;
};
float LivingEntity::getDamage()
{
    return damage;
};
void LivingEntity::move()
{
    AbstractCollisionableEntity::move();
};
void LivingEntity::tick()
{
    AbstractCollisionableEntity::tick();
};

#endif