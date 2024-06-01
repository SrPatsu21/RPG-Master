#include "./AbstractArmor.hpp"

AbstractArmor::AbstractArmor(int protection, int maxdurability, int durability)
: AbstractItem()
{
    this->protection = protection;
    this->maxdurability = maxdurability;
    this->durability = durability;
};
AbstractArmor::~AbstractArmor()
{

};
void AbstractArmor::setMaxDurability(int maxdurability)
{
    this->maxdurability = maxdurability;
};
int AbstractArmor::getMaxDurability()
{
    return durability;
};
void AbstractArmor::setDurability(int durability)
{
    this->durability = durability;
};
int AbstractArmor::getProtenction()
{
    return protection;
};
void AbstractArmor::setProtection(int protection)
{
    this->protection = protection;
};
int AbstractArmor::getDurability()
{
    return durability;
};
float AbstractArmor::reduceDamage(float damage)
{
    return damage*(1/getProtenction());
};
void AbstractArmor::useR()
{
    use();
};
void AbstractArmor::useL()
{
    use();
};
void AbstractArmor::use()
{
    if (0 < getDurability())
    {
        durability--;
    }else
    {
        delete this;
    }
};