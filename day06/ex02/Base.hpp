#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <time.h>
# include <random>

class Base 
{
    public :
        virtual ~Base() {};
};

Base    *generate(void);

#endif