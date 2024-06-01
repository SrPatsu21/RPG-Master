#ifndef INVSLOT_HPP
#define INVSLOT_HPP

#include "./../item/AbstractItem.hpp"
#include <iostream>

class AbstractItem;

class InvSlot
{
private:
AbstractItem* item;
public:
    InvSlot(AbstractItem* item);
    void setItem(AbstractItem* item);
    AbstractItem* getItem();
    //TODO create an item entity
    void dropItem();
    void useRItem();
    void useLItem();
};

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

#endif