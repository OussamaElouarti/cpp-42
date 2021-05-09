#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const &name) : 
    ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
    std::cout << name << " SUperTrap has been created!" << std::endl;
    this->_name = name;
    this->_ArmorDamageReduction = 5;
    this->_EnergyPoints = 120;
    this->_hitPoint = 100;
    this->_level = 1;
    this->_maxEnergyPoints = 120;
    this->_maxHitPoints = 100;
    this->_meleeAttackDamage = 60;
    this->_RangedAttackDamage = 20;
}

SuperTrap::~SuperTrap()
{
    std::cout << "SuperTRap is dead!" << std::endl;
}

void    SuperTrap::rangedAttack(std::string const & target)
{
    FragTrap::rangedAttack(target);
}

void    SuperTrap::meleeAttack(std::string const & target)
{
    NinjaTrap::meleeAttack(target);
}