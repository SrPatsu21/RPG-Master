#include "AttackTargetBehavior.hpp"

AttackTargetBehavior::AttackTargetBehavior(AbstractMob* target = NULL)
: AbstractAiBehavior(BEHAVIORTYPE::AttackTargetBehavior, target)
{

};

void AttackTargetBehavior::behavior()
{
    //* if null target
    if (getTarget() != NULL)
    {
        this = new NormalBehavior;
    }else
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
    }
};