#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template< typename T >
T & max(T & x, T & y)
{
    return (x>y ? x : y);
}

template< typename T >
T & min(T & x, T & y)
{
    return (x<y ? x : y);
}

template< typename T >
void  swap(T &s1, T &s2)
{
    T tmp;
    tmp = s1;
    s1 = s2;
    s2 = tmp;
}

#endif