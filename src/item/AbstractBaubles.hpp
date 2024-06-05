#ifndef ABSTRACTBAUBLES_HPP
#define ABSTRACTBAUBLES_HPP

#include "AbstractItem.hpp"

class AbstractBaubles : public AbstractItem
{
private:
protected:
    virtual void use();
public:
    AbstractBaubles();
    ~AbstractBaubles();
    void useR();
    void useL();
};

#endif