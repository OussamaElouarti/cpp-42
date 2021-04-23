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

void    ScavTrap::rangedAttack(std::string const & target)
{
    if (this->_hitPoint == 0)
        std::cout << "SC4V_TP " << this->_name << " is dead he cant attack!" << std::endl;
    else
        std::cout << "SC4V_TP " << this->_name << " attacks " << target << " at range, causing " << this->_RangedAttackDamage << " points of damage!" << std::endl;
}

void    ScavTrap::meleeAttack(std::string const & target)
{
    if (this->_hitPoint == 0)
        std::cout << "SC4V_TP " << this->_name << " is dead he cant attack!" << std::endl;
    else
        std::cout << "SC4V_TP " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    amount -= this->_ArmorDamageReduction;
    if (amount > this->_hitPoint)
         this->_hitPoint = 0;
    else
        this->_hitPoint -= amount;
    if (this->_hitPoint <= 0)
    {
        this->_hitPoint = 0;
        std::cout << "SC4V_TP " << this->_name << " is dead after taking " << amount<< " of damage!" << std::endl;
        return ;
    }
    std::cout << "SC4V_TP "  << this->_name << " has " << this->_hitPoint << " hit points, after taking " << amount << " damage!" << std::endl;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoint == this->_maxHitPoints)
        std::cout << "SC4V_TP " << this->_name << " is full HP!" << std::endl;
    else if (this->_hitPoint == 0)
        std::cout << "SC4V_TP " << this->_name << " is already dead :/" << std::endl;
    else
    {
        this->_hitPoint += amount;
        if (this->_hitPoint > this->_maxHitPoints)
            this->_hitPoint = this->_maxHitPoints;
        std::cout << "SC4V_TP has " << this->_hitPoint << " hit points, after healing " << amount << " damage!" << std::endl;
    }
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