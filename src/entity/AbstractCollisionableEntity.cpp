#include "./AbstractCollisionableEntity.hpp"

AbstractCollisionableEntity::AbstractCollisionableEntity(Vec2* position, HitBox* hitbox, Vec2Delta* direction)
: Entity(position, direction)
{
    setHitBox(hitbox);
};
AbstractCollisionableEntity::~AbstractCollisionableEntity()
{
    delete hitbox;
};
void AbstractCollisionableEntity::setHitBox(HitBox* hitbox)
{
    this->hitbox = hitbox;
};
HitBox* AbstractCollisionableEntity::getHitBox()
{
    return this->hitbox;
};
void AbstractCollisionableEntity::move()
{
    Entity::move();
};
void AbstractCollisionableEntity::tick()
{
    Entity::tick();
};