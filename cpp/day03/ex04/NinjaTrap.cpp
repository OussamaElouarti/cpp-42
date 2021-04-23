#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
{
    this->_name = name;
    this->_ArmorDamageReduction = 0;
    this->_EnergyPoints = 120;
    this->_hitPoint = 60;
    this->_level = 1;
    this->_maxEnergyPoints = 120;
    this->_maxHitPoints = 60;
    this->_meleeAttackDamage = 60;
    this->_RangedAttackDamage = 5;
    std::cout << "NINJ4_TP " << this->_name << " is ready" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "NINJ4_TP " << this->_name << " is dead" << std::endl;
}

void    NinjaTrap::ninjaShoebox(FragTrap & target)
{
    std::cout << "its a FragTrap" << std::endl;
}
void    NinjaTrap::ninjaShoebox(ScavTrap & target)
{
    std::cout << "its a ScavTrap" << std::endl;
}
void    NinjaTrap::ninjaShoebox(NinjaTrap & target)
{
    std::cout << "its a NinjaTrap" << std::endl;
}