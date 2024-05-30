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
LivingEntity* Owner;
int lifetime;
int intesity;

protected:
BuffTypes type;
public:
    Buffs(LivingEntity* Owner, int lifetime, int intesity);
    ~Buffs();
    BuffTypes getType();
    //* effect change what's needed
    void doEffect();
    //* remove what effect have done
    void undoEffect();
    //* redoce lifetime, if needed replay effect
    void tick();
};

#endif