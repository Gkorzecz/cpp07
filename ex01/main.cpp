#include "iter.hpp"
#include <iostream>

static void ft_putString(std::string &s)
{
    std::cout << s << std::endl;
}

static void ft_putConstString(std::string const &s)
{
    std::cout << s << std::endl;
}

int main()
{
    std::size_t arrLength = 5;
    std::string stringArray[5] = {"This", "Is", "A", "String", "Array"};
    iter(stringArray, arrLength, ft_putString);
    iter(stringArray, arrLength, ft_putConstString);
    return (0);
}