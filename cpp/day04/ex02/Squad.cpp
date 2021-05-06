#include "Squad.hpp"

Squad::Squad()
{
    this->_count = 0;
    this->_units = NULL;
}

Squad::Squad(const Squad& op)
{
    t_units *units;
    t_units *units_next;
    t_units *start_units;
    t_units *op_units;

    units = this->_units;
    units_next = units->_next;
    start_units = units;
    op_units = op._units;
    for(int i = 0; i < this->getCount(); i++)
    {
        delete units->_unit;
        units = units_next;
        units_next = units->_next;
    }
    units = start_units;

    for (int i = 0; i < op.getCount(); i++)
    {
        ISpaceMarine *copy = op_units->_unit->clone();
        this->push(copy);
        op_units = op_units->_next;
    }
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

    tmp = this->_units;
    if (n < 0 || n >= this->_count)
        return (NULL);
    while (n--)
        tmp = tmp->_next;
    return (tmp->_unit);
}

Squad & Squad::operator=(const Squad& op)
{
    if (this == &op)
        return (*this);
    this->_count = op._count;
    for(int i = 0; i < this->getCount(); i++)
    {
        delete this->_units->_unit;
        this->_units->_unit = this->_units->_next->_unit;
    }
    this->_units = op._units;
    return (*this);
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