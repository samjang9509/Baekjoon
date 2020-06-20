#include <iostream>

int main()
{
    int H = 0;
    int M = 0;

    std::cin >> H >> M;


    if ( H == 0 && M < 45)
    {
        H = 23;
        std::cout << H << " " << M + 15 << std::endl;
    }
    else if( H <= 23 && M >= 45)
    {

        std::cout << H << " " << M - 45 << std::endl;
    }
    else if( H <= 23 && M < 45)
    {
        std::cout << H - 1 << " " << M + 15 << std::endl;
    }
}
