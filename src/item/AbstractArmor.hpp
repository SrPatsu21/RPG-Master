#ifndef ABSTRACTARMOR_HPP
#define ABSTRACTARMOR_HPP

#include "./AbstractItem.hpp"

class AbstractArmor : public AbstractItem
{
private:
    int maxdurability; 
protected:
    int durability;
    int protection;
    virtual void use();
public:
    AbstractArmor(int protection, int maxdurability = 1, int durability = 1);
    ~AbstractArmor();
    void setMaxDurability(int maxdurability);
    int getMaxDurability();
    void setDurability(int durability);
    int getProtenction();
    void setProtection(int protection);
    int getDurability();
    virtual float reduceDamage(float damage);
    void useR();
    void useL();
};

#endif