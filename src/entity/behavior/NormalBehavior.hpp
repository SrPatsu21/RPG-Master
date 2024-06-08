#ifndef NORMALBEHAVIOR_HPP
#define NORMALBEHAVIOR_HPP

#include "./AbstractAiBehavior.hpp"

class NormalBehavior : public AbstractAiBehavior
{
public:
    NormalBehavior(AbstractMob* own, AbstractMob* target = NULL);

    void behavior();
};

#endif