#include "frdi.hpp"

Frdi::Frdi() : AWeapon("Frdi", 7, 30)
{
    
}

Frdi::~Frdi()
{
	
}

void    Frdi::attack() const
{
    std::cout << "* babaq *" << std::endl;
}