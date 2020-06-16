#include <iostream>

int main()
{
    int h = 0;
    int m = 0;

    std::cin >> h >> m;

    if(h == 0 && m > 45)
    {
        std::cout << h << " " << m - 45 << std::endl;
    }
    else if(h == 0 && m < 45)
    {
        h = 23;
        
        std::cout << h << " " << m + 15 << std::endl;
    }
    else if(h > 0 && m > 45)
    {

        std::cout << h << " " << m - 45 << std::endl;
    }
    else if(h > 0 && m < 45)
    {
        std::cout << h - 1 << " " << m + 15 << std::endl;
    }

}