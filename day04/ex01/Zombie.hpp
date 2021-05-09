#ifndef Zombie_HPP
# define Zombie_HPP

# include <iostream>
# include "Enemy.hpp"

class Zombie : public Enemy
{
    public :
        Zombie();
        Zombie(const Zombie&);
        virtual ~Zombie();
        Zombie &operator=(const Zombie& op);
        void takeDamage(int amount);
};
#endif