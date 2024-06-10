#include "AbstractAiBehavior.hpp"

AbstractAiBehavior::AbstractAiBehavior(LivingEntity* own, BEHAVIORTYPE type, LivingEntity* target)
{
    this->type = type;
    this->target = target;
};
BEHAVIORTYPE AbstractAiBehavior::getBehaiviorType()
{
    return type;
};
void AbstractAiBehavior::setTarget(LivingEntity* target)
{
    this->target = target;
};
void AbstractAiBehavior::loseTarget()
{
    target = NULL;
};
LivingEntity* AbstractAiBehavior::getTarget()
{
    return target;
};
LivingEntity* AbstractAiBehavior::getOwn()
{
    return own;
}