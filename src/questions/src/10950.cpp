#include <iostream>

int main()
{
    int n;
    
    std::cin >> n;

    for(int a = 1; a <= n; a++ )
    {
        int f, s;
        std::cin >> f >> s;

        std::cout << f + s << std::endl;
    }

return 0;

}