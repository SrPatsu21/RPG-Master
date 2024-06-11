#include "./AbstractMob.hpp"
#include "./../map/World.hpp"

AbstractMob::AbstractMob(HitBox* hitbox, AbstractAiBehavior* behavior, int maxlife, float range, float damage, int life)
: LivingEntity(hitbox, maxlife, range, damage, life)
{
    if (NULL == behavior->getOwn())
    {
           this->behavior = behavior;
           this->behavior->setOwn(this);
    }
};
AbstractMob::~AbstractMob()
{
    std::list<Buffs*>::iterator ibuffs;
    for (ibuffs = buffs.begin(); buffs.end() != ibuffs; ++ibuffs)
    {
        delete (*ibuffs);
    }
    delete behavior;
};
void AbstractMob::heal(int amount)
{
    life =(int) std::max((float)(life+std::abs(amount)), 0.f);
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
void AbstractMob::receiveDamage(AbstractMob* Enemy, float damage)
{
    life =(int) std::max(life-std::abs(damage), 0.f);
    if (life != 0)
    {
        behavior->setTarget(Enemy);
    }else
    {
        discard = true;
    }
};
void AbstractMob::attack()
{
    //* thanks singleton 
    World::addProjectiles(new AbstractProjectile(new HitBox(getHitBox()->getX(), getHitBox()->getY()), this));
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
    getBehavior()->behavior();
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