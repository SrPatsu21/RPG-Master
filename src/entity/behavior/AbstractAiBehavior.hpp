#ifndef ABSTRACTAIBEHAVIOR_HPP
#define ABSTRACTAIBEHAVIOR_HPP

#include "./../AbstractMob.hpp"

enum BEHAVIORTYPE
{
    NormalBehavior,
    FleeBehavior,
    AttackTargetBehavior,
    AttackAnyCloseBehavior
};

class AbstractAiBehavior
{
private:
    BEHAVIORTYPE type;
    AbstractMob* own;
    AbstractMob* target;
protected:
    AbstractAiBehavior(BEHAVIORTYPE type, AbstractMob* target = NULL);
public:
    BEHAVIORTYPE getBehaiviorType();
    void setTarget(AbstractMob* target);
    void loseTarget();
    AbstractMob* getTarget();
    AbstractMob* getOwn();
    virtual void behavior() = 0;
};

#endif