#include "./InvSlot.hpp"

InvSlot::InvSlot(AbstractItem* item = NULL)
{
    this->item = item;
};
void InvSlot::setItem(AbstractItem* item)
{
    this->item = item;
};
AbstractItem* InvSlot::getItem()
{
    return item;
};
void InvSlot::dropItem()
{
    //????????????
};
void InvSlot::useRItem()
{

};
void InvSlot::useLItem()
{

};