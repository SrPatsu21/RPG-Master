#ifndef ABSTRACTAIBEHAVIOR_HPP
#define ABSTRACTAIBEHAVIOR_HPP

#include "./../AbstractMob.hpp"

enum BEHAVIORTYPE
{
    NORMAL_BEHAVIOR,
    FLEE_BEHAVIOR,
    ATTACK_TARGET_BEHAVIOR,
    ATTACK_ANY_CLOSE_BEHAVIOR
};

class AbstractAiBehavior
{
private:
    BEHAVIORTYPE type;
    AbstractMob* own;
    AbstractMob* target;
protected:
    AbstractAiBehavior( AbstractMob* own, BEHAVIORTYPE type, AbstractMob* target = NULL);
public:
    BEHAVIORTYPE getBehaiviorType();
    void setTarget(AbstractMob* target);
    void loseTarget();
    AbstractMob* getTarget();
    AbstractMob* getOwn();
    virtual void behavior() = 0;
};

#endif