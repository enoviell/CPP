#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>

template <typename T>

void iter(T *array, size_t lenght, void(*func)(T const &))
{
    for(size_t i=0; i<lenght; i++)
        func(array[i]);
}


template <typename T>
void print(T const &x)
{
    std::cout << x<< " " ;
}



#endif