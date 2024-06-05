#ifndef HITBOX_HPP
#define HITBOX_HPP

#include "Vec2.hpp"
#include "Vec2Delta.hpp"
#include "./../entity/AbstractCollisionableEntity.hpp"

class HitBox : public Vec2
{
private:
    Vec2* edge0;
    Vec2* edge1;
    Vec2Delta* direction;
public:

    HitBox(double pos_x, double pos_y, double x0 = 0, double y0 = 0, double x1 = 1, double y1 = 1, float direction = 0, float speed = 0);
    HitBox(double pos_x, double pos_y, Vec2* v0, Vec2* v1, Vec2Delta* direction);
    Vec2* getEdgeInitial();
    Vec2* getEdgeFinal();
    Vec2* getPos();
    Vec2Delta* getDirection();
    Vec2* clone();
    virtual double distanceBetween(Vec2* second_vec2);
    virtual double distanceBetween(HitBox* second_hitbox);
    HitBox* cloneHitbox();
};
#endif