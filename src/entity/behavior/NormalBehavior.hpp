#ifndef NORMALBEHAVIOR_HPP
#define NORMALBEHAVIOR_HPP

#include "./AbstractAiBehavior.hpp"

class NormalBehavior : public AbstractAiBehavior
{
private:
public:
    NormalBehavior(AbstractMob* target = NULL);

    void behavior();
};

#endif