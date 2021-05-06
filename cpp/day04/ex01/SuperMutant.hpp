#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public :
        SuperMutant();
        SuperMutant(const SuperMutant&);
        virtual ~SuperMutant();
        SuperMutant &operator=(const SuperMutant& op);
        void takeDamage(int amount);
};
#endif