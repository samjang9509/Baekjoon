#include <iostream>

int main()
{
    int a = 0;
    int b = 0;

    std::cin >> a >> b;

    int f, s, t;

    t = b/100;

    f = b%10;

    s = (b/10)%10;

    int hundred = 0;
    hundred = (a * (t));

    int ten = 0;
    ten = (a * (s));

    int one = 0;
    one = (a * (f));

    int total = 0;
    total = (hundred * 100) + (ten * 10) + (one);
    std::cout << one << std::endl;
    std::cout << ten << std::endl;
    std::cout << hundred << std::endl;
    std::cout << total << std::endl;
    

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