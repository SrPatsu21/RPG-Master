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

#endif