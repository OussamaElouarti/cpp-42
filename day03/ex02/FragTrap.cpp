#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    this->_name = name;
    this->_ArmorDamageReduction = 5;
    this->_EnergyPoints = 100;
    this->_hitPoint = 100;
    this->_level = 1;
    this->_maxEnergyPoints = 100;
    this->_maxHitPoints = 100;
    this->_meleeAttackDamage = 30;
    this->_RangedAttackDamage = 20;
    std::cout << "FR4G_TP " << this->_name << " is ready" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FR4G_TP " << this->_name << " is dead" << std::endl;
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    std::string attacks[] = {"Heroic Strike", "Fear", "Charge", "Disarm", "Blade Storm"}; 
    std::string attack;
    if (this->_EnergyPoints >= 25)
    {
        this->_EnergyPoints -= 25;
        attack = attacks[rand() % 5];
        std::cout << attack << std::endl;
        if (attack[0] == 'H' || attack[0] == 'B')
            std::cout << "FR4G_TP " << this->_name << " attacks " << target << " with " << attack << " causing " << rand() % (50 + 1 - 20) + 20 << " damage!" << std::endl;
        else if (attack[0] == 'D')
            std::cout << "FR4G_TP " << this->_name << " attacks " << target << " with " << attack << " disarming " << target << " for 10s!" << std::endl;
        else if (attack[0] == 'F')
            std::cout << "FR4AG_TP " <<  this->_name << " attacks " << target << " with " << attack << " make " << target << " scared for 5s!" << std::endl;
        else
            std::cout << "FR4AG_TP " <<  this->_name << " attacks " << target << " with " << attack << " make " << target << " stuned for 3s!" << std::endl;
    }
    else
        std::cout << "FR4G_TP " << this->_name << " don't have enough energy!" << std::endl;
}