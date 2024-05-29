#ifndef HITBOX_HPP
#define HITBOX_HPP

#include "Vec2.hpp"
#include "Vec2Delta.hpp"
#include "./../entity/Entity.hpp"

class HitBox
{
private:
    Vec2* edge0;
    Vec2* edge1;
    Vec2* pos;
    Vec2Delta* direction;
public:
    HitBox(double pos_x = 0, double pos_y= 0, double x0 = 0, double y0 = 0, double x1, double y1, float direction = 0, float speed = 0);
    HitBox(Vec2* pos ,Vec2* v0, Vec2* v1, Vec2Delta* direction);
    Vec2* getEdgeInitial();
    Vec2* getEdgeFinal();
    Vec2* getPos();
    Vec2Delta* getDirection();
    // bool isColiding(Vec2* vec2);
    // bool isColiding(double x, double y);
    HitBox* clone();
};
#endif