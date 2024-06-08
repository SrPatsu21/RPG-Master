#ifndef ABSTRACTMOB_HPP
#define ABSTRACTMOB_HPP

#include <list>
#include "./LivingEntity.hpp"
#include "./buff/Buffs.hpp"
#include "./behavior/AbstractAiBehavior.hpp"
#include "./behavior/AttackAnyCloseBehavior.hpp"

class AbstractMob : public LivingEntity
{
private:
    std::list<Buffs*> buffs;
    AbstractAiBehavior* behavior;
protected:
static const int MAX_BUFFS = 20;
public:
    AbstractMob(HitBox* hitbox, int maxlife, AbstractAiBehavior* behavior);
    ~AbstractMob();
    virtual void regenLife();
    virtual void addBuff(Buffs* buff);
    //* remove from begin
    virtual void removeBuff();
    virtual void removeBuff(Buffs* buff);
    virtual void removeBuff(BuffTypes type);
    virtual void clearBuff();
    //* change the entity state
    virtual void setBehavior(AbstractAiBehavior* behavior);
    virtual AbstractAiBehavior* getBehavior();
    //* affect by behavior
    virtual void receiveDamage(AbstractMob* Enemy);
    //* creat a projectile to deal damage
    virtual void attack();
    virtual void move();
    virtual void heal(int amount);
    virtual void walk(Vec2* target);
    virtual void tick();
};

#endif