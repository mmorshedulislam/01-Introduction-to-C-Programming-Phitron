#include <stdio.h>
int main()
{
    // int
    int a = 1000000000; // 10 digits 2*32-1
    printf("%d", a);

    // long int
    long long int b = 1000000000000; // 20 digits 2*64-1
    printf("%lld", b);

    // float
    float c = 2005.5567894445; // output 2005.556763 (wrong answer)
    printf("%f", c);

    // double
    double d = 2005.5567894445; // output 2005.556789 (right answer)
    printf("%lf", d);

    // double with decimal point
    double e = 25.123456789123456; // output 25.123456789123455
    printf("%0.15lf", e);

    return 0;
}
