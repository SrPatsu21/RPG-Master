#ifndef ABSTRACTPARTICLES_HPP
#define ABSTRACTPARTICLES_HPP

#include "./../map/Vec2.hpp"
#include "./../map/Vec2Delta.hpp"
#include "./Entity.hpp"

class AbstractParticles : public Entity
{
private:
    Vec2* pos;
    Vec2Delta* direction;
public:
    AbstractParticles(double pos_x = 0, double pos_y = 0, float delta = 0, float scale = 0);
    AbstractParticles(Vec2* pos = new Vec2(), Vec2Delta* direction = new Vec2Delta());
    ~AbstractParticles();
    virtual void setPosition(Vec2* position);
    virtual void setPosition(double x, double y);
    virtual Vec2* getPosition();
    virtual Vec2Delta* getDirection();
    virtual void move();
    virtual void tick();
};

AbstractParticles::AbstractParticles(double pos_x = 0, double pos_y = 0, float delta = 0, float scale = 0) 
: Entity()
{
    AbstractParticles(new Vec2(pos_x, pos_y), new Vec2Delta(delta, scale));
};
AbstractParticles::AbstractParticles(Vec2* pos = new Vec2(), Vec2Delta* direction = new Vec2Delta())
: Entity()
{
    this->pos = pos;
    this->direction = direction;
};
AbstractParticles::~AbstractParticles()
{
    delete getPosition();
    delete getDirection();
};
void setPosition(Vec2* position);
void setPosition(double x, double y);
Vec2* getPosition();
Vec2Delta* getDirection();
void move();
void tick();


#endif