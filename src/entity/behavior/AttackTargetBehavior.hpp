#ifndef ATTACKTARGETBEHAVIOR_HPP
#define ATTACKTARGETBEHAVIOR_HPP

#include "./AbstractAiBehavior.hpp"
#include "./NormalBehavior.hpp"

class AttackTargetBehavior : public AbstractAiBehavior
{
public:
    AttackTargetBehavior(LivingEntity* own, LivingEntity* target = NULL);

    void behavior();
};

#endif