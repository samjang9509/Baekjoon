#include <iostream>

int main()
{
    int s = 0;

    std::cin >> s;

    for (int a = 1; a <= s; a++)
    {
        for (int j = (s - a); j >= 0; j--)
        {
            std::cout << " ";
        }
        for (int i = 1; i <= a; i++)
        {
            std::cout << "*";
        }
        std::cout << '\n';
    }

    return 0;
}