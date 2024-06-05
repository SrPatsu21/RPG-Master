#ifndef ABSTRACTITEM_HPP
#define ABSTRACTITEM_HPP

#include <iostream>
#include "./../inventory/InvSlot.hpp"

class AbstractItem
{
private:
    InvSlot* own;
protected:
    AbstractItem(InvSlot* own = NULL);
public:
    ~AbstractItem();
    void setInvSlot(InvSlot* slot);
    InvSlot* getInvSlot();
    virtual void useR();
    virtual void useL();
};

#endif