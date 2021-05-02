#include "Squad.hpp"

Squad::Squad()
{
    this->_count = 0;
    this->_units->_unit = NULL;
}

int     Squad::getCount() const
{
    return (this->_count);
}

ISpaceMarine  *Squad::getUnit(int n) const
{
    int i = 0;

    if (n == 0)
        return (this->_units->_unit);
    while (this->_units->_unit && i <= n)
    {
        this->_units->_unit = this->_units->_next->_unit;
        i++;
    }
    return (this->_units->_unit);
}

int Squad::push(ISpaceMarine* unit)
{
    int i = 0;
    if (!unit)
        return (this->_count);
    while (this->_units->_unit)
    {
        i++;
        // if (unit->_unit.compare(this->_units->_unit) == 0)
        //     return(this->_count);
        this->_units->_unit = this->_units->_next->_unit;
    }
    this->_units->_unit = unit;
    this->_count++;
    return (i + 1);
}