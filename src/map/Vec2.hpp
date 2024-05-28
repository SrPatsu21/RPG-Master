#ifndef VEC2_HPP
#define VEC2_HPP

class Vec2
{
private:
    double x;
    double y;
public:
    Vec2(double x = 0, double y = 0);
    ~Vec2();
    double getX();
    double getY();
    void setX(double x);
    void setY(double y);
    void moveX(double distance);
    void moveY(double distance);
    void moveXY(double x, double y);
    void setPos(double x, double y);
    Vec2* clone();
};
#endif