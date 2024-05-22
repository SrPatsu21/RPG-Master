#include "Vec2.hpp"

Vec2::Vec2(int x = 0, int y = 0)
{
    this->x = x;
    this->y = y;
};

Vec2::~Vec2()
{
};

int Vec2::getX()
{
    return this->x;
};
int Vec2::getY()
{
    return this->y;
};
void Vec2::setX(int x)
{
    this->x = x;
};
void Vec2::setY(int y)
{
    this->y = y;
};
void Vec2::moveX(int distance)
{
    this->x += distance;
};
void Vec2::moveY(int distance)
{
    this->y += distance;
};
void Vec2::moveXY(int x, int y)
{
    moveX(x);
    moveY(y);
};
void Vec2::setPos(int x, int y)
{
    setX(x);
    setY(y);
};

Vec2* Vec2::clone()
{
    return new Vec2(this->x, this->y);
};