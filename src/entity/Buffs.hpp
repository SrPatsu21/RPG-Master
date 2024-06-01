#ifndef BUFFS_HPP
#define BUFFS_HPP

#include "LivingEntity.hpp"

enum BuffTypes
{
    NONE, LIFE, DAMAGE, MOVIMENT
};

class Buffs
{
private:
LivingEntity* owner;

protected:
BuffTypes type;
int lifetime;
int intesity;

public:
    Buffs(LivingEntity* owner, int lifetime, int intesity);
    ~Buffs();
    void setIntensity(int intensity);
    int getIntensity();
    void setLifeTime(int lifetime);
    int getLifeTime();
    void setType(BuffTypes type);
    BuffTypes getType();
    //* effect change what's needed
    virtual void doEffect();
    //* remove what effect have done
    virtual void undoEffect();
    //* redoce lifetime, if needed replay effect
    virtual void tick();
};

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
    this->type = 
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
    lifetime--;
    if (0 >= lifetime)
    {
        delete this;
    }
    
};
#endif