#include <iostream>

int main()
{
    int a = 0;
    int b = 0;

    while( 1 )
    {
        std::cin >> a >> b;
        if( a == 0 && b == 0)
        {
            break;
        };
        std::cout << a + b << std::endl;

    }
}