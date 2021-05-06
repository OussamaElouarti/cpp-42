#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator();
        AssaultTerminator(const AssaultTerminator&) {};
        virtual ~AssaultTerminator();
        AssaultTerminator &operator=(const AssaultTerminator& op);
        void meleeAttack() const;
        void rangedAttack() const;
        void battleCry() const;
        ISpaceMarine *clone() const;
};

#endif