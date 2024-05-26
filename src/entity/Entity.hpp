#ifndef ENTITY_HPP
#define ENTITY_HPP

#include "./../map/Vec2.hpp"
#include "./../map/Vec2Delta.hpp"

class Entity
{
private:
    Vec2* position;
    Vec2Delta* direction;
public:
    Entity(Vec2* position, float delta = 0, float speed);
    Entity(Vec2* position, Vec2Delta* direction);
    ~Entity();
    void setPosition(Vec2* position);
    void setPosition(int x, int y);
    Vec2* getPosition();
    //radians 
    virtual void setDirection(float delta);
    Vec2Delta* getDirection();
    void setSpeed(float speed);
    int getSpeed();
    virtual void move();
    virtual void tick();
};

#endif