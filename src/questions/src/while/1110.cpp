#include <iostream>

int main()
{
    int num1, num2, num3;
    int initial,final = 0;
    int loop = 0;

    std::cin >> initial;
    final = initial;

    while (1)
    {
        num1 = final / 10;
        num2 = final % 10;
        num3 = num1 + num2;

        if (num3 >= 10)
        {
            num3 = num3 % 10;
        }

        final = num2 * 10 + num3;
        ++loop;

        if (initial == final)
        {
            break;
        }
    }
    std::cout << loop << std::endl;
    return 0;
}