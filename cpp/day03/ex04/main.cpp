#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int     main( void )
{
    srand (time(0));

    FragTrap fragtrap("popsoda");
    ScavTrap scavtrap("teslazap");
    NinjaTrap ninjatrap("ninja");
    SuperTrap supertrap("super");

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
    std::cout << "-------------------------------------------------------" << std::endl;
    ninjatrap.beRepaired(5);
    ninjatrap.takeDamage(20);
    ninjatrap.beRepaired(13);
    ninjatrap.rangedAttack("tesla");
    ninjatrap.meleeAttack("tesla");
    ninjatrap.ninjaShoebox(scavtrap);
    ninjatrap.ninjaShoebox(fragtrap);
    ninjatrap.ninjaShoebox(ninjatrap);
    std::cout << "-------------------------------------------------------" << std::endl;
    supertrap.beRepaired(5);
    supertrap.takeDamage(20);
    supertrap.beRepaired(13);
    supertrap.rangedAttack("tesla");
    supertrap.meleeAttack("tesla");
    supertrap.ninjaShoebox(scavtrap);
    supertrap.vaulthunter_dot_exe("tesla");
    std::cout << "-------------------------------------------------------" << std::endl;
    return (0);
}