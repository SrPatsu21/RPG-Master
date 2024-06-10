#ifndef RANDOMIZER_HPP
#define RANDOMIZER_HPP

#include <stdlib.h>
#include <time.h>

class Randomizer
{
private:
protected:
    Randomizer();
    static Randomizer* randomizer_;
    double random_value;
    //* set new number every time
    void setRandom();
public:
    //* randomizer
    static void tick();
    //* get random value
    static double getRandom();
};

#endif