#ifndef ABSTRACTAIBEHAVIOR_HPP
#define ABSTRACTAIBEHAVIOR_HPP

#include "./../AbstractMob.hpp"

enum BEHAIVIORTYPE{
    NormalBehaiver,
    FleeBehavior,
    AtackTargetBehaiver,
    AtackAnyColseBehaiver
};

class AbstractAiBehavior
{
private:
    BEHAIVIORTYPE type;
    AbstractMob* own;
    AbstractMob* target;
protected:
    AbstractAiBehavior(BEHAIVIORTYPE type, AbstractMob* target = NULL);
public:
    ~AbstractAiBehavior();
    BEHAIVIORTYPE getBehaiviorType();
    void setTarget(AbstractMob* target);
    void loseTarget();
    AbstractMob* getTarget();
    virtual void behavior() = 0;
};

#endif