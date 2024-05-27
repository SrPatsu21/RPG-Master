#include "./Entity.hpp"

Entity::Entity(Vec2* position, float delta = 0, float speed)
{
    Entity(position, new Vec2Delta(delta, speed));
};
Entity::Entity(Vec2* position, Vec2Delta* direction)
{
    this->position = position;
    this->direction = direction;
};
Entity::~Entity()
{
    delete getPosition();
    delete getDirection();
};
void Entity::setPosition(Vec2* position)
{
    this->position = position;
};
void Entity::setPosition(int x, int y)
{
    setPosition(new Vec2(x, y));
};
Vec2* Entity::getPosition()
{
    return this->position;
};
void Entity::setDirection(float delta)
{
    this->direction->setDelta(delta);
};
Vec2Delta* Entity::getDirection()
{
    return this->direction;
};
void Entity::setSpeed(float speed)
{
    this->direction->setScale(speed);
};
int Entity::getSpeed()
{
    return direction->getScale();
};
void Entity::move()
{
    
};
void Entity::tick()
{

};