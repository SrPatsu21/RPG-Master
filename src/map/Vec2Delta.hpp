#ifndef VEC2DELTA_HPP
#define VEC2DELTA_HPP

#include "Vec2.hpp"
#include "./../random/Randomizer.hpp"


class Vec2Delta
{
private:
    float x;
    float y;
    float scale;
public:
    Vec2Delta(float delta = 0, float scale = 0);
    ~Vec2Delta();
    void setDelta(float delta);
    float getDeltaX();
    float getDeltaY();
    void setScale(float scale);
    float getScale();
    void setDeltaScale(float delta, float scale);
    void randDirection();
    //*change directly on memory
    void vecNormalMoviClac(Vec2* vec2);
    Vec2Delta* clone();
};
#endif