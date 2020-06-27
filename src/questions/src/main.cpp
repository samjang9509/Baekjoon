#include <iostream>

int main(int agrc, char **argv)
{
    int a = 0;
    std::cin >> a;

    int down = a - 1;

    for ( int i = 0; i < a; i++)
    {
        for(int j = 0; j < i; j++)
        {
            std::cout << " ";
        }
        for(int k = 0; k < 2 * (a-i) - 1; k++ )
        {
            std::cout << "*";
        }
        std::cout << '\n';     
    }

    for(int i = 0; i < down; i++)
    {
        for(int j = 0; j < 2 * a - 1; j++)
        {
            
        }
    }



}