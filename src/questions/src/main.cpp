#include <iostream>

int main()
{
    int s = 0;

    std::cin >> s;

    for (int a = 1; a <= s; a++)
    {
        for (int i = 1; i <= a; i++)
        {
            for (int j = a; j >= 0; j--)
            {
                std::cout << " ";
            }
            std::cout << "*";
        }
        std::cout << '\n';
    }

    return 0;
}