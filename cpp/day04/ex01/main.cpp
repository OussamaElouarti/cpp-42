#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "frdi.hpp"
#include "Zombie.hpp"

int main()
{
    Character* me = new Character("me");
    std::cout << *me;
    Enemy* a = new Zombie();
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    AWeapon* pt = new Frdi();
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    me->equip(pt);
    std::cout << *me;
    me->attack(a);
    std::cout << *me;
    return 0;
}