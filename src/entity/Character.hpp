#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "./AbstractMob.hpp"
#include "./CharacterRender.hpp"

class Character : public AbstractMob, public CharacterRender
{
public:
    Character(HitBox* hitbox, std::string path, int maxlife = 10, float range = 1.f, float damage = 1, int life = 10);
    //* affect by behavior
    virtual void receiveDamage(AbstractMob* Enemy, float damage);
    //* creat a projectile to deal damage
    virtual void attack();
    virtual void tick();
};

#endif