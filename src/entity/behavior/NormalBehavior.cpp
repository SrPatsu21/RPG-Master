#include "NormalBehavior.hpp"

NormalBehavior::NormalBehavior(LivingEntity* own, LivingEntity* target)
: AbstractAiBehavior(own,BEHAVIORTYPE::NORMAL_BEHAVIOR, target)
{

};

void NormalBehavior::behavior()
{
   //randon walk
    getOwn()->getDirection()->randDirection();
    getOwn()->move();
};