#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public :
        RadScorpion();
        RadScorpion(const RadScorpion&);
        virtual ~RadScorpion();
        RadScorpion &operator=(const RadScorpion& op);
        void takeDamage(int amount);
};
#endif