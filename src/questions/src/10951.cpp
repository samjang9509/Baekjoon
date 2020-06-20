#include <iostream>

int main()
{
    int a = 0;
    int b = 0;

    while( 1 )
    {
        std::cin >> a >> b;
        if (std::cin.eof() == true)
        {
            break;;
        }
        std::cout << a + b << std::endl;

    }
}