#ifndef HITBOX_HPP
#define HITBOX_HPP

#include "Vec2.hpp"

class HitBox : public Vec2
{
private:
    Vec2* edge0;
    Vec2* edge1;
public:
    HitBox(int pos_x = 0, int pos_y= 0, int x0 = 0, int y0 = 0, int x1, int y1);
    HitBox(Vec2* pos ,Vec2* v0, Vec2* v1);
    Vec2* getEdgeInitial();
    Vec2* getEdgeIFinal();
    bool isColiding(Vec2* vec2);
    bool isColiding(int x, int y);
    HitBox* clone();
};
#endif