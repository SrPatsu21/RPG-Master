#ifndef RANDOM_HPP
#define RANDOM_HPP

#include "Randomizer.hpp"

class Random
{
private:
    static Randomizer* randomizer;
public:
    Random();
    //* static random value
    static double getRandom();
    void tick();
};

Random::Random()
{
    if (NULL == (randomizer))
    {
        randomizer = new Randomizer();
    }
};
double Random::getRandom()
{
    return randomizer->random;
};
void Random::tick()
{
    randomizer->setRandom();
};

#endif