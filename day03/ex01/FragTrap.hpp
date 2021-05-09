#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <cmath>
class FragTrap
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
        FragTrap(std::string name);
        ~FragTrap();
        void    rangedAttack(std::string const & target);
        void    meleeAttack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    vaulthunter_dot_exe(std::string const & target);
};

#endif