#ifndef ABSTRACTWEAPON_HPP
#define ABSTRACTWEAPON_HPP

#include "./AbstractItem.hpp"

class AbstractWeapon : public AbstractItem
{
private:
    int maxdurability; 
protected:
    int durability;
    float damage;
public:
    AbstractWeapon(float damage, int maxdurability = 1, int durability = 1, InvSlot* own = NULL);
    ~AbstractWeapon();
    void setMaxDurability(int maxdurability);
    int getMaxDurability();
    void setDurability(int durability);
    int getDurability();
    void setDamage(float damage);
    float getDamage();
    virtual void useR();
    virtual void useL();
};

#endif