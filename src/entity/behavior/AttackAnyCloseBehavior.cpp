#include "AttackAnyCloseBehavior.hpp"

AttackAnyCloseBehavior::AttackAnyCloseBehavior(AbstractMob* target = NULL)
: AbstractAiBehavior(BEHAIVIORTYPE::AtackAnyColseBehaiver, target)
{

};

void AttackAnyCloseBehavior::behavior()
{
    //TODO function to found a target

    //* if null target
    if (getTarget() != NULL)
    {
        getOwn()->getDirection()->randDirection();
        getOwn()->move();
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