#ifndef ABSTRACTMOB_HPP
#define ABSTRACTMOB_HPP


#include <list>
#include "./LivingEntity.hpp"
#include "./buff/Buffs.hpp"

class AbstractMob : public LivingEntity
{
private:
    std::list<Buffs*> buffs;
protected:
static const int MAX_BUFFS = 20;
public:
    AbstractMob(HitBox* hitbox, int maxlife);
    ~AbstractMob();
    virtual void regenLife();
    virtual void addBuff(Buffs* buff);
    //* remove from begin
    virtual void removeBuff();
    virtual void removeBuff(Buffs* buff);
    virtual void removeBuff(BuffTypes type);
    virtual void clearBuff();
    virtual void receiveDamage(AbstractMob* Enemy);
    virtual void attack();
    virtual void move();
    virtual void heal(int amount);
    virtual void walk(Vec2* target);
    virtual void tick();
};

#endif