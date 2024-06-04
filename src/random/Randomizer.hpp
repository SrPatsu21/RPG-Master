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

Randomizer::Randomizer()
{
    setRandom();
};
void Randomizer::setRandom()
{
    srand(time(NULL));
    this->random = rand();
};

#endif