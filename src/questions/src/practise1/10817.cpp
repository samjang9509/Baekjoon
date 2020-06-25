#include <iostream>
#include <algorithm>


int main (int argc, char argv)
{
    int a, b, c;

    std::cin >> a >> b >> c;

    int N[] = { a, b, c};

    std::sort(N, N + 3);

    std::cout << N[1] << std::endl;

    
}