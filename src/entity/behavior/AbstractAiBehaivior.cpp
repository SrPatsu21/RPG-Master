#include "AbstractAiBehavior.hpp"

AbstractAiBehavior::AbstractAiBehavior(BEHAIVIORTYPE type, AbstractMob* target)
{
    this->type = type;
    this->target = target;
};
AbstractAiBehavior::~AbstractAiBehavior()
{

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