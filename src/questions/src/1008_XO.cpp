#include <iostream>

int main()
{
    int A = 0 ;
    int B = 0;

    std::cin >> A >> B;

    double result = 0;
    result = (double)A /(double)B;

    std::cout.precision(10);
    std::cout << result << std::endl;

    return 0;
}