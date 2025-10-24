// main.cpp  – C++98 test driver for Array<T>
#include <iostream>
#include "Array.hpp"

int main()
{
    /* construct an Array<int> of 5 elements and fill it */
    Array<int> a(5);
    for (unsigned int i = 0; i < a.getSize(); ++i)
        a[i] = static_cast<int>(i * 2);        // 0 2 4 6 8

    std::cout << "a     = " << a << '\n';

    /* copy-construct */
    Array<int> b(a);
    std::cout << "b     = " << b << '\n';

    /* copy-assign */
    Array<int> c;
    c = b;
    std::cout << "c     = " << c << '\n';

    /* trigger bounds-checking exception */
    try {
        std::cout << a[10] << '\n';
    } catch (const std::out_of_range &e) {
        std::cerr << "Exception caught: " << e.what() << '\n';
    }
    return 0;
}