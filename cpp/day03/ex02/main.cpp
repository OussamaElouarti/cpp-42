#include "FragTrap.hpp"
#include "ScavTrap.hpp"
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
    std::cout << "-------------------------------------------------------" << std::endl;
    scavtrap.beRepaired(5);
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(13);
    scavtrap.rangedAttack("tesla");
    scavtrap.meleeAttack("tesla");
    scavtrap.challengeNewcomer("tesla");
    scavtrap.challengeNewcomer("tesla");
    scavtrap.challengeNewcomer("tesla");
    return (0);
}