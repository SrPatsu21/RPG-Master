#include "./AbstractProjectile.hpp"

AbstractProjectile::AbstractProjectile(HitBox* hitbox, AbstractMob* owner, float damage, int lifetime)
: AbstractCollisionableEntity(hitbox)
{
    this->owner = owner;
    this->damage = damage;
    this->lifetime = lifetime;
};
void AbstractProjectile::setOwner(AbstractMob* owner)
{
    this->owner = owner;
};
AbstractMob* AbstractProjectile::getOwner()
{
    return owner;
};
void AbstractProjectile::setDamage(float damage)
{
    this->damage = damage;
};
float AbstractProjectile::getDamage()
{
    return damage;
};
int AbstractProjectile::getLifeTime()
{
    return lifetime;
};
void AbstractProjectile::onCollision(AbstractMob* mob)
{

};
void AbstractProjectile::setLifeTime(int lifetime)
{
    this->lifetime = lifetime;
};
void AbstractProjectile::setPosition(double x, double y)
{
    AbstractCollisionableEntity::setPosition(x, y);
};
void AbstractProjectile::move()
{
    AbstractCollisionableEntity::move();
};
void AbstractProjectile::tick()
{
    AbstractCollisionableEntity::tick();
    if (0 < lifetime)
    {
            lifetime--;
    }else
    {
        discard = true;
    }
};