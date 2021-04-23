#ifndef NINAJTRAP_HPP
# define NINAJTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
    public:
        NinjaTrap(std::string name);
        ~NinjaTrap();
        void    ninjaShoebox(FragTrap & target);
        void    ninjaShoebox(ScavTrap & target);
        void    ninjaShoebox(NinjaTrap & target);

};

#endif