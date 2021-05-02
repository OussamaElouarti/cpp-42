#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int amount)
{
    if (amount < 3)
        std::cout  << "Hmmm .. did u do somthin" << std::endl;
    else
        this->_HP -= (amount - 3);
    if (this->_HP < 0)
        this->_HP = 0;
    if (this->_HP == 0)
    std::cout << "Aaargh..." << std::endl;
}