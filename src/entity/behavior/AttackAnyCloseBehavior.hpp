#ifndef ATTACKANYCLOSEBEHAVIOR_HPP
#define ATTACKANYCLOSEBEHAVIOR_HPP

#include "./AbstractAiBehavior.hpp"

class AttackAnyCloseBehavior : public AbstractAiBehavior
{
private:
public:
    AttackAnyCloseBehavior(AbstractMob* own, AbstractMob* target = NULL);

    void behavior();
};

#endif