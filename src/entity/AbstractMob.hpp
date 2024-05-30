#ifndef ABSTRACTMOB_HPP
#define ABSTRACTMOB_HPP

#include "./LivingEntity.hpp"

class AbstractMob : public LivingEntity
{
private:
    /* data */
public:
    AbstractMob(HitBox* hitbox, int maxlife);
    ~AbstractMob();
    virtual void regeLife();
    virtual void addBuff();
    virtual void removeBuff();
    virtual void clearBuff();
    virtual void receiveDamage(AbstractMob* Enemy);
    virtual void atack();
    virtual void move();
    virtual void heal(int amount);
    virtual void walk(Vec2 target);
    virtual void tick();
};

AbstractMob::AbstractMob(HitBox* hitbox, int maxlife)
: LivingEntity(hitbox, maxlife)
{

};
void AbstractMob::heal(int amount)
{
    LivingEntity::heal;
};
AbstractMob::~AbstractMob()
{

};
void AbstractMob::addBuff()
{

};
void AbstractMob::removeBuff()
{

};
void AbstractMob::clearBuff()
{

};
void AbstractMob::receiveDamage(AbstractMob* Enemy)
{

};
void AbstractMob::atack()
{

};
void AbstractMob::move()
{
    LivingEntity::move;
};
void AbstractMob::walk(Vec2 target)
{

};
void AbstractMob::tick()
{
    LivingEntity::tick();
};

#endif