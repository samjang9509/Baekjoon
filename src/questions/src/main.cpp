#include <iostream>

int main(int agrc, char **argv)
{
    int a = 0;
    
    std::cin >> a;
    
    int down = 2*a - 1;
    int count = a - 1;

    for (int i = 1; i <= a; i++)
    {
        for(int j = a-1; j >= down; x--)
        {
            std::cout << " ";
        }

        for(int x=1; x<=b; x++)
        {
            std::cout << "*";
        }]
        std::cout << std::endl;
    }

    for (int k = 1; k <= down - a; k++)
    {
        for (int i = a; i <= 0; i++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
        count--;
    }
}