#include <iostream>
#include <algorithm>

int main(int argc, char **argv)
{
    int A = 0;

    std::cin >> A;

    int array[A];


    for ( int i = 0; i < A; i++)
    {
        std::cin >> array[i];
        
    }    
    
    int max = array[0];
    int min = array[0];

    for (int i = 0; i < A; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
        if(array[i] < min)
        {
            min = array[i];
        }

    }

    std::cout << min << " " <<  max << std::endl;
}