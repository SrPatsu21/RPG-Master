#include "FleeBehavior.hpp"

FleeBehavior::FleeBehavior(AbstractMob* own, AbstractMob* target)
: AbstractAiBehavior(own, BEHAVIORTYPE::FLEE_BEHAVIOR, target)
{

};
void FleeBehavior::behavior()
{
        //* if not null target
    if (getTarget() != NULL)
    {
        //* tg = y/x
        //* arctan = delta
        //run out
        getOwn()->setDirection(std::atan((-(getTarget()->getHitBox()->getY()-getOwn()->getHitBox()->getY()))/(-(getTarget()->getHitBox()->getX()-getOwn()->getHitBox()->getX()))));
        if (getOwn()->getHitBox()->distanceBetween(getTarget()->getHitBox()->getPos()) > getOwn()->getRange()*5)
        {
            setTarget(NULL);
        }
    }else
    {
        getOwn()->setBehavior(new NormalBehavior(getOwn(), getTarget()));
    }
};