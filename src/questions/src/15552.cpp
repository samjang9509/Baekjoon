#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    
    std::cin >> n;

    for(int a = 1; a <= n; a++ )
    {
        int f, s;
        std::cin >> f >> s;
        std::cout << f + s << '\n';
    }

return 0;

}