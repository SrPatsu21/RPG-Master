#ifndef VEC2_HPP
#define VEC2_HPP

class Vec2
{
private:
    int x;
    int y;
public:
    Vec2(int x = 0, int y = 0);
    ~Vec2();
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    void moveX(int distance);
    void moveY(int distance);
    void moveXY(int x, int y);
    void setPos(int x, int y);
    Vec2* clone();
};
#endif