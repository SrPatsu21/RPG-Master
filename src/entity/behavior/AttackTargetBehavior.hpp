#ifndef ATTACKTARGETBEHAVIOR_HPP
#define ATTACKTARGETBEHAVIOR_HPP

#include "./AbstractAiBehavior.hpp"
#include "./NormalBehavior.hpp"

class AttackTargetBehavior : public AbstractAiBehavior
{
private:
public:
    AttackTargetBehavior(AbstractMob* target = NULL);

    void behavior();
};

#endif