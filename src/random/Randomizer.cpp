#include "./Randomizer.hpp"

Randomizer::Randomizer()
{
    setRandom();
};
void Randomizer::setRandom()
{
    srand(time(NULL));
    this->random = rand();
};