#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int a, b, c;

    std::cin >> a >> b;

    

    for (int i = 1; i <= a; i++)
    {
        std::cin >> c;
        int N[c];

        if ( c < b)
        {
            std::cout << c << " ";
        };
        
    }
    std::cout << '\n';

    return 0;
}