#include "./AbstractProjectile.hpp"

AbstractProjectile::AbstractProjectile(HitBox* hitbox, AbstractMob* owner, float damage, int lifetime)
: AbstractCollisionableEntity(hitbox)
{
    this->owner = owner;
    this->damage = damage;
    this->lifetime = lifetime
};
void AbstractProjectile::setOwner()
{

};
AbstractMob* AbstractProjectile::getOwner()
{

};
void AbstractProjectile::setDamage(float damage)
{

};
float AbstractProjectile::getDamage()
{

};
int AbstractProjectile::getLifeTime()
{

};
void AbstractProjectile::onCollision()
{

};
void AbstractProjectile::setLifeTime(int lifetime)
{

};
void AbstractProjectile::setPosition(double x, double y)
{

};
void AbstractProjectile::setDirection(float direction)
{

};
void AbstractProjectile::setDirection(float direction, float scale)
{

};
void AbstractProjectile::move()
{

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