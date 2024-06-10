#ifndef ABSTRACTCOLLISIONABLEENTITY_HPP
#define ABSTRACTCOLLISIONABLEENTITY_HPP

#include "./Entity.hpp"
#include "./../map/HitBox.hpp"
#include "./../map/Vec2Delta.hpp"

class HitBox;

class AbstractCollisionableEntity : public Entity
{
private:
    HitBox* hitbox;
protected:
    bool discard; 
public:
    AbstractCollisionableEntity(HitBox* hitbox);
    ~AbstractCollisionableEntity();
    HitBox* getHitBox();
    Vec2* getPosition();
    Vec2Delta* getDirection();
    bool isToDiscard();
    virtual void setDirection(float direction);
    virtual void setDirection(float direction, float scale);
    virtual void setPosition(double x, double y);
    virtual void move();
    virtual void tick();
};

#endif