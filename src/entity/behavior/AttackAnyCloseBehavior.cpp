#include "AttackAnyCloseBehavior.hpp"

AttackAnyCloseBehavior::AttackAnyCloseBehavior(AbstractMob* target = NULL)
: AbstractAiBehavior(BEHAVIORTYPE::AttackAnyCloseBehavior, target)
{

};

void AttackAnyCloseBehavior::behavior()
{
    //TODO function to found a target

    //* if not null target
    if (getTarget() != NULL)
    {
        //* tg = y/x
        //* arctan = delta
        getOwn()->setDirection(std::atan((getTarget()->getHitBox()->getY()-getOwn()->getHitBox()->getY())/(getTarget()->getHitBox()->getX()-getOwn()->getHitBox()->getX())));
        if (getOwn()->getHitBox()->distanceBetween(getTarget()->getHitBox()->getPos()) > getOwn()->getRange())
        {
            getOwn()->move();
        }else
        {
            getOwn()->attack();
        }
    }else
    {
        //randon walk
        getOwn()->getDirection()->randDirection();
        getOwn()->move();
    }
};