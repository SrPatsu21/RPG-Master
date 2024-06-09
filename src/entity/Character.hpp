#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "./AbstractMob.hpp"

//TODO define the class methods
class Character : public AbstractMob
{
public:
    Character(HitBox* hitbox, AbstractAiBehavior* behavior, int maxlife = 10, float range = 1.f, float damage = 1, int life = 10);
    // virtual void regenLife();
    // virtual void addBuff(Buffs* buff);
    // //* remove from begin
    // virtual void removeBuff();
    // virtual void removeBuff(Buffs* buff);
    // virtual void removeBuff(BuffTypes type);
    // virtual void clearBuff();
    // //* change the entity state
    // virtual void setBehavior(AbstractAiBehavior* behavior);
    // virtual AbstractAiBehavior* getBehavior();
    // //* affect by behavior
    // virtual void receiveDamage(AbstractMob* Enemy);
    // //* creat a projectile to deal damage
    // virtual void attack();
    // virtual void move();
    // virtual void heal(int amount);
    // virtual void walk(Vec2* target);
    // virtual void tick();
};

#endif