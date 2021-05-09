#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name)
{
    std::cout << name << " ClapTrap has been created" << std::endl;
}

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap has been created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap has beed killed" << std::endl;
}
void    ClapTrap::rangedAttack(std::string const & target)
{
    if (this->_hitPoint == 0)
        std::cout << this->_name << " is dead he cant attack!" << std::endl;
    else
        std::cout << this->_name << " attacks " << target << " at range, causing " << this->_RangedAttackDamage << " points of damage!" << std::endl;
}

void    ClapTrap::meleeAttack(std::string const & target)
{
    if (this->_hitPoint == 0)
        std::cout << this->_name << " is dead he cant attack!" << std::endl;
    else
        std::cout << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    amount -= this->_ArmorDamageReduction;
    if (amount > this->_hitPoint)
         this->_hitPoint = 0;
    else
        this->_hitPoint -= amount;
    if (this->_hitPoint <= 0)
    {
        this->_hitPoint = 0;
        std::cout << this->_name << " is dead after taking " << amount<< " of damage!" << std::endl;
        return ;
    }
    std::cout  << this->_name << " has " << this->_hitPoint << " hit points, after taking " << amount << " damage!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoint == this->_maxHitPoints)
        std::cout << this->_name << " is full HP!" << std::endl;
    else if (this->_hitPoint == 0)
        std::cout << this->_name << " is already dead :/" << std::endl;
    else
    {
        this->_hitPoint += amount;
        if (this->_hitPoint > this->_maxHitPoints)
            this->_hitPoint = this->_maxHitPoints;
        std::cout << this->_hitPoint << " hit points, after healing " << amount << " damage!" << std::endl;
    }
}
