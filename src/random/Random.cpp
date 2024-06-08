#include "./Random.hpp"

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