#ifndef ABSTRACTCOLLISIONABLEENTITY_HPP
#define ABSTRACTCOLLISIONABLEENTITY_HPP

#include "./Entity.hpp"
#include "./../map/HitBox.hpp"
#include "./../map/Vec2Delta.hpp"

class AbstractCollisionableEntity : public Entity
{
private:
    HitBox* hitbox;
public:
    AbstractCollisionableEntity(HitBox* hitbox);
    ~AbstractCollisionableEntity();
    HitBox* getHitBox();
    virtual void setPosition(double x, double y);
    Vec2* getPosition();
    virtual void setDirection(float direction, float scale);
    Vec2Delta* getDirection();
    virtual void move();
    virtual void tick();
};

#endif