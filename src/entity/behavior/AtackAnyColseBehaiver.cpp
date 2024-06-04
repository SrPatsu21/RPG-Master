#include "AtackAnyColseBehaiver.hpp"

AtackAnyColseBehaiver::AtackAnyColseBehaiver(AbstractMob* target = NULL)
: AbstractAiBehavior(BEHAIVIORTYPE::AtackAnyColseBehaiver, target)
{

};

void AtackAnyColseBehaiver::behavior()
{
    //TODO function to found a target

    //* if null target
    if (getTarget() != NULL)
    {
        getOwn()->getDirection()->randDirection();
        getOwn()->move();
    }else
    {
        //TODO verify the distance
        if (getOwn()->getHitBox())
        {
            /* code */
        }
        
        getOwn()->walk(getTarget()->getPosition());

    }
    
};