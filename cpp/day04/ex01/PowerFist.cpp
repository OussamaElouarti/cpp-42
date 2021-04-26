#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{

}

void    PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}