#include "./LivingEntity.hpp"

LivingEntity::LivingEntity(HitBox* hitbox)
: AbstractCollisionableEntity(hitbox)
{

}
LivingEntity::~LivingEntity()
{

}
int LivingEntity::getMaxLife()
{
    return maxlife;
};
void LivingEntity::setLife(int life)
{
    this->life = life;
};
int LivingEntity::getLife()
{
    return life;
};
void LivingEntity::heal(int amount)
{
    life = std::min(maxlife, life+amount);
};
void LivingEntity::setDamage(float damage)
{
    this->damage = damage;
};
float LivingEntity::getDamage()
{
    return damage;
};
void LivingEntity::move()
{
    AbstractCollisionableEntity::move();
};
void LivingEntity::tick()
{
    AbstractCollisionableEntity::tick();
};
