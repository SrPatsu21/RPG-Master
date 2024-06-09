#ifndef RANDOMIZER_HPP
#define RANDOMIZER_HPP

#include <stdlib.h>
#include <time.h>

class Randomizer
{
private:
    double random;
    Randomizer();
    //* set new number every time
    void setRandom();
public:
friend class Random;
};

#endif