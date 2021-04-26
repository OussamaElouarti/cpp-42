#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80 , "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int amount)
{
    this->_HP -= amount;
    if (this->_HP < 0)
        this->_HP = 0;
    if (this->_HP == 0)
        std::cout << "* SPROTCH *" << std::endl;
}