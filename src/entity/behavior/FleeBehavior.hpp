#ifndef FLEEBEHAVIOR_HPP
#define FLEEBEHAVIOR_HPP

#include "AbstractAiBehavior.hpp"
#include "NormalBehavior.hpp"

class FleeBehavior : public AbstractAiBehavior
{
private:
public:
    FleeBehavior(AbstractMob* own, AbstractMob* target = NULL);

    void behavior();
};

#endif