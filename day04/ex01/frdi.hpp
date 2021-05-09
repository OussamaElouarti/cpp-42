#ifndef FRDI_HPP
# define FRDI_HPP

#include <iostream>
#include "AWeapon.hpp"

class Frdi : public AWeapon
{
    public :
        Frdi();
        Frdi(const Frdi & copy);
        virtual ~Frdi();
        Frdi &operator=(const Frdi& op);
        void attack() const;
};
#endif