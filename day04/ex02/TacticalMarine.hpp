#ifndef TacticalMarine_HPP
#define TacticalMarine_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        TacticalMarine(const TacticalMarine&) {};
        virtual ~TacticalMarine();
        TacticalMarine &operator=(const TacticalMarine& op);
        void meleeAttack() const;
        void rangedAttack() const;
        void battleCry() const;
        ISpaceMarine *clone() const;
};

#endif