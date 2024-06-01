#include "Buffs.hpp"

Buffs::Buffs(LivingEntity* owner, int lifetime, int intesity)
{
    this->owner = owner;
    this->lifetime = lifetime;
    this->intesity = intesity;
};
Buffs::~Buffs()
{
    
};
void Buffs::setIntensity(int intensity)
{
    this->intesity = intesity;
};
int Buffs::getIntensity()
{
    return intesity;
};
void Buffs::setLifeTime(int lifetime)
{
    this->lifetime = lifetime;
};
int Buffs::getLifeTime()
{
    return lifetime;
};
void Buffs::setType(BuffTypes type)
{
    this->type = type;
};
BuffTypes Buffs::getType()
{
    return type;
};
void Buffs::doEffect()
{

};
void Buffs::undoEffect()
{

};
void Buffs::tick()
{
    if (0 >= lifetime)
    {
        delete this;
    }
    lifetime--;
};