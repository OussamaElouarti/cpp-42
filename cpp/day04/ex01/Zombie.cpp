#include "Zombie.hpp"

Zombie::Zombie() : Enemy(150, "Zombie")
{
    std::cout << "Uggh..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "terereren" << std::endl;
}

void Zombie::takeDamage(int amount)
{
    if (amount < 3)
        std::cout  << "Hmmm .. did u do somthin" << std::endl;
    else
        this->_HP -= (amount - 3);
    if (this->_HP < 0)
        this->_HP = 0;
    if (this->_HP == 0)
    std::cout << "terereren" << std::endl;
}