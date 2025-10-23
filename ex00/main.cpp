#include "whatever.hpp"
#include <iostream>
#include <string>

int main(void)
{
    int a = 1;
    int b = 2;

    char c = 'c';
    char d = 'd';

    float e = 4.57f;
    float f = 8.21f;

    std::cout << max(a, b) << std::endl;
    std::cout << min(c, d) << std::endl;

    std::cout << "Before swap, e is equal to " << e << std::endl;
    std::cout << "Before swap, f is equal to " << f << std::endl;
    swap(e, f);
    std::cout << "After swap, e is equal to " << e << std::endl;
    std::cout << "After swap, f is equal to " << f << std::endl;

    
    const char *s1 = "bonjour";
    const char *s2 = "salut";

    std::cout << "Before swap, s1 is equal to " << s1 << std::endl;
    std::cout << "Before swap, s2 is equal to " << s2 << std::endl;
    swap(s1, s2);
    std::cout << "After swap, s1 is equal to " << s1 << std::endl;
    std::cout << "After swap, s2 is equal to " << s2 << std::endl;

    
    std::string g1 = "Hello";
    std::string g2 = "Bye";
    
    std::cout << "Before swap, g1 is equal to " << g1 << std::endl;
    std::cout << "Before swap, g2 is equal to " << g2 << std::endl;
    swap(g1, g2);
    std::cout << "After swap, g1 is equal to " << g1 << std::endl;
    std::cout << "After swap, g2 is equal to " << g2 << std::endl;
    return (0);
}

// int main( void ) {
// int a = 2;
// int b = 3;
// ::swap( a, b );
// std::cout << "a = " << a << ", b = " << b << std::endl;
// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// std::string c = "chaine1";
// std::string d = "chaine2";
// ::swap(c, d);
// std::cout << "c = " << c << ", d = " << d << std::endl;
// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// return 0;
// }