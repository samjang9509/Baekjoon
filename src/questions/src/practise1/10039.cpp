#include <iostream>

int main()
{
    int sum = 0;
    int a = 0;

    for (int i = 0; i < 5; i++)
    {
        std::cin >> a;

        if (a < 40)
        {
            a = 40;
        }
        sum += a;
    }
    std::cout << sum / 5 << std::endl;
}