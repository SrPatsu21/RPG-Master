#ifndef ABSTRACTAIBEHAVIOR_HPP
#define ABSTRACTAIBEHAVIOR_HPP

#include "./../LivingEntity.hpp"

enum BEHAVIORTYPE
{
    NORMAL_BEHAVIOR,
    FLEE_BEHAVIOR,
    ATTACK_TARGET_BEHAVIOR,
    ATTACK_ANY_CLOSE_BEHAVIOR
};

class LivingEntity;

class AbstractAiBehavior
{
private:
    BEHAVIORTYPE type;
    LivingEntity* own;
    LivingEntity* target;
protected:
    AbstractAiBehavior( LivingEntity* own, BEHAVIORTYPE type, LivingEntity* target = NULL);
public:
    BEHAVIORTYPE getBehaiviorType();
    void setTarget(LivingEntity* target);
    void loseTarget();
    LivingEntity* getTarget();
    void setOwn(LivingEntity* own);
    LivingEntity* getOwn();
    virtual void behavior() = 0;
};

#endif