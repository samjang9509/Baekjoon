#include <iostream>

int main()
{
    int a;
    int b;

    std::cin >> a >> b;

    if( a < b)
    {
        printf("<\n");
    }

    if( a > b)
    {
        printf(">\n");
    }

    if( a == b)
    {
        printf("==\n");
    }
return 0;
}