#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename F>
void Iter(T *array, size_t arrayLenght, F *function)
{
    for (size_t i = 0; i < arrayLenght; i++)
        function(array[i]);
}

#endif