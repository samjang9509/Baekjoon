#include <iostream>

int main()
{
    int a = 0;
    int b = 0;

    std::cin >> a >> b;

    int f, s, t;

    f = b/100;

    int mult = 0;
    mult = a * (f);

    std::cout << mult << std::endl;


    return 0;
}

// int main()
// {
//     int n=152;
//     int a,b,c,d,f,g,z;
//      a=n/100;
//      b=n/10;
//      c=n/1;
//     printf("a= %d  b = %d  c=%d\n",a,b,c);
//     d=n%100;
//     f=n%10;
//     g=n%1;
//     printf("d= %d  f = %d  g=%d\n",d,f,g);
//     z=b%10;
//     printf("z=%d\n",z);
//     return 0;
// }