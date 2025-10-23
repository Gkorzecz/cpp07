#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>
#include <iostream>
#include <sstream>
#include <stdexcept>

template <typename T>
class Array
{
    private :
        T *_array;
        size_t _size;
    public :
        Array();
        Array(const Array<T> &other);
        ~Array();

};

#endif