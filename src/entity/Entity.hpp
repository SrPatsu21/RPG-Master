#ifndef ENTITY_HPP
#define ENTITY_HPP

class Entity
{
private:
protected:
    Entity(){};
    ~Entity(){};
public:
    virtual void setPosition(Vec2* position) = 0;
    virtual void setPosition(double x, double y) = 0;
    virtual Vec2* getPosition() = 0;
    virtual void setDirection() = 0;
    virtual Vec2Delta* getDirection() = 0;
    virtual void move() = 0;
    virtual void tick() = 0;
};
#endif