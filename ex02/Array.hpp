#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstddef>
# include <iostream>
# include <sstream>
# include <stdexcept>

template <typename T>
class Array
{
    private :
        T *rawArray;
        unsigned int size;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array<T> &original);
        ~Array();
        unsigned int getSize() const;

    Array<T> &operator=(const Array<T> &original);
    T &operator[](unsigned int position) const;
};

template <typename T>
std::ostream &operator<<(std::ostream &os, const Array<T> &array);

#endif