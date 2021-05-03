#ifndef TacticalMarine_HPP
#define TacticalMarine_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        ~TacticalMarine();
        void meleeAttack() const;
        void rangedAttack() const;
        void battleCry() const;
        ISpaceMarine *clone() const;
};

#endif