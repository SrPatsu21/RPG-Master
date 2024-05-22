#include "HitBox.hpp"

HitBox::HitBox(int pos_x = 0, int pos_y= 0, int x0 = 0, int y0 = 0, int x1, int y1)
{
    HitBox(new Vec2(pos_x, pos_y), new Vec2(x0, y0), new Vec2(x1, y1));
};
HitBox::HitBox(Vec2* pos ,Vec2* v0, Vec2* v1)
{
    this->edge0 = v0;
    this->edge1 = v1;
};
Vec2* HitBox::getEdgeInitial()
{
    return this->edge0;
};
Vec2* HitBox::getEdgeIFinal()
{
    return this->edge1;
};
bool HitBox::isColiding(Vec2* vec2)
{
    return isColiding(vec2->getX(), vec2->getY());
};
bool HitBox::isColiding(int x, int y)
{

};
HitBox* HitBox::clone()
{
    return new HitBox();
};