#include "AbstractMob.hpp"

AbstractMob::AbstractMob(HitBox* hitbox, int maxlife, AbstractAiBehavior* behavior)
: LivingEntity(hitbox, maxlife)
{
    this->behavior = behavior;
};
AbstractMob::~AbstractMob()
{

};
void AbstractMob::heal(int amount)
{
    LivingEntity::heal(amount);
};
void AbstractMob::regenLife()
{
    heal(1);
};
void AbstractMob::addBuff(Buffs* buff)
{
    if (MAX_BUFFS >= buffs.size())
    {
        buffs.push_back(buff);
    }
};
void AbstractMob::removeBuff()
{
    std::list<Buffs*>::iterator it = buffs.begin();
    buffs.pop_front();
    delete *it;
};
void AbstractMob::removeBuff(Buffs* buff)
{
    std::list<Buffs*>::iterator it = buffs.begin(); 
    for (it ; it != buffs.end(); it++)
    {
        if (*it == buff)
        {
            delete *buffs.erase(it);
            break;
        }
    }
};
void AbstractMob::removeBuff(BuffTypes type)
{
    std::list<Buffs*>::iterator it = buffs.begin(); 
    for (it ; it != buffs.end(); it++)
    {
        if ((*it)->getType() == type)
        {
            delete *buffs.erase(it);
        }
    }
};
void AbstractMob::clearBuff()
{
    buffs.clear();
};

void AbstractMob::setBehavior(AbstractAiBehavior* behavior)
{
    delete this->behavior;
    this->behavior = behavior;
};
AbstractAiBehavior* AbstractMob::getBehavior()
{
    return behavior;
};
void AbstractMob::receiveDamage(AbstractMob* Enemy)
{

};
void AbstractMob::attack()
{

};
void AbstractMob::move()
{
    LivingEntity::move();
};
void AbstractMob::walk(Vec2* target)
{

};
void AbstractMob::tick()
{
    LivingEntity::tick();
};