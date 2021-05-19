#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *arr, int size, void (*func)(T const &))
{
    for (int i = 0; i < size; i++)
        func(arr[i]);
    return;
}

template<typename T>
void    printarr(T&arr)
{
    std::cout << arr << " ";
    return;
}
#endif