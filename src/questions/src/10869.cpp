#include <iostream>

int main()
{
    int A = 0 ;
    int B = 0;

    std::cin >> A >> B;

    int add = 0;
    add = A + B;

    int sub = 0;
    sub = A - B;

    int mult = 0;
    mult = A * B;

    int div = 0;
    div = A / B;

    int res = 0;
    res = A % B;

    std::cout << add << std::endl;
    std::cout << sub << std::endl;
    std::cout << mult << std::endl;
    std::cout << div << std::endl;
    std::cout << res << std::endl;

    return 0;
}