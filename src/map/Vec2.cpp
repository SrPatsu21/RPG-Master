#include "Vec2.hpp"

Vec2::Vec2(double x = 0, double y = 0)
{
    this->x = x;
    this->y = y;
};

Vec2::~Vec2()
{
};

double Vec2::getX()
{
    return this->x;
};
double Vec2::getY()
{
    return this->y;
};
void Vec2::setX(double x)
{
    this->x = x;
};
void Vec2::setY(double y)
{
    this->y = y;
};
void Vec2::moveX(double distance)
{
    this->x += distance;
};
void Vec2::moveY(double distance)
{
    this->y += distance;
};
void Vec2::moveXY(double x, double y)
{
    moveX(x);
    moveY(y);
};
void Vec2::setPos(double x, double y)
{
    setX(x);
    setY(y);
};

Vec2* Vec2::clone()
{
    return new Vec2(this->x, this->y);
};