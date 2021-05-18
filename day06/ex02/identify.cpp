#include "identify.hpp"

Base    *generate( void )
{
    int n = rand() % 9;

    if (n > 0 && n <= 3)
        return (new A);
    else if (n > 3 && n <= 6)
        return (new B);
    return (new C);
}

void    identify_from_pointer(Base * p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C" << std::endl;
    else
        std::cout << "NANI" << std::endl;
    return ;
}

void    identify_from_reference(Base & p)
{
    identify_from_pointer(&p);
    return ;
}