#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <iostream>
#include "ISquad.hpp"
#include <string>
#include "ISpaceMarine.hpp"

class Squad: public ISquad
{
    typedef struct  s_units
    {
        ISpaceMarine    *_unit;
        struct s_units  *_next;
    }               t_units;
    private:
        
        int         _count;
        t_units     *_units;

    public:
        Squad();
        Squad(const Squad&);
        ~Squad();
        Squad &operator=(const Squad& op);
        int                     getCount() const;
        ISpaceMarine*           getUnit(int) const;
        int                     push(ISpaceMarine*);

};

#endif