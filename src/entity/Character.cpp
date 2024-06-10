#include "Character.hpp"

Character::Character(HitBox* hitbox, AbstractAiBehavior* behavior, int maxlife, float range, float damage, int life)
: AbstractMob(hitbox, behavior, maxlife, range, damage, life)
{
    
};