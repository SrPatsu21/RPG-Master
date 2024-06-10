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

#endif