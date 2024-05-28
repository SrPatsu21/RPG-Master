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
    void setHitBox(HitBox* hitbox);
    HitBox* getHitBox();
    virtual void move();
    virtual void tick();
};

#endif