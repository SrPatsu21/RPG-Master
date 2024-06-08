#include "AbstractAiBehavior.hpp"

AbstractAiBehavior::AbstractAiBehavior(AbstractMob* own, BEHAVIORTYPE type, AbstractMob* target)
{
    this->type = type;
    this->target = target;
};
BEHAVIORTYPE AbstractAiBehavior::getBehaiviorType()
{
    return type;
};
void AbstractAiBehavior::setTarget(AbstractMob* target)
{
    this->target = target;
};
void AbstractAiBehavior::loseTarget()
{
    target = NULL;
};
AbstractMob* AbstractAiBehavior::getTarget()
{
    return target;
};
AbstractMob* AbstractAiBehavior::getOwn()
{
    return own;
}