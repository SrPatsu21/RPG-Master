#include "AbstractAiBehavior.hpp"

AbstractAiBehavior::AbstractAiBehavior(BEHAIVIORTYPE type, AbstractMob* target)
{
    this->type = type;
    this->target = target;
};
BEHAIVIORTYPE AbstractAiBehavior::getBehaiviorType()
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