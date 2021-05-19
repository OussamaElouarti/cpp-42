#include "whatever.hpp"

int main( void ) 
{
    int     i1, i2;
    double  d1, d2;
    char    c1, c2;

    // SWAP
    std::cout << std::endl;
    i1 = 10;
    i2 = 20;
    std::cout << "Swap i1 = " << i1 << " && i2 = " << i2 << " : " << std::endl;
    ::swap(i1, i2);
    std::cout << "i1 = " << i1 << std::endl;
    std::cout << "i2 = " << i2 << std::endl;

    std::cout << std::endl;
    d1 = 8.65;
    d2 = 12.555;
    std::cout << "Swap d1 = " << d1 << " && d2 = " << d2 << " : " << std::endl;
    ::swap(d1, d2);
    std::cout << "d1 = " << d1 << std::endl;
    std::cout << "d2 = " << d2 << std::endl;

    std::cout << std::endl;
    c1 = 'p';
    c2 = 'o';
    std::cout << "Swap c1 = " << c1 << " && c2 = " << c2 << " : " << std::endl;
    ::swap(c1, c2);
    std::cout << "c1 = " << c1 << std::endl;
    std::cout << "c2 = " << c2 << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    std::cout << std::endl;
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    //MIN
    std::cout << "Min entre i1 = " << i1 << " && i2 = " << i2 << " : " << std::endl;
    std::cout << "Min = " << min(i1, i2) << std::endl;

    ::swap(d1, d2);
    std::cout << "Min entre d1 = " << d1 << " && d2 = " << d2 << " : " << std::endl;
    std::cout << "Min = " << min(d1, d2) << std::endl;

    std::cout << "Min entre c1 = " << c1 << " && c2 = " << c2 << " : " << std::endl;
    std::cout << "Min = " << min(c1, c2) << std::endl;

    //MAX
    i1 = -157;
    i2 = 85694;
    std::cout << "Max entre i1 = " << i1 << " && i2 = " << i2 << " : " << std::endl;
    std::cout << "Max = " << max(i1, i2) << std::endl;

    d1 = 896.68842;
    d2 = 17.66;
    std::cout << "Max entre d1 = " << d1 << " && d2 = " << d2 << " : " << std::endl;
    std::cout << "Max = " << max(d1, d2) << std::endl;

    c1 = 'A';
    c2 = 'a';
    std::cout << "Max entre c1 = " << c1 << " && c2 = " << c2 << " : " << std::endl;
    std::cout << "Max = " << max(c1, c2) << std::endl;

    return (0);
}