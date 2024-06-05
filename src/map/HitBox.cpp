#include "HitBox.hpp"

//creat new Vec2 objects
HitBox::HitBox(double pos_x, double pos_y, double x0, double y0, double x1, double y1, float direction, float speed)
{
    HitBox(pos_x, pos_y, new Vec2(x0, y0), new Vec2(x1, y1), new Vec2Delta(direction, speed));
};
HitBox::HitBox(double pos_x, double pos_y, Vec2* v0, Vec2* v1, Vec2Delta* direction)
:Vec2(pos_x, pos_y)
{
    this->edge0 = v0;
    this->edge1 = v1;
    this->direction = direction;
};
Vec2* HitBox::getEdgeInitial()
{
    return this->edge0;
};
Vec2* HitBox::getEdgeFinal()
{
    return this->edge1;
};
Vec2* HitBox::getPos()
{
    return ((Vec2*)this);
}
Vec2Delta* HitBox::getDirection()
{
    return this->direction;
};
Vec2* HitBox::clone()
{
    return new Vec2(getX(), getY());
};
double HitBox::distanceBetween(Vec2* second_vec2)
{
    return std::abs(getPos()->getX()-second_vec2->getX())+std::abs(getPos()->getY()-second_vec2->getY());
};
double HitBox::distanceBetween(HitBox* second_hitbox)
{
    double d1 = distanceBetween2(getPos(), second_hitbox->getPos());
    double d2 = distanceBetween2(getEdgeInitial(), second_hitbox->getEdgeInitial());
    double d3 = distanceBetween2(getEdgeFinal(), second_hitbox->getEdgeFinal());
    double d4 = distanceBetween2(getEdgeInitial(), second_hitbox->getEdgeFinal());
    return std::fmin(std::fmin(d1, d4), std::fmin(d2, d3));
};
HitBox* HitBox::cloneHitbox()
{
    return new HitBox(
        getX(),
        getY(),
        getEdgeInitial()->clone(),
        getEdgeFinal()->clone(),
        getDirection()->clone()
    );
};