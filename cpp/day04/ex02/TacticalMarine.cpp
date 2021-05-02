#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine *TacticalMarine::clone()
{
    return (this);
}

void TacticalMarine::battleCry()
{
    std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack()
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack()
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}