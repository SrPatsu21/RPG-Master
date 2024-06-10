#ifndef NORMALBEHAVIOR_HPP
#define NORMALBEHAVIOR_HPP

#include "./AbstractAiBehavior.hpp"

class NormalBehavior : public AbstractAiBehavior
{
public:
    NormalBehavior(LivingEntity* own, LivingEntity* target = NULL);

    void behavior();
};

#endif