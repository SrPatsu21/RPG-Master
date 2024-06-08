#ifndef ATTACKTARGETBEHAVIOR_HPP
#define ATTACKTARGETBEHAVIOR_HPP

#include "./AbstractAiBehavior.hpp"
#include "./NormalBehavior.hpp"

class AttackTargetBehavior : public AbstractAiBehavior
{
public:
    AttackTargetBehavior(AbstractMob* own, AbstractMob* target = NULL);

    void behavior();
};

#endif