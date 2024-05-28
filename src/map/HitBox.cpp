#include "HitBox.hpp"

//creat new Vec2 objects
HitBox::HitBox(double pos_x = 0, double pos_y= 0, double x0 = 0, double y0 = 0, double x1, double y1, float direction = 0, float speed = 0, Entity* entity)
{
    HitBox(new Vec2(pos_x, pos_y), new Vec2(x0, y0), new Vec2(x1, y1), new Vec2Delta(direction, speed), entity);
};
HitBox::HitBox(Vec2* pos, Vec2* v0, Vec2* v1, Vec2Delta* direction, Entity* entity)
{
    this->pos = pos;
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
bool HitBox::isColiding(Vec2* vec2)
{
    return isColiding(vec2->getX(), vec2->getY());
};
Vec2* HitBox::getPos()
{
    return this->pos;
};
Entity* HitBox::getOwn()
{
    return this->own; 
}
bool HitBox::isColiding(double x, double y)
{
    if (getEdgeInitial()->getX() > x && getEdgeFinal()->getX() < x)
    {
        if (getEdgeInitial()->getY() > y && getEdgeFinal()->getY() < y)
        {
                return true;
        }
    }
    return false;
};
Vec2Delta* HitBox::getDirection()
{
    return this->direction;
};
HitBox* HitBox::clone()
{
    return new HitBox(
        this->getPos()->clone(),
        this->getEdgeInitial()->clone(),
        this->getEdgeFinal()->clone(),
        this->getDirection()->clone()
    );
};