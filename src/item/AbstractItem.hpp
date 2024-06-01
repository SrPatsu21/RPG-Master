#ifndef ABSTRACTITEM_HPP
#define ABSTRACTITEM_HPP

class AbstractItem
{
private:

protected:
    AbstractItem(){};
public:
    ~AbstractItem(){};

    virtual void useR() = 0;
    virtual void useL() = 0;
};
#endif