#include "Vec2Delta.hpp"

Vec2Delta::Vec2Delta(float delta, float scale)
{
    setDelta(delta);
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
void Vec2Delta::setDeltaScale(float delta, float scale)
{
    setDelta(delta);
    setScale(scale);
};
void Vec2Delta::vecNormalMoviClac(Vec2* vec2)
{
    vec2->moveXY((getDeltaX()*getScale()), (getDeltaY()*getScale()));
};
Vec2Delta* Vec2Delta::clone()
{
    return new Vec2Delta(std::acos(this->x), this->scale);
};
void Vec2Delta::randDirection()
{
    setDelta(Random::getRandom());
};