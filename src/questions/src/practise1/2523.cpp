#include <iostream>

int main(int agrc, char **argv)
{
    int a = 0;

    std::cin >> a;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    int down = 2*a - 1;
    int count = a - 1;
    for (int k = 1; k <= down - a; k++)
    {
        for (int i = 1; i <= count; i++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
        count--;
    }
}