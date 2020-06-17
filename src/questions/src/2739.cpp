#include <iostream>

int main()
{
    int n = 0;
    
    std::cin >> n;

    for(int a = 1; a <= 9; a++ )
    {
        int mult = 0;
        
        mult = n * a;

        std::cout << n << " * " << a << " = " << mult << std::endl;
    }

return 0;

}