#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>
#include <string>
#include <iostream>

template <typename T>
void iter(T *array, std::size_t arr_len, void (*f)(T &))
{
    if (!array || !f)
        return;
    for (std::size_t i = 0; i < arr_len; ++i)
	{
        f(array[i]);
	}
	// std::cout << "Non-Const" << std::endl;
}

template <typename T>
void iter(T *array, std::size_t arr_len, void (*f)(T const &))
{
    if (!array || !f)
        return;
    for (std::size_t i = 0; i < arr_len; ++i)
	{
        f(array[i]);
	}
	// std::cout << "Const" << std::endl;
}


#endif