#include "Vec2Delta.hpp"

Vec2Delta::Vec2Delta(float delta = 0, float scale = 0)
{
    setDelta(x);
    setScale(scale);
};
Vec2Delta::~Vec2Delta()
{

};
float Vec2Delta::getDeltaX()
{
    return this->x;
};
float Vec2Delta::getDeltaY()
{
    return this->y;
};
void Vec2Delta::setDelta(float delta)
{     
    this->x = std::cos(delta);
    this->y = std::sin(delta);  
};
void Vec2Delta::setScale(float scale)
{
    this->scale = scale;
};
float Vec2Delta::getScale()
{
    return this->scale;
};
Vec2* Vec2Delta::vecNormalMoviClac(Vec2* vec2)
{
    vec2->moveXY((getDeltaX()*getScale()), (getDeltaY()*getScale()));
};
Vec2Delta* Vec2Delta::clone()
{
    return new Vec2Delta(this->x, this->y);
};