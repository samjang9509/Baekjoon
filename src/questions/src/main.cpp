#include <iostream>

int main()
{   
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int a, b , c;

    std::cin >> a >> b;

    for(int i = 1; i <= a; i++)
    {
        std::cin >> c;

        for(int j = c; c < b ; )
        {
            std::cout << c << '\n';
        }
    }

    return 0;
}