#include <iostream>

// int main()
// {
//     int n = 0;

//     std::cin >> n;

//     int p = 0;
    
//     p = (n * (n+1)) / 2 ;

//     std::cout << p << std::endl;

// }

int main()
{
    int n = 0;

    std::cin >> n;

    int sum = 0;

    for(int a = 1; a <= n; a++)
    {
        
        sum = sum + a;
    };

    std::cout << sum << std::endl;
    
}