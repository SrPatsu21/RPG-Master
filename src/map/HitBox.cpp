#include "HitBox.hpp"

//creat new Vec2 objects
HitBox::HitBox(int entitypos_x = 0, int entitypos_y= 0, int x0 = 0, int y0 = 0, int x1, int y1)
{
    HitBox(new Vec2(entitypos_x, entitypos_y), new Vec2(x0, y0), new Vec2(x1, y1));
};
HitBox::HitBox(Vec2* entitypos ,Vec2* v0, Vec2* v1)
{
    this->entitypos = entitypos;
    this->edge0 = v0;
    this->edge1 = v1;
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
bool HitBox::isColiding(int x, int y)
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
HitBox* HitBox::clone()
{
    return new HitBox(
        this->getEntityPos()->getX(), this->getEntityPos()->getY(),
        this->getEdgeInitial()->getX(), this->getEdgeInitial()->getY(),
        this->getEdgeFinal()->getX(), this->getEdgeFinal()->getY()
    );
};