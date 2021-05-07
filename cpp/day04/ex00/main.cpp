#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Knight.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Knight kim("Kim");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(kim);
    robert.polymorph(joe);
    return 0;
}