#include <iostream>

int main()
{
    int a[9];

    for(int i = 0; i < 9; i++)
    {
        std::cin >> a[i];
        if(a[i] >= 100) i--;
    }
    
    int max = a[0];
    int n = 1;
    
    for(int i = 0 ; i < 9 ; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            n = i + 1;
        }

    }
    std::cout << max << "\n" << n;
}