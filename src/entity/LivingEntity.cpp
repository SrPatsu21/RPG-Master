#include "./LivingEntity.hpp"

LivingEntity::LivingEntity(HitBox* hitbox, int maxlife,  float range)
: AbstractCollisionableEntity(hitbox)
{
    this->maxlife = maxlife;
    this->life = maxlife;
    this->range;
}
LivingEntity::~LivingEntity()
{

}
void LivingEntity::setMaxLife(int maxlife)
{
    this->maxlife = maxlife;
};
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
void LivingEntity::setRange(float range)
{
    this->range = range;
};
float LivingEntity::getRange()
{
    return range;
};
void LivingEntity::move()
{
    AbstractCollisionableEntity::move();
};
void LivingEntity::tick()
{
    AbstractCollisionableEntity::tick();
};
