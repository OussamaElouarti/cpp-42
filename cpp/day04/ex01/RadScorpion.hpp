#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public :
        RadScorpion();
        ~RadScorpion();
        void takeDamage(int amount);
};
#endif