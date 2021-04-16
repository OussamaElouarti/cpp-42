#include "FragTrap.hpp"

int     main( void )
{
    srand (time(0));

    FragTrap fragtrap("popsoda");
    ScavTrap scavtrap("teslazap");

    fragtrap.beRepaired(5);
    fragtrap.takeDamage(20);
    fragtrap.vaulthunter_dot_exe("tesla");
    fragtrap.beRepaired(13);
    fragtrap.rangedAttack("tesla");
    fragtrap.vaulthunter_dot_exe("tesla");
    fragtrap.meleeAttack("tesla");
    fragtrap.vaulthunter_dot_exe("tesla");
    fragtrap.vaulthunter_dot_exe("tesla");
    fragtrap.vaulthunter_dot_exe("tesla");
    
    scavtrap.beRepaired(5);
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(13);
    scavtrap.rangedAttack("tesla");
    scavtrap.meleeAttack("tesla");
    return (0);
}