#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    this->_name = name;
    this->_ArmorDamageReduction = 3;
    this->_EnergyPoints = 50;
    this->_hitPoint = 100;
    this->_level = 1;
    this->_maxEnergyPoints = 50;
    this->_maxHitPoints = 100;
    this->_meleeAttackDamage = 20;
    this->_RangedAttackDamage = 15;
    std::cout << "SC4V_TP " << this->_name << " is up" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "SC4V_TP " << this->_name << " RIP!" << std::endl;
}

void    ScavTrap::challengeNewcomer(std::string const & target)
{
    int i =  rand() % 3;

    if (this->_EnergyPoints >= 25)
    {
        this->_EnergyPoints -= 25;
        if (i == 0)
            std::cout << target << " , can you do 50 push ups? i guess you cant!" << std::endl;
        else if (i == 1)
            std::cout << target << " , you wanna start a party!" << std::endl;
        else if (i == 2)
            std::cout << target << " , cau you run faster than me?" << std::endl;
    }
    else
        std::cout << "SC4V_TP " << this->_name << " got no energy left :/" << std::endl;
}