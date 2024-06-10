#ifndef FLEEBEHAVIOR_HPP
#define FLEEBEHAVIOR_HPP

#include "AbstractAiBehavior.hpp"
#include "NormalBehavior.hpp"

class FleeBehavior : public AbstractAiBehavior
{
private:
public:
    FleeBehavior(LivingEntity* own, LivingEntity* target = NULL);

    void behavior();
};

#endif