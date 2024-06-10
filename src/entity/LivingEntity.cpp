#include "./LivingEntity.hpp"

LivingEntity::LivingEntity(HitBox* hitbox, int maxlife,  float range, float damage, int life)
: AbstractCollisionableEntity(hitbox)
{
    this->maxlife = maxlife;
    this->life = maxlife;
    this->range = range;
    this->damage = damage;
    this->life = life;
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
};
