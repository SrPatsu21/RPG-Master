#include "./AbstractWeapon.hpp"

AbstractWeapon::AbstractWeapon(float damage, int maxdurability, int durability, InvSlot* own)
: AbstractItem(own)
{
    this->damage = damage;
    this->maxdurability = maxdurability;
    this->durability = durability;
};
AbstractWeapon::~AbstractWeapon()
{

};
void AbstractWeapon::setMaxDurability(int maxdurability)
{
    this->maxdurability = maxdurability;
};
int AbstractWeapon::getMaxDurability()
{
    return maxdurability;
};
void AbstractWeapon::setDurability(int durability)
{
    this->durability = durability;
};
int AbstractWeapon::getDurability()
{
    return durability;
};
float AbstractWeapon::getDamage()
{
    return damage;
};
void AbstractWeapon::setDamage(float damage)
{
    this->damage = damage;
};
void AbstractWeapon::useR()
{
    //??????????????
};
void AbstractWeapon::useL()
{
    //??????????????
};
