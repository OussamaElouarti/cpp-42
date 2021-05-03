#include "Squad.hpp"

Squad::Squad()
{
    this->_count = 0;
    this->_units = NULL;
}

Squad::~Squad()
{
    t_units *next;


    while (this->_units != NULL)
    {
        delete this->_units->_unit;
        next = this->_units;
        this->_units = this->_units->_next;
        delete next;
    }
}

int     Squad::getCount() const
{
    return (this->_count);
}

ISpaceMarine  *Squad::getUnit(int n) const
{
    t_units *tmp;
    int i = 0;

    tmp = this->_units;
    if (n < 0 || n >= this->_count)
        return (NULL);
    // if (n == 0)
    //     return (this->_units->_unit);
    while (n--)
    {
        tmp = tmp->_next;
    }
    return (tmp->_unit);
}

int Squad::push(ISpaceMarine* unit)
{
    int i = 0;
    t_units *units;

    units = this->_units;
    if (!unit)
        return (this->_count);
    if (this->_units == NULL)
    {
        this->_units = new t_units;
        this->_units->_next = NULL;
        this->_units->_unit = unit;
        this->_count++;
        return (this->_count);
    }
    i = 0;
    while (i < this->_count)
    {
        if (this->getUnit(i) == NULL)
            break ;
        i++;
    }
    if (i >= this->_count)
    {
        while (units->_next)
            units = units->_next;
        units->_next = new t_units;
        units->_next->_unit = unit;
        units->_next->_next = NULL;
        this->_count++;
    }
    return (this->_count);
}