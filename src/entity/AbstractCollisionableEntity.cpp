#include "./AbstractCollisionableEntity.hpp"

AbstractCollisionableEntity::AbstractCollisionableEntity(HitBox* hitbox)
: Entity()
{
    this->hitbox = hitbox;
};
AbstractCollisionableEntity::~AbstractCollisionableEntity()
{
    delete this->hitbox;
};
HitBox* AbstractCollisionableEntity::getHitBox()
{
    return this->hitbox;
};
void AbstractCollisionableEntity::setPosition(double x, double y)
{
    this->hitbox->setPos(x, y);
};
Vec2* AbstractCollisionableEntity::getPosition()
{
    return this->hitbox->getPos();
};
void AbstractCollisionableEntity::setDirection(float direction, float scale)
{
    this->hitbox->getDirection()->setDeltaScale(direction, scale);
};
void AbstractCollisionableEntity::setDirection(float direction)
{
    this->hitbox->getDirection()->setDelta(direction);
};
Vec2Delta* AbstractCollisionableEntity::getDirection()
{
    return this->hitbox->getDirection();
};
void AbstractCollisionableEntity::move()
{
};
void AbstractCollisionableEntity::tick()
{
};
