# include "easyfind.hpp"

int     main( void )
{
    std::deque<int> lst;
    lst.push_back(1);
    lst.push_back(18);
    lst.push_back(21);
    lst.push_back(150);
    easyfind(lst, 150);
    easyfind(lst, 21);
}