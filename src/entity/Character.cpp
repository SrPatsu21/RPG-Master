#include "Character.hpp"
#include "./../map/World.hpp"
#include "./behavior/NormalBehavior.hpp"

Character::Character(HitBox* hitbox, int maxlife, float range, float damage, int life)
: AbstractMob(hitbox, new NormalBehavior(this, NULL), maxlife, range, damage, life)
{
    
};
void Character::receiveDamage(AbstractMob* Enemy, float damage)
{
    AbstractMob::receiveDamage(Enemy, damage);
};
//* creat a projectile to deal damage
void Character::attack()
{
    Vec2Delta* aux = this->getHitBox()->getDirection()->clone();
    aux->setScale(2.0);
    World::addProjectiles(new AbstractProjectile(new HitBox(getPosition()->getX(), getPosition()->getY(), new Vec2(-0.2,-0.2), new Vec2(0.2, 0.2), aux)));
};
void Character::tick()
{
    
};