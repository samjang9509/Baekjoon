#include <iostream>
#include <algorithm>

int main(int argc, char **argv)
{
    int A = 0;
    int B = 0;

    std::cin >> A;
    int *array = new int[A];
    int array[A];
    for(int i = 0; i < A; i++)
    {
        std::cin >> B;
        array[i] = B;
        std::sort(array, array + i);
    }

    std::cout << array[0] << array[A] << std::endl;
    
}