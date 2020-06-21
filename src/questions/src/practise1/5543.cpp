#include <iostream>

int hb, mb, lb;
int c, s;
int set = 0;

int main()
{
    std::cin >> hb >> mb >> lb >> c >> s;

    if (c <= s)
    {
        if (hb <= mb && hb <= lb)
        {
            set = hb + c - 50;
            std::cout << set << std::endl;
        }
        else if (mb <= hb && mb <= lb)
        {
            set = mb + c - 50;
            std::cout << set << std::endl;
        }
        else if (lb <= mb && lb <= hb)
        {
            set = lb + c - 50;
            std::cout << set << std::endl;
        }
    }

    else if (s < c)
    {
        if (hb <= mb && hb <= lb)
        {
            set = hb + s - 50;
            std::cout << set << std::endl;
        }
        else if (mb <= hb && mb <= lb)
        {
            set = mb + s - 50;
            std::cout << set << std::endl;
        }
        else if (lb <= mb && lb <= hb)
        {
            set = lb + s - 50;
            std::cout << set << std::endl;
        }
    }
}