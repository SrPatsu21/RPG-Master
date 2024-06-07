#include "NormalBehavior.hpp"

NormalBehavior::NormalBehavior(AbstractMob* target = NULL)
: AbstractAiBehavior(BEHAVIORTYPE::NormalBehavior, target)
{

};

void NormalBehavior::behavior()
{
   //randon walk
    getOwn()->getDirection()->randDirection();
    getOwn()->move();
};