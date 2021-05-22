#pragma once

# include <iostream>
# include <list>
# include <vector>
# include <algorithm>
# include <deque>

template<typename T>
void     easyfind(T &a, int b)
{
    typename T::iterator it;
    typename T::iterator ite = a.end();
    for (it = a.begin(); it != ite; ++it)
    {
        if(*it == b)
        {
            std::cout << "its in!" << std::endl;
            return ;
        }
    }
    std::cout << "oh no" << std::endl;
}
