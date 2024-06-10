#ifndef ENTITY_HPP
#define ENTITY_HPP

#include "./../map/Vec2.hpp"
#include "./../map/Vec2Delta.hpp"
#include "./../map/World.hpp"

class Entity
{
private:
protected:
    Entity(){};
    ~Entity(){};
public:
    virtual void setPosition(double x, double y) = 0;
    virtual Vec2* getPosition() = 0;
    virtual void setDirection(float direction) = 0;
    virtual void setDirection(float direction, float scale) = 0;
    virtual Vec2Delta* getDirection() = 0;
    virtual void move() = 0;
    virtual void tick() = 0;
};
#endif