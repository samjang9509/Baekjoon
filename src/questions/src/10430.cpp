#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    std::cin >> a >> b >> c;

    std::cout << (a+b)%c << std::endl;
    std::cout << ((a%c) + (b%c))%c << std::endl;
    std::cout << (a*b)%c << std::endl;
    std::cout << ((a%c) * (b%c))%c << std::endl;


    return 0;
}