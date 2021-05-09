#include "FragTrap.hpp"

int     main( void )
{
    srand (time(0));

    FragTrap fragtrap("popsoda");

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
    return (0);
}