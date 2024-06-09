#include "Character.hpp"

Character::Character(HitBox* hitbox, AbstractAiBehavior* behavior, int maxlife = 10, float range = 1.f, float damage = 1, int life = 10)
: AbstractMob(hitbox, behavior, maxlife, range, damage, life)
{
    
};