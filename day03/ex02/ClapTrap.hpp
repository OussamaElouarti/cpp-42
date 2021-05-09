#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <cmath>

class ClapTrap
{
    protected:
        unsigned int _hitPoint;
        unsigned int _maxHitPoints;
        unsigned int _EnergyPoints;
        unsigned int _maxEnergyPoints;
        unsigned int _level;
        std::string _name;
        unsigned int _meleeAttackDamage;
        unsigned int _RangedAttackDamage;
        unsigned int _ArmorDamageReduction;
    public:
        ClapTrap();
        ~ClapTrap();
        void    rangedAttack(std::string const & target);
        void    meleeAttack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};
#endif