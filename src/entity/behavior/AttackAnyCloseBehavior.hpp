#ifndef ATTACKANYCLOSEBEHAVIOR_HPP
#define ATTACKANYCLOSEBEHAVIOR_HPP

#include "./AbstractAiBehavior.hpp"

class AttackAnyCloseBehavior : public AbstractAiBehavior
{
private:
public:
    AttackAnyCloseBehavior(LivingEntity* own, LivingEntity* target = NULL);

    void behavior();
};

#endif