#include "./AbstractParticles.hpp"

AbstractParticles::AbstractParticles(Vec2* pos = new Vec2(), Vec2Delta* direction = new Vec2Delta(), int lifetime)
: Entity()
{
    this->pos = pos;
    this->direction = direction;
    this->lifetime = lifetime;
};
AbstractParticles::AbstractParticles(double pos_x, double pos_y, float delta, float scale, int lifetime) 
: Entity()
{
    AbstractParticles(new Vec2(pos_x, pos_y), new Vec2Delta(delta, scale), lifetime);
};
AbstractParticles::~AbstractParticles()
{
    delete this->pos;
    delete this->direction;
};
void AbstractParticles::setPosition(double x, double y)
{
    this->pos->setPos(x, y);
};
void AbstractParticles::setPosition(Vec2* position)
{
    setPosition(position->getX(), position->getY());
};
void AbstractParticles::setLifeTime(int lifetime)
{
    this->lifetime = lifetime;
};
int AbstractParticles::getLifeTime()
{
    return this->lifetime;
};
Vec2* AbstractParticles::getPosition()
{
    return this->pos;
};
Vec2Delta* AbstractParticles::getDirection()
{
    return this->direction;
};
void AbstractParticles::setDirection(float direction, float scale)
{
    this->direction->setDelta(direction);
    this->direction->setScale(scale);
};
void AbstractParticles::move()
{
    getDirection()->vecNormalMoviClac(getPosition());
};
void AbstractParticles::tick()
{
    if (getLifeTime() <= 0)
    {
        delete this;
    }else
    {
        move();
    }
};
