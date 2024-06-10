#include "AttackTargetBehavior.hpp"

AttackTargetBehavior::AttackTargetBehavior(LivingEntity* own, LivingEntity* target)
: AbstractAiBehavior(own, BEHAVIORTYPE::ATTACK_TARGET_BEHAVIOR, target)
{

};

void AttackTargetBehavior::behavior()
{
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
        getOwn()->setBehavior(new NormalBehavior(getOwn(), getTarget()));
    }
};