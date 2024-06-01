#include "AbstractItem.hpp"

AbstractItem::AbstractItem(InvSlot* own)
{
    this->own = own;
};

AbstractItem::~AbstractItem()
{
    getInvSlot()->setItem(NULL);
};
void AbstractItem::setInvSlot(InvSlot* slot)
{
    this->own = own;
};
InvSlot* AbstractItem::getInvSlot()
{
    return own;
};
void AbstractItem::useR()
{

};
void AbstractItem::useL()
{

};