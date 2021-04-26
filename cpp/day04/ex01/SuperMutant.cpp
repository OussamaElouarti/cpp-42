#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    // this->_HP = 170;
    // this->_type = "Super Mutant";
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int amount)
{
    if (amount < 3)
        std::cout  << "Hmmm .. did do somthin" << std::endl;
    else
        this->_HP -= (amount - 3);
    if (this->_HP < 0)
        this->_HP = 0;  
}