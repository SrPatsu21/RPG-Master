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
    int lifetime;
public:
    AbstractParticles(double pos_x = 0, double pos_y = 0, float delta = 0, float scale = 0, int lifetime = 0);
    AbstractParticles(Vec2* pos = new Vec2(), Vec2Delta* direction = new Vec2Delta(), int lifetime = 0);
    ~AbstractParticles();
    virtual void setPosition(Vec2* position);
    virtual void setPosition(double x, double y);
    virtual void setLifeTime(int lifetime);
    virtual int getLifeTime();
    virtual Vec2* getPosition();
    virtual Vec2Delta* getDirection();
    virtual void setDirection(float direction, float scale);
    virtual void move();
    virtual void tick();
};

#endif