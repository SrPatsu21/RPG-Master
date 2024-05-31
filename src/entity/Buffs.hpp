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
int lifetime;
int intesity;

protected:
BuffTypes type;
public:
    Buffs(LivingEntity* owner, int lifetime, int intesity);
    ~Buffs();
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
    
};
#endif