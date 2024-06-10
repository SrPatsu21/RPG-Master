#include "./Random.hpp"

Random::Random()
{
    if (NULL == (randomizer_))
    {
        randomizer_ = new Randomizer();
    }
};
double Random::getRandom()
{
    if (NULL == (randomizer))
    {
        randomizer = new Randomizer();
    }
    
    return randomizer->random_value;
};
void Random::tick()
{
    randomizer->setRandom();
};