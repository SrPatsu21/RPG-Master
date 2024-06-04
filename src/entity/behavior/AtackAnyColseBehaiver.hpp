#ifndef ATACKANYCOLSEBEHAIVER_HPP
#define ATACKANYCOLSEBEHAIVER_HPP

#include "./AbstractAiBehavior.hpp"

class AtackAnyColseBehaiver : public AbstractAiBehavior
{
private:
public:
    AtackAnyColseBehaiver(AbstractMob* target = NULL);

    void behavior();
};

#endif