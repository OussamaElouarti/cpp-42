#ifndef TacticalMarine_HPP
#define TacticalMarine_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        ~TacticalMarine();
        void meleeAttack();
        void rangedAttack();
        void battleCry();
        ISpaceMarine *clone();
};

#endif