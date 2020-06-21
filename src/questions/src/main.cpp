#include <iostream>

int a, b, c;

int main ()
{
    std::cin >> a >> b >> c;

    if( a <= b )
    {
        if ( a == b)
        {
            std::cout << b << std::endl;
        }
        else if ( b <= c )
        {
            std::cout << b << std::endl;
        }
        else if ( c < b )
        {
            std::cout << c << std::endl;
        }
    }
    else if( c <= a)
    {
        if ( c == a)
        {
            std::cout << a << std::endl;
        }
        else if ( b <= a )
        {
            std::cout << b << std::endl;
        }
        else if ( a < b )
        {
            std::cout << a << std::endl;
        }
    }
    else if( b <= c)
    {
        if ( c == b)
        {
            std::cout << b << std::endl;
        }
        else if ( c <= a )
        {
            std::cout << c << std::endl;
        }
        else if ( a < c )
        {
            std::cout << a << std::endl;
        }
    }
}