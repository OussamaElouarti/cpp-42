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
    std::cout << "hi FragTrap ,  you wanna fight!" << std::endl;
}
void    NinjaTrap::ninjaShoebox(ScavTrap & target)
{
    std::cout << "hi ScavTrap can u be my gf!" << std::endl;
}
void    NinjaTrap::ninjaShoebox(NinjaTrap & target)
{
    std::cout << "hi my brother" << std::endl;
}