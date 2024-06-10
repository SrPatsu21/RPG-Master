#ifndef ABSTRACTMOB_HPP
#define ABSTRACTMOB_HPP

#include <list>
#include <iostream>
#include <math.h>
#include "./LivingEntity.hpp"
#include "./buff/Buffs.hpp"

class AbstractAiBehavior;

class AbstractMob : public LivingEntity
{
private:
    std::list<Buffs*> buffs;
    AbstractAiBehavior* behavior;
protected:
static const int MAX_BUFFS = 20;
public:
    AbstractMob(HitBox* hitbox, AbstractAiBehavior* behavior, int maxlife = 10, float range = 1.f, float damage = 1, int life = 10);
    ~AbstractMob();
    virtual void regenLife();
    virtual void addBuff(Buffs* buff);
    //* remove from begin
    virtual void removeBuff();
    virtual void removeBuff(Buffs* buff);
    virtual void removeBuff(BuffTypes type);
    virtual void clearBuff();
    //* affect by behavior
    virtual void receiveDamage(AbstractMob* Enemy, float damage);
    //* beravior
    virtual void setBehavior(AbstractAiBehavior* behavior);
    virtual AbstractAiBehavior* getBehavior();
    //TODO create a projectile to deal damage
    virtual void attack();
    virtual void move();
    virtual void heal(int amount);
    virtual void walk(Vec2* target);
    virtual void tick();
};

#endif