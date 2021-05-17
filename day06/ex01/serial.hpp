#ifndef SERIAL_HPP
# define SERIAL_HPP

# include <iostream>
# include <string>
# include <time.h>

struct Data
{
    std::string str1;
    std::string str2;
    int n;
};

void    *serialize(void);
Data    *deserialize(void * raw);

#endif
