#include "./Randomizer.hpp"

Randomizer* Randomizer::randomizer_ = NULL;

Randomizer::Randomizer()
{
    setRandom();
};
void Randomizer::setRandom()
{
    srand(time(NULL));
    random_value = rand();
};
void Randomizer::tick()
{
    if (randomizer_ == NULL)
    {
        randomizer_ = new Randomizer();
    }
    randomizer_->random_value = rand();
};
double Randomizer::getRandom()
{
    if (randomizer_ == NULL)
    {
        randomizer_ = new Randomizer();
    }
    return randomizer_->random_value;
}