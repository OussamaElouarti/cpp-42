#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <cmath>
class ScavTrap
{
    private:
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
        ScavTrap(std::string name);
        ~ScavTrap();
        void    rangedAttack(std::string const & target);
        void    meleeAttack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    challengeNewcomer(std::string const & target);
};

#endif